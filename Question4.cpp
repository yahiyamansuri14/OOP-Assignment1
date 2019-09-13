#include<iostream>
 using namespace std;
  class Question4{
    private : int n;
    public :
        Question4(){
            cout<<"Enter Number\n";
            cin>>n;
        }
        void factorial(){
            int fact=1;
            for(int i=1;i<=n;i++)
                fact=fact*i;
            cout<<"Factorial of entered number is\t"<<fact;
    };

 };
 int main(){
    Question4 obj;
    obj.factorial();
    return 0;
 }
