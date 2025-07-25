#include <iterator>
#include <iostream>
#include <memory>
int main(){
    std::shared_ptr<int> p = std::make_shared<int>(15);
    std::shared_ptr<int> p1(p);
    std::unique_ptr<std::string> sp = std::make_unique<std::string>("hello world!\n");
    std::cout<<*sp;
    auto sp1 = std::move(sp);
    std::cout<<sp.get()<<"\t"<<*sp1;
    std::cout<<p.use_count();
    int *ptr = p.get();
    std::cout<<std::endl<<*ptr<<"\t"<<p.use_count();
    return 0;
}