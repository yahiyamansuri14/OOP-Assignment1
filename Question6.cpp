#include<iostream>
 using namespace std;
 class Question6{
     private:int a,b;
    public: void function1(){
        cout<<"Demo of function without argument without return type\n";
    }
    void function2(int a,int b){
        cout<<"Demo of function with argument without return type\n";
        cout<<a<<"\t"<<b<<endl;
    }
    int function3(){
        cout<<"Demo of function without arguments with return type\n";
        cout<<"Enter the value of a and b\n";
        cin>>a>>b;
        return (a+b);
    }
    int function4(int a,int b){
        cout<<"Demo of function with return type with argument\n";
        return (a+b);
    }

 };
  int main(){
    Question6 obj;
    obj.function1();
    obj.function2(10,20);
    cout<<obj.function3()<<endl;
    cout<<obj.function4(30,40)<<endl;
    return 0;
  }
