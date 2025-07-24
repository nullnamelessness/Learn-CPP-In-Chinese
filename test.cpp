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