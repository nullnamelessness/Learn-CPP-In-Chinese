#include <iostream>
// #pragma pack(push)
// #pragma pack(2)
typedef struct{
	int a:30;
	int b:2;
	int c;
}SA;
typedef struct{
	int a:30;
	char b:2;
	int c;
}SB;
typedef struct{
	int a:1;
	char b:2;
	char c:2;
	short d:3;
	unsigned char data;
}test;
int main(){
	SA a,*ptr=&a;
	SB b;
	test te{0,3,2,5,33};
	std::cout<<std::hex<<ptr<<"\t"<<&ptr->c<<"\t"<<std::dec<<sizeof(SA)<<std::endl;
	std::cout<<std::hex<<&b<<"\t"<<&b.c<<"\t"<<std::dec<<sizeof(SB)<<std::endl;
	std::cout<<std::hex<<&te<<"\t"<<static_cast<void *>(&te.data)<<"\t"<<std::dec<<sizeof(test)<<std::endl;
	std::cout<<std::hex<<&te.data<<std::endl;
	return 0;
}
// #pragma pack(pop)