#include<iostream>
 using namespace std;
 class Question3{
    private:int a,b;
    public:
        Question3(){
            cout<<"Enter value of a and b\n";
            cin>>a>>b;
        }
        void swap(){
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"After swaping a="<<a<<"\t and b="<<b;
    }
 };
 int main(){
    Question3 obj;
    obj.swap();
    return 0;
 }
