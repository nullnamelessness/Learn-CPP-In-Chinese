#include <iostream>
int  main(){
    int x{99};
    int *px{&x};
    int a[3][5]{{00,11,22,33,44},{11,22,33,44,55},{55,66,77,88,99}};
    int *p[]{a[0],a[1],a[2]};
    int *(*ptr)[3]{&p};
    int **pp{p};
    std::cout<<std::hex<<"a = "<<a<<"\na[0] = "<<a[0]<<"\ta[1] = "<<a[1]<<"\ta[2] = "<<a[2]<<std::endl
    <<"p[0] = "<<p[0]<<"\tp[1] = "<<p[1]<<"\tp[2] = "<<p[2]<<std::endl
    <<"ptr = "<<ptr<<"\t*ptr = "<<*ptr<<"\t**ptr = "<<**ptr<<std::endl
    <<"(*ptr)[0] = "<<(*ptr)[0]<<"\t(*ptr)[1] = "<<(*ptr)[1]<<"\t(*ptr)[2] = "<<(*ptr)[2]<<std::endl
    <<"pp = "<<std::hex<<pp<<"\t*pp = "<<*pp<<"\t*(pp+1) = "<<*(pp+1)<<"\t*(pp+2) = "<<*(pp+2)<<std::endl
    <<std::dec<<"p[1][2] = "<<p[1][2]<<"\t*(*(pp+1)+2) = "<<*(*(pp+1)+2)<<"\t*(*(*ptr+1)+2) = "<<std::dec<<*(*(*ptr+1)+2)
    <<"\t(*ptr)[1][2] = "<<(*ptr)[1][2]<<"\tptr[0][1][2] = "<<ptr[0][1][2]<<std::endl
    <<"px[0] = "<<px[0]<<std::endl;
    return 0;
}