#include<iostream>
 using namespace std;
 class Question2{
    private:int radius,side;
    public:
            Question2(){
                cout<<"Enter radius of circle\n";
                cin>>radius;
                cout<<"Enter side of square\n";
                cin>>side;
            }
            void area(){
                cout<<"Area of circle is \t"<<(3.14*radius*radius);
                cout<<"\nArea of square is\t"<<(side*side);
            }
            void perimeter(){
                cout<<"\nPerimeter of circle is\t"<<(2*3.14*radius);
                cout<<"\nPerimeter of square is\t"<<(4*side);
            }
 };
 int main(){
    Question2 obj;
    obj.area();
    obj.perimeter();
    return 0;
 }
