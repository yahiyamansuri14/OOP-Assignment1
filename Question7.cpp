#include<iostream>
 using namespace std;
 class Question7{
    private:int a[10];
    public:void sum(){
        int n;
        cout<<"Enter number upto you want sum(MAX:10)\n";
        cin>>n;
        int add=0;
        cout<<"Enter Elements\n";
        for(int i=0;i<n;i++){
            {
                cin>>a[i];
                add=add+a[i];
            }
        }
        cout<<"Sum of "<<n<<"Integers is\t"<<add;
    }
 };
 int main(){
    Question7 obj;
    obj.sum();
    return 0;
 }
