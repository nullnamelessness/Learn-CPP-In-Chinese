#include <iostream>
#include "va_ptr.h"
static int count=77,mn=98;
void print(){
    std::cout<<"print!"<<std::endl;
}
void add(){
    count++;
}
int main(){
    int i=2,k=9;
    for(int i=0;i<=10;i++){
        k++;
    }
    add();
    print();
    print("%d %d",count,mn);
    print("\nhello\t%s","world!");
    std::cout<<std::endl<<"i = "<<i<<"\t k = "<<k;
    return 0;
}

// #include <iostream>
// int main(){
//     char *p[3] = {"hello","world","!"};
//     std::cout<<p[0][12]<<"\t"<<p[1]<<"\t"<<p[2]<<std::endl;
//     return 0;
// }

