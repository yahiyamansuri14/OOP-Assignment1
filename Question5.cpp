#include<iostream>
 using namespace std;
 class Question5{
    public:void statements(){
        cout<<"Demonstration of break in for loop\n";
        for(int i=0;i<10;i++){
            cout<<i<<endl;
            if(i==5)
                break;
        }
        cout<<"Demonstration of continue in for loop\n";
        for(int i=0;i<10;i++){
            if(i==3||i==5||i==7)
                continue;
            cout<<i<<endl;
        }
    };

 };
 int main(){
    Question5 obj;
    obj.statements();
    return 0;
 }
