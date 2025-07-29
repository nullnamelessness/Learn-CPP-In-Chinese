#include <iostream>
int main(){
    int *p;
    char **pp;
    int (*p5)[5];
    pp=new char *[4];
    for(int i=0;i<4;i++){
        pp[i]=new char [3]{"hh"};
        pp[i][0]=i+33;
    }
    p=new int [3]{0,1,2};
    p5=new int [3][5]{{0,1,2,3,4},{5,6,7,8,9},{00,11,22,33,44}};
    std::cout<<p[2]<<"\t"<<p5[2][3]<<std::endl;
    for(int i=0;i<4;i++){
        std::cout<<pp[i]<<"\t";
    }
    delete []p;
    delete []p5;
    for(int i=0;i<4;i++){
        delete []pp[i];
    }
    delete []pp;
    return 0;
}