# C++

## C++基础知识

### 高级语言

#### 编译

编译(compile)是用**编译器(compiler)**程序把高级语言所编写的源程序(source code)翻译成用机器语言指令表示的目标代码，使目标代码和源程序在功能上完全等价，通过**连接器(linker)**程序将目标程序与相关库连接成一个完整的可执行程序。有点事执行速度快，产生的可执行程序可以脱离编译器和源程序独立存在，反复执行。

#### 解释

解释(interpret)是用**解释器(interpreter)**程序将高级语言编写的源程序逐句进行分析翻译，解释一句，执行一句。当源程序解释完成时，目标程序也执行结束，下次运行程序时还需要重新解释执行。其优点是移植到不同的平台是不用修改程序代码，只要有合适的解释器即可。

### UML

统一建模语言(unified moddeling language,UML)是用来对软件系统进行可视化建模的一种语言，**UML的目标是以面向对象图的方式来描述任何类型的系统，最常用的是建立软件系统的模型，**但它同样可以用来描述非软件领域的系统，如机械系统、企业机构或业务过程，以及处理复杂数据的信息系统、具有实时要求的工业系统或工业过程等。

UML定义了包含类图(class diagram)、对类图(object diagram)等13种图示，是面向对象程序设计常用的分析和建模工具。UML不是程序设计语言，而是一个标准的图形表示法，它仅仅是一组符号而已。

### 面向对象程序设计语言的特征

1. 抽象(Abstract)
2. 封装(Encapsulation)
3. 继承(Inherit)
4. 多态(Polymorphism)

### 标准C++和传统C++

#### 头文件区别

传统C++与C语言相似，而标准C++在调用头文件时则采用没有.h扩展名的新式头文件，若是C函数库的头文件，则将"c"放在文件名前面，如iostream、fstream、cstdio、cctype、cmath

#### 命名空间限定

传统C++的库函数调用同C语言的的一样，直接调用函数就行了。标准C++中的任何内容(不包括来源于C库文件中的函数)则用"`std::`"前缀限定，其全名是"`std::x`"，x可以是函数、常量、数据结构、系统变量等内容。这样，std把标准C++中的内容统一管理了，能够有效地区别于传统C++中的同名标识符

### C++标准语法

#### C++字符集

1. 小写字母26个
2. 大写字母26个
3. 数字字符10个
4. 符号29个：`_ { } [ ] # ( ) < > % : ; . ? * + - / ^ & | ~ ! = , \ " '`
5. 空白字符5个：空格 Tab 回车换行 Ctrl+L Ctrl+K

>需要注意，`@ $ ' 非ASCII码西文字符 汉字 日韩文字`等不是C++合法的字符。C++与C语言的字符集完全相同

#### 空白符

空白符(white-space character)是**C++语法间隔的符号**。C++03标准规定了5个空白符，并且注释可以当作语法间隔。C++与C语言的空白符完全相同。

例如，"ABCD"是一个词语，而"AB CD"是两个词语。值得一提的是，对文字词语来说，符号字符也可以当作分隔符，例如"AB+CD"被"+"号分隔为两个词语。

#### 三元符

C++03标准定义了三元符(trigrah seqeuence)，可以替代有些国家计算机系统基本字符集没有包含的某些合法字符。C++与C语言的三元符完全相同。

|三元符|替换字符|
|:---:|:---:|
|`??=`|`#`|
|`??(`|`[`|
|`??)`|`]`|
|`??/`|`\`|
|`??'`|`^`|
|`??<`|`{`|
|`??>`|`}`|
|`??!`|`\|`|
|`??-`|`~`|

#### 关键字

<mark>施工中</mark>

#### 标识符

