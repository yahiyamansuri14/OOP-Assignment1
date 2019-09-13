#include<iostream>
 using namespace std;
 class Question9{
 private:int a[10],n;
 public:
     Question9(){
            cout<<"Enter size of array\n";
            cin>>n;
            cout<<"Enter Unsorted Array(Max:10)\n";
            for(int i=0;i<n;i++)
                cin>>a[i];
    }
     void selectionSort(){
         int temp,i,j;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
            }
        }
        cout<<"Sorted Array is\n";
        for(i=0;i<n;i++)
            cout<<a[i]<<"\t";
 }

 };
 int main(){
    Question9 obj;
    obj.selectionSort();
    return 0;
 }
