#include <iostream>
#include <cstdarg>
#include "va_ptr.h"
int count=99,mn=5;
void print(const char *s,...);
// int main(){
//     print("ab\r%%c%oef\\g\'\"\n",45);
//     print("%f\t%f\n",123.15,56.15);
//     print("%c",'d');
//     print("\n%s","hello world!");
//     return 0;
// }
static void add(){
    count+=100;
}
void print(const char *s,...){
    char ch;
    int i=0;
    va_list arg_ptr;
    va_start(arg_ptr,s);
    while(s[i]!='\0'){
        if(s[i]=='%'){
            switch(s[++i]){
                case 'd':
                    std::cout<<va_arg(arg_ptr,int);
                    break;
                case 's':
                    std::cout<<va_arg(arg_ptr,char *);
                    break;
                case 'c':
                    ch=(char)va_arg(arg_ptr,int);
                    std::cout<<ch;
                    break;
                case 'f':
                    std::cout<<va_arg(arg_ptr,double);
                    break;
                case '%':
                    std::cout<<'%';
                    break;
                case 'o':
                    std::cout<<std::oct<<va_arg(arg_ptr,int)<<std::dec;
                    break;
                case 'x':
                    std::cout<<std::hex<<va_arg(arg_ptr,int)<<std::dec;
                    break;
            }
        }else{
            std::cout<<s[i];
        }
        i++;
    }
    va_end(arg_ptr);
}