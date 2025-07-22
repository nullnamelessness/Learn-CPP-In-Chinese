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

C++语言的基本类型系统中没有字符串类型，但在其标准模板库(STL)中提供了字符串类型————string

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

