/*
Array ADT
Array As Abstract Data Type
1.
Create Dynamic Array
Take Input Size,Length
Print Elements
2.Insert Element
Write A Function Insert The Element Based On Index
3.Delete Element
Write A Funtion That Deletes The Index
*/
#include <iostream>
using namespace std;
class Arr{
    public:
    int *A;
    int size;
    int length;
    //Display Array
    void print(){
        cout<<"Array: ";
        for(int i=0;i<length;i++)
        {
            //Checking First Element And Array Is Not Singular
            if(i==0 && i!=length-1)
                cout<<"{"<<A[i]<<",";
            //If Array Is Singular
            else if(length==1)
                cout<<"{"<<A[i]<<"}";
            //For All Other Elements
            else if(i!=length-1)
                cout<<A[i]<<",";
            //For The Last Element
            else if(i==length-1)
                cout<<A[i]<<"}";
        }
        cout<<endl;
    }
    //Append Element
    void append(int temp){
        if(length==size)
            cout<<"Append Is Not Possible";
        else
            A[length++]=temp;
    }
    //Insert Element
    void insert(int temp,int ind){
        if(length==size)
            cout<<"Append Is Not Possible";
        else
        {
            //Shifting One Position Right
            for(int i=length-1;i>=ind;i--){
                A[i+1]=A[i];
            }
            A[ind]=temp;
            length++;
        }
    }
    void deleteElement(int ind){
        if(ind<0||ind>=length)
            cout<<"Not Possible"<<endl;
        else
        {
            for(int i=ind;i<length;i++)
                A[i]=A[i+1];
            length--;
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
    //Delet The Element
    int temp3;
    cout<<"Enter The Position To Delete Element"<<endl;
    cin>>temp3;
    a1.deleteElement(temp3);
    a1.print();
    
/*   //Insert The Element
    int temp2,ind;
    cout<<"Enter The Element U Want To Insert And Position To Be Inserted"<<endl;
    cin>>temp2>>ind;
    a1.insert(temp2,ind);
    a1.print();
    //Append The Element
    int temp;
    cout<<"Enter The Element U Want To Append"<<endl;
    cin>>temp;
    a1.append(temp);
    a1.print();
*/

    //Deleting Dynamic Array And Assigning Variable To NULL
    delete []a1.A;
    a1.A=NULL;
    return 0;
}