同C语言，参见[C语言附录](https://github.com/nullnamelessness/Learn-C-In-Chinese?tab=readme-ov-file#%E5%87%BD%E6%95%B0 "标识符部分")

### C++程序基本结构

#### 函数结构

```cpp
返回类型 函数名(形式参数列表){      //函数头
    函数体声明部分                 /*函数体*/
    函数体执行语句
}
```

#### 类结构

类一般由类定义和类实现组成，两者可以分开。如类定义可以在头文件中，类实现可以在源文件中，在C++中称为接口和实现分离

#### 文件结构

C++源程序文件包含预处理命令、类和若干函数

main()函数同C语言，参见[C语言函数](https://github.com/nullnamelessness/Learn-C-In-Chinese?tab=readme-ov-file#%E5%87%BD%E6%95%B0 "main()函数部分")

## C++程序设计基础

### `typedef`与`using`

* 区别：`typedef`向下兼容`using`只能在C++11标准以上的编译器中运行  
`using newname = type;`
* `typedef`是存储类别关键字，因此不能与`auto`、`static`、`register`和`extern`同时使用

### 断言

断言(assert)是一种检测错误的宏，assert(表达式)，一旦表达式中的值为假，则会退出程序

在asser头文件包含的前面定义NDEBUG宏，可以让断言失效

```cpp
#define NDEBUG
#include <cassert>
```

### 数据的输入和输出

#### 数据类型

<mark>施工中</mark>

>在不同编译环境下，long double和int占用的内存大小不尽相同，但用short和long限定的int具有固定的长度，在任何支持C++语言的编译器中，它们的长度都分别为2和4，因此，为了编写可移植的程序，应将整型变量声明为short或long

#### `cin`和运算提取符`>>`

* 在`>>`后面只能出现变量名，这些变量应该是系统预定义的简单类型定义
* `cin`具有自动识别数据类型的能力
* 在读取数值型数据时，`>>`将首先忽略数字前面的所有空白符号，如果遇到&plusmn;或数字，就开始读入，包括浮点型数据的小数点，当遇到空白或其他非数字字符时，停止提取数据

#### `cout`和插入运算符`<<`

* 换行符使用`\n`或者`std::endl`

#### 输出格式控制符

#include<<mark>iomanip</mark>>

1. 设置浮点数精度，<mark>直到再次使用该函数改变为止</mark>
`setprecision(n)`

2. 设置输出域宽和对齐方式，<mark>该函数只对紧随其后的一个输出数据有效</mark>
`setw(n)`

3. 设置对齐方式，
`setiosflags(long f)`
`resetiosflags(long f)`
`iostream`头文件中还定义了两个表示对齐方式的常数，左对齐：`ios::left`，右对齐(默认)`ios::right`，<mark>用`setiosflags()`设置输出对齐方式后，将一直有效，直到用`resetiosflags()`取消它</mark>

4. 设置正号显示和布尔值
`showpos`(设置正号)
`noshowpos`(取消正号)
`boolalpha`(用true和false表示布尔值)
`scientific`(设置数据显示方式为科学计数法)直到使用`fixed`(取消设置数据显示方式)

#### 数值基数

#include<<mark>iostream</mark>>

`hex`、`oct`、`dec`长期有效

#### string和字符串的输入输出

#include <<mark>string</mark>>

C++语言的基本类型系统中没有字符串类型，但在其标准模板库(STL)中提供了字符串类型————string，需要注意的是，<mark>string类型的对象不需要NULL字符结尾</mark>

* string对象的定义和初始化
```cpp
string c;                           //定义字符串c，不含任何字符
string c1("this is a string");      //定义字符串c1，并用指定字符串初始化其内容
string c2 = c1;                     //定义字符串c2，并用c1初始化它
string s[10];                       //定义字符串数组s，相当于char[10][]
string s(5,'c');                    //定义字符串s，用5个'c'，即"ccccc"初始化
```

* string类型的运算  
string类型可以直接使用`=`、`+`、`+=`、`>`、`>=`、`==`、`<`、`<=`、`!=`运算，结果类似C语言的str类函数
* 成员函数`str.c_str()`可以返回char指针
* 成员函数`str.assign(C_str,n)`将C语言风格字符串`C_str`开始的n个字符赋值给`str`
* 成员函数`str.at(int n)`或直接使用`str[n]`引用string类型对象的第n个字符
* 成员函数`str.size()`、`str.length()`可以返回字符串长度
* 成员函数`str.empty()`可以检查字符串是否为空字符串
* 成员函数`str.substr(int m,int n)`可以返回从下标m开始的n个字符的字符串
* 成员函数`str.find(char *s,pos)`从pos开始查找字符串`s`在`str`中的位置
* 成员函数`str.erase(int m,int n)`从下标m开始往后删除n个字符
* 成员函数`str.append(char *s,int m,int n)`在`str`末尾增加字符串`s`从下标m开始的n个字符
* 成员函数`str.replace(char c,int m,char *s,int n)`删除从c开始的m个字符，然后在c处插入字符串`s`的前n个字符
* 成员函数`str.replace(char c,int m,char *s,pos,int n)`删除从c开始的m个字符，然后在c处插入字符串`s`从pos开始的前n个字符
* 成员函数`str.insert(char c,char *s,int n)`在c位置插入字符串`s`的前n个字符
* 成员函数`str.insert(char c,char *s,pos,int n)`在c位置插入字符串`s`从pos开始的前n个字符

#### 数据输入输出的经典问题

1. 输入数据类型不匹配引发的问题
当`cin`遇到输入数据类型不匹配时，不会报告错误，而是设置输入失效位，并关闭输入流，此后的所有`cin`语句会被忽略而不执行(直到使用cin.clear()清除该失效位)
2. 为变量输入空白字符的问题
* 用函数get()输入空白字符  
`cin.get(char c);`
* 用函数getline()输入包含空白的长字符串  
`cin.getline(char *c,int n,char ='\n');`其中，c是保存输入数据的数组，n为要提取的字符个数，指示从输入流中读取n-1个字符到数组c中(系统自动在第n个位置填写结束符'`\0`')，第三个参数用于指定停止从输入流提取数据的结束符(默认结束分隔符是'`\n`')
3. 函数getline()没有读取输入数据就结束了的问题
* 输入流中的字符多余getline()需要的字符数

当输入流中的字符多与函数getline()指定接受的字符个数时，会把余下的字符流在输入流中，同时会设置输入失效位，并关闭输入流

清除失效位:  
`cin.clear();`

忽略残留在输入流中的多于字符：  
`cin.ignore(int nCount = 1, char delim = EOF);`其中，nCount是忽略掉的字符个数，默认为1，delim可以指定结束符的位置，默认为EOF

4. 函数getline()提取了上一条cin语句遗留在输入流中的`\n`结束符而不读取数据的问题  
解决方法：使用`getchar()`、`cin.get()`、`cin.ignore()`略过分隔符

### 流式输入输出总结

* **输入输出格式控制符**

|格式控制符|含义|
|:---:|:---:|
|endl|插入换行符且刷新缓冲区输出到设备上|
|ends|插入空字符'`\0`'|
|flush|所有在缓冲区的字符立即输出到设备上|
|boolalpha|逻辑型用文字值true或false输入输出|
|noboolalpha|逻辑型用整数值1或0输入输出|
|dec|用十进制形式输入输出整数|
|oct|用八进制形式输入输出整数|
|hex|用十六进制形式输入输出整数|
|setbase(int base)|设置整数进制基数，base只能是8、10或16之一|
|left|在设定的域宽内左对齐输出，右端用填充字符填充|
|right|在设定的域宽内右对齐输出，左端用填充字符填充|
|internal|在设定的域宽内右对齐输出，但若有符号(&plusmn;)，符号置于最左端|
|setfill(char c)|设置填充字符为c所指定的字符|
|setw(int n)|设置域宽为n初始域宽为0，<mark>唯一一个单次生效的设置</mark>|
|fixed|定点形式输出浮点数，未设置时用浮点数形式输出浮点数|
|scientific|指数形式输出浮点数|
|setprecision(int n)|设置精度为n|
|showbase|输出进制整数的前缀，十六进制为0x，八进制为0|
|noshowbase|清除showbase的设置|
|showpoint|强制输出小数点，未设置时只在非整数情况下才输出小数点|
|noshoiwpoint|清除showpoint的设置|
|showpos|强制输出数的正负号，未设置时只在负数情况下才输出符号|
|noshowpos|清除showpos的设置|
|uppercase|若数据是十六进制或有0x前缀时，设置数据中的字母为大写，未设置时为小写|
|nouppercase|清除uppercase的设置|
|skipws|输入时读取连续多个空白符并丢弃，即跳过空白符，未设置时空白符当作数据内容的一部分|
|noskipws|清除skipws的设置|
|unitbuf|设置每次输出插入操作立即刷新缓冲区内容，未设置时只有在缓冲区满或flush、endl、ends时才刷新缓冲区内容|
|nounitbuf|清除unitbuf的设置|
|setiosflags(mask)|设置ios标志值，mask为ios_base::fmtflags类型，见下拓展表|
|resetiosflags(mask)|清除ios标志值|

* **ios_base::fmtflags：**

>**可以使用位或运算(|)一次设置多个标志值**

|类型|标志值|
|:---:|:---:|
|逻辑|ios_base::boolalpha|
|进制|ios_base::dec、ios_base::oct、ios_base::hex、ios_base::basefield|
|浮点|ios_base::fixed、ios_base::scientific、ios_base::floatfield|
|对齐|ios_base::left、ios_base::right、ios_base::internal、ios_base::adjustfield|
|显示|ios_base::showbase、ios_base::showpoint、ios_base::showpos、ios_base::uppercase|
|其他|ios_base::skipws、ios_base::unitbuf|

* 流对象成员函数

|函数|含义|
|:---:|:---:|
|`precision(int n);`|等价于setprecision(int n)|
|`width(int n);`|等价于setw(int n)|
|`setf(mask);`|等价于setiosflags(mask)|
|`unsetf(mask);`|等价于resetiosflags(mask)|
|`fill(char c);`|等价于setfill(char c)|
|`get();`|提取一个字符，函数返回其值|
|`get(char& c);`|提取一个字符给c|
|`get(char *s,streamsize n);`|提取n-1个字符(遇到`\n`结束)到字符数组s或字符指针s指向区域|
|`get(char *s,streamsize n,char delim);`|同上，遇到分隔字符delim时结束|
|`get(streambuf& sb);`|提取n-1个字符(遇到`\n`结束)到字符串流缓冲对象|
|`get(streambuf& sb,char delim);`|同上，遇到分隔字符delim时结束|
|`getline(char *s,streamsize n);`|提取n-1个字符(遇到`\n`结束)到字符数组s或字符指针s指向区域|
|`getline(char *s,streamsize n,char delim);`|同上，遇到分隔字符delim时结束|
|`put(char c);`|输出一个字符c|
|`write(const char *s,streamsize n);`|输出n个字符数组s或字符指针s指向区域的字符|
|`flush();`|所有缓冲区的字符立即输出到设备上|

### 转义字符

参见C语言数据类型[转义字符部分](https://github.com/nullnamelessness/Learn-C-In-Chinese?tab=readme-ov-file#%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B%E5%92%8C%E8%A1%A8%E8%BE%BE%E5%BC%8F "转义字符")

### const限定

只读变量(read-only variable)或常变量(constant variable)

### volatile限定

隐式存取变量，阻止编译器对变量(某些程序如硬件中断服务程序对变量的存取不是明显的直接引用，而是按地址方式间接进行的，称为隐式引用。一旦对这样的变量进行存储优化，而不改变隐式引用方式，就会使得隐式引用得不到当前值)进行优化

在硬件中断服务程序、并行设备寄存器、多线程任务共享和嵌入式系统中经常使用volatile修饰

### 运算符与表达式

* 由于计算机存储的浮点数与数学上的实数有一定的误差，因此对浮点数不能用(==、!=)做相等或不等的比较运算，<mark>而是比较相对误差</mark>

>C++计算`&&`、`||`、`?:`等表达式时，有可能会遇到某些表达式未被执行的情况

eg.

```cpp
    int a,b=9,c=6,d=1;
    a=d?b:++c;
```

将m循环右移n位：
`m>>n|m<<sizeof(m)*8-n`
将m循环左移n位：
`m<<n|m>>sizeof(m)*8-n`

* C++的两种显式类型转换
1. (type)   (C-style cast)
2. type()   (函数式)

* 行连接符
C++规定`\`为行连接符，例如，当`//`注释最后一个字符为`\`则下一行也是注释

### 函数

#### ***可变参数函数***

* 可变参数函数的定义形式：

```cpp
#include <cstdarg>
返回类型    函数名(类型1 参数名1,类型2 参数名2,...){
    函数体
}
```

>**`...`为可选参数**

在函数体中用到<<mark>*cstdarg*</mark>>头文件定义的几个va_*的宏来引用可变参数

1. `va_list arg_ptr`定义一个指向个数可变的参数列表指针
2. `va_start(arg_ptr,argN)`使参数列表指针arg_ptr指向函数参数列表中第一个可选参数，argN是位于第一个可选参数之前的最后一个固定参数
3. `va_arg(arg_ptr,type)`返回参数列表中指针arg_ptr所指的参数，返回类型由type指定，并使指针arg_ptr指向参数列表中的下一个参数
4. `va_end(arg_ptr)`清空参数列表，并设置参数指针arg_ptr无效,指针arg_ptr设置无效后，可以通过调用va_start恢复，<mark>每次调用va_start后，必须有相应的va_end与之配对</mark>

#### 内联函数

```cpp
inline 返回类型 函数名(形式参数列表){
    函数体
}
```

内联函数可以同时在函数定义和函数原型中加inline修饰符，也可以指在其中一处加inline修饰符，但内联的声明必须出现在内联函数第一次被调用之前

#### 默认参数(default argument)

* <mark>*在同一个作用域内，默认参数只能设置一次，函数声明和函数定义中的默认参数即使完全相同，也会产生冲突，所以一般在函数声明中设置默认参数*</mark>
* 可以设置多个默认参数，设置数序为从右到左，换言之，要为某个参数设置默认值，则<mark>它右边的所有参数必须都是默认参数</mark>
>思考，为什么是从右到左？
<details>
    <summary>
    答案
    </summary>
    C++在函数调用时默认使用C调用，即参数的传递方式是从右到左压入栈的
</details>

* 默认值可以是<mark>常量或全局变量，甚至是一个函数调用(调用实参必须是常量或全局变量的表达式)</mark>，不可以是局部变量，因为默认参数的调用是在编译时确定的，而局部变量与默认值在编译时是无法确定的
* tip：可以借助全局变量改变函数的默认参数

#### 函数重载(function overloading)

* 函数重载与重复声明是有区别的

#### <mark>函数模板</mark>

```cpp
template<模板形参表>返回类型 函数名(形式参数列表){
    函数体
}
```

* 模板参数列表  
使用`typename`或`class`(可以混用)+参数类型名(早期C++只允许使用class)  
eg.`template<typename T,class Y,...>Y func(T a,Y b);`

* 非类型形参(nontype parameter)  
eg.`template<class T,int N>T func(T a);`  
在调用函数时非类型形参必须显式地给出其值，一般形式为：  
函数名<模板实参列表>(实参列表)  
eg.`func<double,5>(10.67);`

* 内联函数模板  
eg.`template<class T>inline T func(T a);`

#### 作用域与生命周期

作用域(scope)生命周期(lifetimes)

* 局部变量  
定义屏蔽

* 全局变量(global variable)

* 作用域(scope)
1. 文件作用域(file scope)
2. 函数作用域(function scope)
3. 块作用域(block scope)
4. 类型声明作用域(declaration scope)
5. 函数原型作用域(function prototype scope)

C++实体可见规则：  
1. 同一作用域内不允许有相同名字的实体，不同的作用域的实体互补可见，可以有相同名字
2. 实体在包含它的作用域内，从定义或声明的位置开始，按文件行的顺序往后(往下)直到该作用域结束均是可见的，包含作用域内的所有子区域及其嵌套，但往前(往上)不可见，同时包含该作用域的上一级区域也不可见
3. 若实体A在包含它的作用域内的子区域中出现了相同名字的实体B，则实体A被屏蔽(hide)，即实体A在子区域不可见，在子区域中可见的是实体B
4. <mark>**可以使用extern声明将变量或函数的可见区域往前延伸，称为前置声明(forward declaration)**</mark>
5. <mark>**在全局作用域中，变量或函数实体若使用static修饰，则该实体对于其他源文件是屏蔽的，称为私有的(private)**</mark>

#### 程序映像和内存布局

C++源程序经过编译链接后产生的二进制可执行文件称为程序映像，可执行文件采用ELF格式(可执行连接模式)存储

* ***extern是声明，而不是初始化***
* ***只有当extern声明出现在全局作用域上，extern声明才允许出现初始化***

### 指针

初始化：

```cpp
T *ptr = 0;
T *ptr{};       //等价于ptr = nullptr;
ptr = NULL;
ptr = nullptr;
```

在C++11中，建议使用`nullptr`避免二义性

#### 位置获取函数begin()和end()<sup>c++ 11</sup>

`#include <iterator>`

#### `new`和`delete`

```cpp
type *p;
p = new type;       //只分配内存
p = new type(x);    //分配内存并初始化为x
p = new type[n];    //分配具有n个元素的数组空间
```

```cpp
delete p;           //释放动态分配的单个变量
delete []p;         //释放动态分配的数组空间
```

>new和delete也必须成对出现

#### 智能指针<sup>C++ 11</sup>

* 四种智能指针：auto_ptr、unique_ptr、shared_ptr、weak_ptr

```cpp
x_ptr<type> p;                  //仅定义指向type类型的智能空指针
x_pre<type> p2(p);              //定义指针并用p初始化
x_ptr<type> p3(new type(x));    //定义指针并为它分配空间且初始化为x
```

* 智能指针常用成员函数`get()`和`swap()`
* 智能指针可以在定义时就为它分配动态内存空间，<mark>**但不允许先定义智能指针，再为它分配动态内存空间**</mark>
* 同类型的auto_ptr、shared_ptr之间可以相互赋值，unique_ptr之间则不允许相互赋值
* 智能指针与普通指针之间不能够随意赋值，要通过智能指针成员函数`get()`获取指针后再赋值给普通指针
* 独占指针(unique_ptr)需要通过函数`reset()`和`move()`来赋值

```cpp
unique_ptr<std::string>(new std::string("unique"));
p2.reset(new std::string("hello"));
p2 = std::move(p1);                                 /*p1指向nullptr，p2接管p1指向的内存空间*/
unique_ptr<int>p3 = make_unique<int>123;            //C++ 14
```

>高效率智能指针创建函数make_shared()<sup>C++ 11</sup>、make_unique()<sup>C++ 14</sup>

* 共享指针`shared_ptr`有一个成员函数`use_count()`可以用来查看共享指针的计数器
* 弱指针`weak_ptr`是一个不控制资源生命周期的智能指针，是对对象的一种弱引用，<mark>弱指针并不占有内存，因此没有指针的解引用操作</mark>，且不参与引用计数
* 可以使用弱指针`weak_ptr`的成员函数`lock()`返回一个临时的`shared_ptr`

### 左值引用与右值引用<sup>C++11</sup>

* 在声明变量时出现的`&`才是引用运算符，其他地方出现的`&`则是地址操作符‘
* <mark>可以建立数组引用，但不能建立引用数组</mark>

## 预处理

### `#`和`##`预处理命令

1. #运算符的作用是文本参数“字符串化”
2. ##运算符的作用是将两个字符文本连接成一个字符文本

### 预定义宏

|符号常量|类型|说明|
|:---:|:---:|:---:|
|`__DATE__`|字符串常量|编译程序日期(形式为"MM DD YYYY"，例如"May 4 2006")|
|`__TIME__`|字符串常量|编译程序时间(形式为"hh:mm:ss"，例如"10:20:05")|
|`__FILE__`|字符串常量|编译程序文件名|
|`__LINE__`|int型常量|当前源代码的行号|
|`__STDC__`|int型常量|若为1说明此程序兼容ANSI C标准|
|`__cplusplus`|int型常量|若编译的是C++程序，值定义为197711L|

### 文件包含

* `#pragma once`表示在编译一个源文件时，只对该文件包含(打开)一次

## 排序算法

### 冒泡排序法(bubble sort)

```cpp
for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
        if(a[j]>a[j+1])                 //排序结果从小到大
            t=a[j],a[j]=a[j+1],a[j+1]=t;
```

### 选择排序法(selection sort)

```cpp
for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
        if(a[i]<a[j])
            t=a[i],a[i]=a[j],a[j]=t;
```

* 高效一点：

```cpp
for(i=0;i<n-1;i++){
    k=i;
    for(j=i+1;j<n;j++>)
        if(a[k]>a[j])   k=j;
    if(i!=k)    t=a[i],a[i]=a[k],a[k]=t;
}
```

### 插入排序法(insertion sort)

```cpp
for(i=1;i<n;i++){
    t=a[i];
    for(j=i-1;j>0;j--){
        if(a[j]>t) a[j+1]=a[j];
        else break;
    }
    a[j+1]=t;
}
```

### 快速排序法(quick sort)

```cpp
...
QuickSort(a,0,n-1);
...
void QuickSort(int *a,int left,int right){
    int i,j,t,index[3];
    if(left<right){
        if(right-left+1>3){
            index[0]=rand()%(right-left+1)+left;
            do{
                index[1]=rand()%(right-left+1)+left;
            }while(index[0]==index[1]);
            do{
                index[2]=rand()%(right-left+1)+left;
            }while(index[0]==index[2]||index[1]==index[2]);
            if(a[index[0]]>=a[index[1]]&&a[index[1]]>=a[index[2]])
                t=a[index[1]],a[index[1]]=a[left],a[left]=t;
            else if(a[index[2]]>=a[index[1]]&&a[index[1]]>=a[index[0]])
                t=a[index[1]],a[index[1]]=a[left],a[left]=t;
            else if(a[index[1]]>=a[index[0]]&&a[index[0]]>=a[index[2]])
                t=a[index[0]],a[index[0]]=a[left],a[left]=t;
            else if(a[index[2]]>=a[index[0]]&&a[index[0]]>=a[index[1]])
                t=a[index[0]],a[index[0]]=a[left],a[left]=t;
            else if(a[index[0]]>=a[index[2]]&&a[index[2]]>=a[index[1]])
                t=a[index[2]],a[index[2]]=a[left],a[left]=t;
            else if(a[index[1]]>=a[index[2]]&&a[index[2]]>=a[index[0]])
                t=a[index[2]],a[index[2]]=a[left],a[left]=t;
        }
        i=left+1,j=right;
        while(1){
            while(i<=right){
                if(a[i]>a[left])
                    break;
                i++;
            }
            while(j>left){
                if(a[j]<a[left])
                    break;
                j--;
            }
            if(i>=j) break;
            t=a[i],a[i]=a[j],a[j]=t;
        }
        t=a[left],a[left]=a[j],a[j]=t;
        QuickSort(a,left,j-1);            //关键数据左半部分递归
        QuickSort(a,i,right);             //关键数据右半部分递归
    }
}
```

## 引用数据

### 指针

#### 指针的const限定

* 指向const对象的指针

`const type *p`

1. 把一个const对象的地址赋值给一个指向非const对象的指针是错误的
2. 不能使用void *指针保存const对象的地址，而必须使用const void *
3. <mark>*允许把非const对象的地址赋值给指向const对象的指针*</mark>
4. 不能使用指向const对象的指针修改指向的对象，本质上来讲，由于没有方法分辨指向const对象的指针所指的对象是否为const，系统会把它所指向的所有对象都视为const
5. 不能保证指向const的指针所指的对象的值一定不会被其他方式修改

* const指针

`type * const p`

* 指向const对象的const指针

`const type * const p`

#### 数组指针

`type (*p)[epxr1][expr2]...`

数组指针对应的其实就是数组名退化的形式，即数组最高维消失，变为指针

#### 指针数组

`type *p[exptr1][exptr2]...`

指针数组是由指针组成的数组

### 引用类型

#### 引用规则

引用是const类型

1. <mark>声明</mark>(注意，不是定义)一个引用类型变量时，必须同时初始化它，声明它是哪个对象的别名，即绑定对象
2. 不能有空引用，引用必须与有效对象的内存单元关联
3. 引用一旦被初始化，就不能改变引用关系，不能再作为其他对象的引用
4. 指定类型的引用不能初始化到其它类型的对象上
5. 引用初始化与引用赋值含义完全不同
6. 直接访问对象与引用访问是访问同一个内存单元
7. 取一个引用的地址和取被引用对象的地址完全一样，都是用取地址运算

* 一般函数调用的方式是值传递，而引用作为函数形参时，函数调用的方式变为引用传递

* ***引用作为函数返回值***

```cpp
返回类型 & 函数名(形式参数列表){
    函数体
}
```

<mark>**当函数返回值为引用时，函数返回值可以为左值！**</mark>

* 常引用

常引用即const限定的引用

>不能声明非const引用作为const对象的别名，但常引用既可以作为const对象的别名，又可以作为非const对象的别名

一般的临时对象(如函数返回值)都是const对象，必须使用常引用才能引用

## 组合数据——自定义类型

### 结构体对象的内存形式

为了加快数据存取的速度，编译器默认情况下会对结构体成员和结构体本身(实际上其他数据对象也是如此)存储位置进行处理，使其存放的起始地址是一定的字节的倍数，而不是顺序存放，称为字节对齐，因此，<mark>必须使用sizeof()获取结构体的大小</mark>

eg.

```cpp
typedef struct{
	int a;
	char b;
	short c;
}SA;
typedef struct{
	char b;
	int a;
	short c;
}SB;
```

`sizeof(SA)`==8，`sizeof(SB)`==12

#### 字节对齐规则

* 设对齐字节数为n(n==2<sup>t</sup>(t&isin;N<sub>0</sub>))，每个成员内存长度为L<sub>i</sub>，Max(L<sub>i</sub>)为最大成员内存长度，字节对齐规则如下：

1. 结构体对象的起始地址能够被Max(L<sub>i</sub>)所整除
2. 结构体中的每个成员相对于起始地址的偏移量，即对齐值应是min(n,L<sub>i</sub>)的倍数，若不满足对齐值的要求，编译器会在成员之间填充若干字节(称为internal padding)
3. 结构体的总长度值应该是min(n,Max(n,L<sub>i</sub>))的倍数，若不满足总长度值的要求，编译器在未最后一个成员分配空间后，会在其后填充若干字节(称为trailing padding)

* 使用预处理命令`#pragma pack(n)`可以设定对齐字节数n(n==2<sup>t</sup>(t&isin;N<sub>0</sub>))

```cpp
#pragma pack(push)
#pragma pack(1)
...
#pragma pack(pop)
```

* 结构体对象的初值序列与数组一样，必须用一对大括号{}将它括起来，即使只有一个数据也是如此，如果结构体对象嵌套了结构体成员，则<mark>该成员的初值可以用或不用大括号括起来</mark>

* 联合在初始化时未指定初始化成员名，则默认为初始化第一个声明的成员

### 位域

```cpp
struct {
    type1 var1:numer(occupied Binary bit);
    ...
    typen varn:numer(occupied Binary bit);
    typem varm;
    ...
};
```

* 同类型的位域可以合并空间，不同类型的位域不可以合并空间，位域与普通变量均遵循对齐规则
* 位域可以是匿名成员(占据空间但空闲不用)，0位的位域表示其后的位域成员将另起一个存储单元
* 不能声明数组形式和指针形式的位域，位域只能是结构体、联合类型的一部分，而不能单独定义
* <mark>由于位域是内存单元中的一段，因而没有地址，故不能对位域取地址，也不能定义指针指向位域或函数返回位域</mark>

## 类和对象

### 类的定义

```cpp
class 类名{
    ...
    返回类型 函数名(形式参数列表){      //类内定义(兼声明)
        函数体
    }
    返回类型 函数名(形式参数列表);      //类内声明
    ...
};
返回类型 类名::函数名(形式参数列表){    //类外定义实现
    函数体
}
```

* C++规定，在局部作用域中声明的类，成员函数必须是函数定义形式，不能是函数声明
* 类的每个成员都有访问控制属性，有以下三种访问标号(access label):public、private、protected(不考虑继承的情况下，与private类似，但<mark>派生类可以访问</mark>)
* 类的数据成员还可以是成员对象(member object)，称这个对象为子对象(subobject)
* <mark>声明成员函数的多个重载版本或指定成员函数的默认参数只能在类内部中进行</mark>,因为类定义中的声明先于成员函数的外部实现
* 可以声明一个类而不定义它，这个声明称为向前声明(forward declaration)，表示在程序中引入该类类型。在声明之后、定义之前，该类是一个不完全类型(incomplete type)，即已知该类是一个类，但不知道它包含哪些成员，<mark>类的向前声明一般用来编写相互依赖的类</mark>

### UML类图

||类名|
|:---:|:---:|
|属性|+共有数据成员|
||#保护数据成员|
||-私有数据成员|
|操作|+共有成员函数|
||#保护成员函数|
||-私有成员函数|

|Point|
|:---:|
|-x:int|
|-y:int|
|+Display:void|
|+Set:void|
|+Getx:int|
|+Gety:int|

#### 关联(association)

当一个类的对象作为另一个类的对象的成员时，这两个类之间就是关联关系，关联关系是有方向性的，且具有多重性

1. 双向关联(A-B)指双方的对象都作为对方的成员
2. 单行关联(A->B)指B对象作为A的成员，A可以调用B的公共属性和操作，且没有生命期的依赖
3. 自身关联(A->A)指自己引用自己

#### 聚合(aggregate)

聚合是关联关系的一种特例，它体现的是整体与部分拥有的关系，是“有一个(has-a)”的关系

#### 组合(composite)

组合也是关联关系的一种特例，它体现的是整体与部分比聚合更强的关系，是“包含一个(contains-a)”的关系

#### 泛化(generalization)

泛化关系即继承关系，指的是一个类继承另一个类的特性，并可以增加自己的新特性，是“一个(is-a)”的关系

#### 依赖(dependency)

依赖关系就是一个类使用到了另一个类，而这种使用关系是具有偶然性的、临时性的、非常弱的

#### 类和结构的区别

本质上，C++扩展了C的结构，`struct`与`class`的唯一区别只有`struct`的所有成员默认是public的，而`class`的所有成员默认是private的

### 构造函数(constructor)

* 构造函数的名字与类名相同，并且不能指定返回类型

1. 构造函数是在创建对象时自动执行的，而且只执行一次，并先于其他成员函数执行，构造函数不能被人为调用
2. 构造函数一般声明为public

#### 构造参数初始化列表

```cpp
类名::类名(形式参数列表)
    :构造函数初始化列表{
    函数体
}
```

```cpp
类名::类名(形式参数列表):构造函数初始化列表{
    函数体
}
```

* 构造函数可以定义在类的内部或外部，但构造函数初始化列表只在构造函数的定义中而不是函数原型声明中指定
* 一般的，<mark>没有默认构造函数的成员对象，以及const或引用类型的成员，都必须在构造函数初始化列表进行初始化</mark>
* 构造函数初始化列表仅指定用于初始化成员的值，并不指定这些初始化执行的次序，<mark>成员被初始化的次序就是数据成员的声明次序</mark>
* 一个初始化式可以是任意复杂的表达式，但初始化类类型的数据成员时，要指定实参并传递给成员对象一个构造函数，可以使用该成员的任意构造函数

需要注意，使用无参的构造函数建立对象时，应该写成`类名 对象名;`而不是`类名 对象名();`

#### 默认构造函数

一个类哪怕只定义了一个构造函数，编译器也不会再生成默认构造函数

#### 转换构造函数

用单个实参调用的构造函数定义从形参类型到该类类型的隐式/显式转换

转换构造函数的一般声明形式：

`类名(const 指定数据类型 & obj);`

* 在转换构造函数声明前加上`explicit`关键字，可以禁止由转换构造函数定义的隐式转换
* `explicit`关键字只能用于类内部的构造函数声明上，在类外部不能重复它

显式地使用转换构造函数中指隐式地使用转换构造函数：

`类名(指定数据类型的数据对象)`

#### 复制构造函数

复制构造函数的一般声明形式：

`类名(const 类名 & obj);`

* 与合成默认构造函数不同，即使定义了其他构造函数，也会合成复制构造函数
* 如果没有为类型数组提供元素初始化式，则将用默认构造函数初始化每个元素，然而，<mark>如果使用常规的大括号的数组初值列表形式来初始化数组时，则使用复制初始化来初始化每个元素</mark>
* 如果想要禁止复制，不能用省略复制构造函数的方法，因为如果不定义复制构造函数的话，编译器会自动合成一个，为了防止复制，类可以显式声明其复制构造函数为private，或者写一个什么也不做的复制构造函数

### 析构函数(destructor)

析构函数的名字是类名的前面加一个`~`

```cpp
~类名(){
    函数体
}
```

* 一个类可以有多个构造函数，但只能有一个析构函数
* 如果用new运算动态地建立了一个对象，那么用delete运算释放该对象时，调用该对象的析构函数
* <mark>合成析构函数按对象创建时的逆序撤销每个非静态成员，即它是按成员在类中的声明次序逆序撤销成员的</mark>

### 对象指针

#### 数据成员指针

`数据成员类型 类名::*指针变量名=成员地址初值;`

#### 成员函数指针

`返回类型 (类名::*指针变量名)(形式参数列表)=成员地址初值;`

或

`返回类型 (类名::*指针变量名)(形式参数列表)const=成员地址初值;`

>成员函数指针调用需要`.*`或`->*`中的`*`，是为了明确区分普通成员访问和通过指针的间接调用，避免语法歧义，并强调成员函数对对象实例的依赖，类的成员函数不存在退化机制，之所以能够直接使用函数名作为成员地址初值，省略`&`是由于编译器根据C++标准设计的语法糖而自行加上`&`，建议每次都加上`&`

* **在成员函数中可以显式地使用this指针**

### 类作用域与对象生命周期

在类外定义的成员函数的返回类型出现在成员名字前面，则其在类作用域外，如果返回类型使用由类定义的类型，则必须使用类限定名

* **不指定类名使用作用域运算符`::`可以使用全局作用域中的变量**

#### 嵌套类

可以在类A的内部定义类B，称类B为嵌套类(nested class)，又称嵌套类型(nested type)，称类A为外围类(enclosing class)

在外围类外定义嵌套类中的函数：

```cpp
返回类型 外围类::嵌套类::函数名(形式参数列表){
    函数体
}
```

可以先在外围类中声明嵌套类，然后再在外围类外定义嵌套类：

```cpp
class 外围类{
    ...
    标识符:
    class/struct 嵌套类;
    ...
}
class/struct 外围类::嵌套类{
    类定义体
}
```

>如果嵌套类中声明了一个静态成员，它的定义也需要放在外层作用域中

`int enclosing class::nested class::static_mem=1024;`

嵌套类可以直接引用外围类的静态成员、类型名和枚举成员，需要使用作用域运算符`::`

### const限定

#### 常对象

* **无论什么情况，常对象中的非<mark>mutable</mark>对象都不能被修改，而且，除了合成的默认构造函数和默认析构函数外，也<mark>不能调用常对象的非const型的成员函数</mark>**

#### 常数据成员

常数据成员只能通过构造函数初始化列表进行初始化

#### 常成员函数

```cpp
返回类型 类名::函数名(形式参数列表)const{
    函数体
}
```

* ***无论是声明还是定义常成员函数都要有`const`关键字***
* ***<mark>常成员函数不能调用另一个非常成员函数</mark>***

### 静态成员

通常，静态数据成员独立于该类的任何对象，在所有对象之外单独开辟空间存储，每个静态数据成员是与类关联的对象，并不与该类的对象相关联，在为类所分配的空间之中不包括静态数据成员所占的空间

只要在类中定义了静态数据成员，即使不定义任何对象，也为静态数据成员分配空间，它可以被引用(甚至在尚未建立对象时)

* <mark>***静态数据成员必须在类外部定义一次(仅有一次)***</mark>

`数据成员类型 类名::静态数据成员名=初始化式;`

>当初始化式是一个常量表达式，C++最新标准支持<mark>**static const**</mark>数据成员在类的定义体中进行初始化，<mark>但该数据成员仍必须在类的定义体外进行定义</mark>

* <mark>***静态数据成员的类型可以是该成员所属的类类型，非静态成员被限定声明为其自身对象的指针或引用***</mark>
* 静态数据成员可用作默认实参，非静态数据成员不能用作默认实参，因为它的值不能独立于所属的对象而使用
* 如果要在类外调用共有的静态数据成员，可用类作用域运算符`::`和通过对象名调用静态数据成员

#### 静态成员函数

* 如果要在类外调用共有的静态成员函数，可用类作用域运算符`::`和通过对象名调用静态成员函数
* 非静态成员函数有this指针，而静态成员函数没有this指针
* <mark>静态成员函数不能被声明为const，同时，静态成员函数也不能被声明为虚函数</mark>

### 友元

* 由于友元不是授予友元关系(friendship)的那个类的成员，所以它们不受访问标号声明出现部分的访问控制影响，通常，将友元声明成组的放在类定义的开始或结尾
* 友元的关系不能传递或继承

### 类模板

```cpp
template <typename T,class Y,...>
class classname{
    类体
};
template <模板形参表>
返回类型 类名<类型参数表>::函数名(形式参数列表){
    函数体
}
```

标准C++为模板类提供了关键字`export`，其作用与`extern`相似

## 派生与继承

基类(base class) 派生类(derived class)

```cpp
class 派生类名:类派生列表{
    成员列表
};
```

类派生列表:

`访问标号 基类名`

前向声明派生类:

错误:

```cpp
class Derived:public Base;
```

正确:

```cpp
class Base;
class Derived;
```

派生类为`class`时，默认继承规则为`private`；派生类为`struct`时，默认继承规则为`public`

* 友元关系不能继承和被继承
* 如果基类定义了静态成员，则整个继承层次中只有一个这样的成员，所有相关基类和派生类公用该静态成员

### 派生类成员的访问

1. 公有继承(public inheritance)  
基类的公有成员和保护成员在派生类中保持原有的访问属性，私有成员仍为基类私有，派生类不可访问(inaccessible)
2. 私有继承(private inheritance)  
基类的所有成员在派生类中均为私有成员，私有成员仍为基类私有，派生类不可访问(inaccessible)
3. 保护继承(protected inheritance)  
基类的公有成员和保护成员在派生类中均为保护成员，私有成员仍为基类私有,派生类不可访问(inaccessible)

### 赋值兼容规则

在需要基类对象的任何地方，都可以使用公有派生类的对象来替代

### 派生类的构造函数和析构函数

```cpp
派生类名(形式参数列表):基类名(基类构造函数实参列表),派生类初始化列表{
    派生类初始化函数体
}
```

* 如果再接类中没有定义构造函数，或定义了没有参数的构造函数，在定义派生类构造函数时可以可以不现实的调用基类构造函数。在调用派生类构造函数时，系统会先调用基类的无参数构造函数或默认构造函数

### 二义性问题(ambiguous)

C++要求派生类对基类成员的访问必须是无二义性的

使用成员名限定可以消除二义性

```cpp
p->A::fun();
p->B::fun();
```

### 名字支配规则

派生类的同名新成员可以覆盖基类的成员，如果要访问被覆盖的成员，就需要使用作用域限定运算符和基类名来限定

同名函数只有在函数签名(包括返回类型)一致时才会发生覆盖，否则只是函数重载

### 虚基类

C++提供虚基类(virtual base class)的机制，使得在继承间接共同基类时只保留一份成员

```cpp
class 派生类名:virtual 访问标号 虚基类名,...{
    成员列表
}
```

经过这样声明后，当基类通过多条派生路径被一个派生类继承时，该派生类只继承该基类一次

* ***需要注意，为保证虚基类在派生类中只继承一次，应当在该基类的所有直接派生类中声明为虚基类，否则仍会出现对基类的多重继承***
* ***在派生类的构造函数初始化列表应当主动调用虚基类的构造函数***

### 多态与虚函数

1. 重载多态
2. 强制多态
3. 类型参数化多态
4. 包含多态‘

* **静态联编(static binding)**

在编译阶段就将函数实现和函数调用绑定起来称为静态联编

* **动态联编(dynamic binding)**

在程序运行的时候才进行函数实现和函数调用的绑定称为动态联编

* 虚函数表(VTABLE)储存虚函数指针数组
* 自动添加一个指针vptr指向VTABLE
* 虚函数不能是静态的
* 关键字`virtual`只在类体中使用
* 派生类中的将覆盖原同名虚函数的虚函数一般会在形式参数表后加上关键字`override`，可以显示检测覆盖错误

<details>
    <summary>
    协变返回类型(Covariant Return Types)
    </summary>
    C++允许一种特殊情况：当返回类型是类的指针或引用时，派生类覆盖函数的返回类型可以是基类返回类型的派生类(即"协变")，且不支持智能指针！
</details>

* <mark>***在派生类中，当一个指向基类成员函数的指针指向一个虚函数，并通过指向对象的基类指针或引用访问这个虚函数时，仍将发生多态性***</mark>
* 多重继承关系下，每个"子类"中都有自己的VTABLE，第一个继承来的"子类"的VTABLE为主要的虚函数表

### 虚析构函数

* 虚析构函数不需要同名，只要基类的析构函数为虚函数即可
* 会好把基类的析构函数声明为虚函数

### 纯虚函数

`virtual 返回类型 函数名(形式参数列表)=0;`

"=0"表示纯虚函数根本就没有函数体，因为纯虚函数没有定义代码，所以当成员函数调用纯虚函数时将导致程序运行错误

如果在一个类中声明了纯虚函数，而在其派生类中没有对该函数的定义，则该虚函数在派生类中仍然为纯虚函数

### 抽象类

包含纯虚函数的类称为抽象类(abstract class)，<mark>抽象类不能定义对象</mark>

* **虽然抽象类不能定义对象，(或者说抽象类不能实例化)，但是可以定义抽象类的指针和引用**

### 命名的强制类型转换

|运算符|功能|目|结合性|用法|
|:---:|:---:|:---:|:---:|:---:|
|static_cast|静态类型转换|单目|自左向右|static_cast<type>(expr)|
|reinterpret_cast|重新解释转换|单目|自左向右|reinterpret_cast<type>(expr)|
|const_cast|限定类型转换|单目|自左向右|const_cast<type>(expr)|
|dynamic_cast|动态类型转换|单目|自左向右|dynamic_cast<type>(expr)|
|typeid|类型识别|单目|自左向右|typeid(expr)|

1. **static_cast**

* static_cast常用来进行基本类型转换
* static_cast可以转换自定义类型对象，但<mark>type类型必须有相应的构造函数</mark>
* static_cast可以转换类层次间的指针或引用，其中，上行转换是安全的，下行转换由于缺少类型检查，所以是不安全的
* static_cast可以把任何表达式都转换成void类型

2. **reinterpret_cast**

* reinterpret_cast运算允许任何整数类型转换到任何指针类型，反之亦然
* reinterpret_cast运算可用于如char *到int *的转换，或者一个类的指针到另一个不相关类的指针的转换，这种转换很可能是不安全的
* reinterpret_cast运算可以转换一个空指针为type类型的空指针

3. **const_cast**

* const_cast<type>(expr)运算符用来去除expr的const或volatile限定
* 只有使用const_cast才能将表达式的const或volatile限定属性转换掉，在这种情况下，<mark>试图使用其他三种形式的强制类型转换都会导致编译时的错误</mark>

4. **dynamic_cast**

* `dynamic_cast<type>(expr)`运算用来将基类类型对象的引用或指针expr转换为同一继承层次中type类型的引用或指针，type必须是类的指针、引用或`void *`指针
* `dynamic_cast<type>(expr)`运行时进行类型检查，转换失败时，如果目标是指针类型，返回0值指针；如果目标是引用类型，则抛出一个bad_cast类型的异常
* dynamic_cast用于类层次间的上行转换，此时与static_cast效果一致
* dynamic_cast用于类层次间的下行转换，具有类型检查功能，比static_cast更安全
* dynamic_cast用于类层次间的交叉转换(cross cast)
* dynamic_cast用于类与`void *`指针转换

5. typeid

* `#include <typeinfo>`
* 如果表达式的类型是类类型且该类包含一个或多个虚函数，则表达式的动态类型可能不同于它的静态编译时类型

### RTTI(run_time type identification，运行时类型识别)

typeid、dynamic_cast运算符只为带有一个或多个虚函数的类返回动态类型信息；对于其他类型，返回静态(即编译时)类型的信息

## 运算符重载

