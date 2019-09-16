#### 结构体

* 结构体声明元素时的顺序也会影响结构体占用内存的大小

> 结构体中的元素在内存中需要遵循内存对齐原则，如果顺序不当，可能一个字节的字符就会占用多个字节的内存

* 可以使用typedef使得定义结构体时合二为一

> 注意一般使用`typedef`定义的类型首字母使用大写

```c
typedef stuct point {
    float x;
    float y;
} Point;
```

* 通常使用结构体指针访问元素的值时需要写作：`(*v1).x`Ｃ语言中提供了简单的写法：`v1->x`
* 结构体变量作为函数参数时不如使用结构体的指针，这样更加节省空间
* 结构体之间直接进行加号运算是没有定义的

#### 共用体

>  共用体使多种不会同时出现的变量共用同一块内存成为了可能

* 共用体类型大小取决于其中最大的一个成员类型
* 结构体类型中也可以含有共用体类型的成员(把共用体放在确定位置即可)

```c
union register {
    struct {
        unsigned char byte1;
        unsigned char byte2;
        unsigned char byte3;
        unsigned char byte4;
    } bytes;
    unsigned int number;
};
```

> 位域：这里的`:1``:4`表示冒号前的变量只需要占１个和４个二进制位，不按照`char`类型默认的字节数占用内存

```c
union {
    struct {
        unsigned char b1:1;
        unsigned char b2:1;
        unsigned char b3:1;
        unsigned char b4:1;
        unsigned char reserved:4;
    } bits;
    unsigned char byte;
}
```



#### 链表

> 注意释放链表开辟的空间

#### 枚举

* 当SUNDAY和WEDNESDAY都被编号为１时，使用MONDAY和THURSDAY都会相当于使用２了
* 默认编号从１开始
* 可以对任何一个枚举成员进行显性的编号，没有显性编号的成员从之前一个显性编号的成员开始计算
* 也可以给枚举类型变量设置别名
* 枚举类型中成员类型并不能有结构体和共用体变量

```c
enum week {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY = 1,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
```

#### 文件指针

* 如果不在程序中使用`fclose`程序正常结束时，程序会为所有打开的文件调用`fclose`

#### &&

> `return 0`是不能作为表达式中的，它没有返回值，不能计算