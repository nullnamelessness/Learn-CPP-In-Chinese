#include <iterator>
#include <iostream>
#include <memory>
int main(){
    std::shared_ptr<int []> p = std::make_shared<int [10]>{0,1,2,3,4,5,6,7,8,9};
    std::shared_ptr<int []> p1(p);
    std::cout<<p.use_count();
    return 0;
}