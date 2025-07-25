#include <iostream>
int main(){
    int a[3][5];
    int (*p0)[5],(*p1)[5],(*p2)[5];
    // typedef (*PTR)[5];
    // PTR p[3];
    int (*p[3])[5];
    p0=a,p1=&a[1],p2=&a[2];
    p[0]=p0,p[1]=p1,p[2]=p2;
    std::cout<<"a = "<<std::hex<<a<<"\ta[0] = "<<a[0]<<"\ta[1] = "<<a[1]<<"\ta[2] = "<<a[2]<<std::endl
    <<"p0 = "<<p0<<"\tp1 = "<<p1<<"\tp2 = "<<p2<<std::endl
    <<"p[0] = "<<p[0]<<"\tp[1] = "<<p[1]<<"\tp[2] = "<<p[2];
    return 0;
}