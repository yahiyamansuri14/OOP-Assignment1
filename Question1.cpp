#include<iostream>
 using namespace std;
 class Question1{
    private:int a,b,c,d,e;
    public:void sum(){
        cout<<"Enter five integers\n";
        cin>>a>>b>>c>>d>>e;
        cout<<"Sum of five integer is  "<<(a+b+c+d+e);
    }
 };
 int main(){
    Question1 obj;
    obj.sum();
    return 0;
 }
