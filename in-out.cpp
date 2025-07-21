#include <iostream>
#include <iomanip>
int main(){
    for(int i=0;i<=8;i++){
        for(int j=1;j<=8;j++){
            std::cout<<j;
        }
    }
    std::cout<<std::endl;
    std::cout<<std::showpos<<std::setw(8)<<54<<std::endl<<std::setiosflags(std::ios::left)<<std::setw(8)<<45<<std::endl<<std::setw(8)<<std::scientific<<25.5<<std::endl<<std::setw(8)<<5.66<<std::setw(8)<<std::fixed<<std::endl<<9.55;
    std::cout<<std::noshowpos<<std::endl<<std::setw(8)<<std::setprecision(5)<<2.54564684<<std::setw(8)<<std::hex<<95;
    return 0;
}