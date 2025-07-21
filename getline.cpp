#include <iostream>
#include <string>
int main(){
    std::string s1;
    char s[100],ch;
    std::cout<<"input"<<std::endl;
    std::cin.getline(s,11,'\n');
    std::cin.clear();
    
    std::cin>>ch;
    std::cout<<s<<std::endl<<ch;
}