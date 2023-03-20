/*
Array ADT
Array As Abstract Data Type
1.
Create Dynamic Array
Take Input Size,Length
Print Elements
*/
#include <iostream>
using namespace std;
class Arr{
    public:
    int *A;
    int size;
    int length;
    void print(){
        cout<<"Array: ";
        for(int i=0;i<length;i++)
        {
            if(i==0)
                cout<<"{"<<A[i]<<",";
            else if(i!=length-1)
                cout<<A[i]<<",";
            else
                cout<<A[i]<<"}";
        }
    }
};
int main()
{
    int size;
    int length;
    class Arr a1;
    cout<<"Enter The Size Of The Array: "<<endl;
    cin>>size;
    cout<<"Enter The Number Of Elements Must Be Inserted: "<<endl;
    cin>>length;
    a1.A= new int[size];
    a1.size=size;
    a1.length=length;
    cout<<"Enter The Array Elements: "<<endl;
    //Inputting The Array
    for(int i=0;i<length;i++)
        cin>>a1.A[i];
    //Print The Array
    a1.print();
    //Deleting Dynamic Array And Assigning Variable To NULL
    delete []a1.A;
    a1.A=NULL;
    return 0;
}
