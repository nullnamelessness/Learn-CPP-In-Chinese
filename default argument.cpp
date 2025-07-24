#include <iostream>
int p=2;
int sub(int,int,int c=p*p);
int add(int,int,int c=sub(p,p));
int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<add(a,b);
    p*=p;
    std::cout<<std::endl<<add(a,b);
    return 0;
}
int add(int a,int b,int c){
    return a+b+c;
}
int sub(int a,int b,int c){
    return a+b-c;
}