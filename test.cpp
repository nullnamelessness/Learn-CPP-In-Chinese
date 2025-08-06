#include <iostream>
#include <cstdarg>
class SA{
    int a,b,n;
    int *pa;
    public:
    void *panew(int n,...);
    void paout();
    SA();
    SA(int x,int y=20);
    ~SA();
};
void *SA::panew(int n,...){
    int i=0;
    this->n=n;
    va_list arg_ptr;
    va_start(arg_ptr,n);
    if(n>0) pa=new int [n];
    while(i<n&&*arg_ptr!=-1){
        pa[i]=*arg_ptr;
        va_arg(arg_ptr,int);
        i++;
    }
    if(i<n-1)
        while(i<n){
            pa[i]=0;
            i++;
        }
    va_end(arg_ptr);
    return pa;
}
void SA::paout(){
    int i=0;
    for(i=0;i<n;i++){
        std::cout<<i<<" : "<<pa[i]<<"\t";
        if((i+1)%5==0)  std::cout<<std::endl;
    }
    std::cout<<std::endl;
}
SA::SA():a(1),b(2),n(0),pa(nullptr){
    std::cout<<"SA : a = "<<a<<"\tb = "<<b<<std::endl;
}
SA::SA(int x,int y):a(x),b(y),n(0),pa(nullptr){
    std::cout<<"SA : a = "<<a<<"\tb = "<<b<<std::endl;
}
SA::~SA(){
    std::cout<<"SA : a = "<<a<<"\tb = "<<b<<std::endl;
    if(pa!=nullptr)  delete []pa;
}
class SB{
    int c,n;
    int *pb;
    SA test;
    public:
    void *pbnew(int n,...);
    void pbout();
    SB();
    SB(int x);
    SB(int x,int y,int z=222);
    ~SB();
};
void *SB::pbnew(int n=0,...){
    int i=0;
    this->n=n;
    va_list arg_ptr;
    va_start(arg_ptr,n);
    if(n>0) pb=new int [n];
    while(i<n&&*arg_ptr!=-1){
        pb[i]=*arg_ptr;
        va_arg(arg_ptr,int);
        i++;
    }
    if(i<n-1)
        while(i<n){
            pb[i]=0;
            i++;
        }
    va_end(arg_ptr);
    return pb;
}
void SB::pbout(){
    int i=0;
    for(i=0;i<n;i++){
        std::cout<<i<<" : "<<pb[i]<<"\t";
        if((i+1)%5==0)  std::cout<<std::endl;
    }
    std::cout<<std::endl;
}
SB::SB():c(1),n(0),pb(nullptr),test(2,2){
    std::cout<<"SB : c = "<<c<<std::endl;
}
SB::SB(int x):c(x),n(0),pb(nullptr),test(2,2){
    std::cout<<"SB : c = "<<c<<std::endl;
}
SB::SB(int x,int y,int z):c(x),n(0),pb(nullptr),test(y,z){
    std::cout<<"SB : c = "<<c<<std::endl;
}
SB::~SB(){
    std::cout<<"SA : c = "<<c<<std::endl;
    if(pb!=nullptr)  delete []pb;
}
SA tea0;
SA tea1(5);
SA tea2(6,7);
SB teb0;
SB teb1(9);
SB teb2(5,7);
SB teb3(6,7,5);
int main(){
    void (SA::*pfa)()=&SA::paout;
    void (SB::*pfb)()=SB::pbout;
    SA *pa;
    SB *pb;
    // int SA::*ptra=&SA::n;
    SA testa0;
    SA testa1(5);
    SA testa2(6,7);
    SB testb0;
    SB testb1(9);
    SB testb2(5,7);
    SB testb3(6,7,4);
    pa=&testa0;
    pb=&testb0;
    pa->panew(5,1,2,3,4,5,6,-1);
    testa1.panew(10,11,55,66,-1);
    pb->pbnew(5,1,2,3,4,5,6,-1);
    testb1.pbnew(10,11,55,66,-1);
    (pa->*pfa)();
    (testa1.*pfa)();
    (testa2.*pfa)();
    (pb->*pfb)();
    (testb1.*pfb)();
    (testb2.*pfb)();
    return 0;
}