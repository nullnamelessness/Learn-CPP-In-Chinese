#include <iostream>
#include <ctime>
void QuickSort(int a[],int left,int right);
int main(){
    int n,*p=nullptr,h=0;
    std::cout<<"Please enter n to define array number:";
    std::cin>>n;
    p=new int[n];
    srand((unsigned int)time(0));
    std::cout<<std::endl<<"origin array:"<<std::endl;
    for(int i=0;i<n;i++){
        p[i]=rand()%100;
        std::cout<<"a["<<i<<"] = "<<p[i]<<"\t";
        h++;
        if(h%5==0)  std::cout<<std::endl;
    }
    QuickSort(p,0,n-1);
    h=0;
    std::cout<<std::endl<<"sorted array:"<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<"a["<<i<<"] = "<<p[i]<<"\t";
        h++;
        if(h%5==0)  std::cout<<std::endl;
    }
    delete []p;
    return 0;
}
void QuickSort(int *a,int left,int right){
    int i,j,t,index[3];
    if(left<right){
        if(right-left+1>3){
            index[0]=rand()%(right-left+1)+left;
            do{
                index[1]=rand()%(right-left+1)+left;
            }while(index[0]==index[1]);
            do{
                index[2]=rand()%(right-left+1)+left;
            }while(index[0]==index[2]||index[1]==index[2]);
            if(a[index[0]]>=a[index[1]]&&a[index[1]]>=a[index[2]])
                t=a[index[1]],a[index[1]]=a[left],a[left]=t;
            else if(a[index[2]]>=a[index[1]]&&a[index[1]]>=a[index[0]])
                t=a[index[1]],a[index[1]]=a[left],a[left]=t;
            else if(a[index[1]]>=a[index[0]]&&a[index[0]]>=a[index[2]])
                t=a[index[0]],a[index[0]]=a[left],a[left]=t;
            else if(a[index[2]]>=a[index[0]]&&a[index[0]]>=a[index[1]])
                t=a[index[0]],a[index[0]]=a[left],a[left]=t;
            else if(a[index[0]]>=a[index[2]]&&a[index[2]]>=a[index[1]])
                t=a[index[2]],a[index[2]]=a[left],a[left]=t;
            else if(a[index[1]]>=a[index[2]]&&a[index[2]]>=a[index[0]])
                t=a[index[2]],a[index[2]]=a[left],a[left]=t;
        }
        i=left+1,j=right;
        while(1){
            while(i<=right){
                if(a[i]>a[left])
                    break;
                i++;
            }
            while(j>left){
                if(a[j]<a[left])
                    break;
                j--;
            }
            if(i>=j) break;
            t=a[i],a[i]=a[j],a[j]=t;
        }
        t=a[left],a[left]=a[j],a[j]=t;
        QuickSort(a,left,j-1);            //关键数据左半部分递归
        QuickSort(a,i,right);             //关键数据右半部分递归
    }
}