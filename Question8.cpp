#include<iostream>
 using namespace std;
 class Question8{
    public : void linearSearch(int a[],int size,int n){
            int flag=0;
            for(int i=0;i<size;i++){
                if(a[i]==n){
                    cout<<"Element present at  "<<i+1<<"th index\n";
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Element is not present in array\n";
    }
 };
 int main(){
    int a[]={10,20,30,40,50,60,70,80,90};
    int size=sizeof(a)/sizeof(int);
    int n;
    cout<<"Enter Element To Be Searched\n";
    cin>>n;
    Question8 obj;
    obj.linearSearch(a,size,n);
    return 0;
 }
