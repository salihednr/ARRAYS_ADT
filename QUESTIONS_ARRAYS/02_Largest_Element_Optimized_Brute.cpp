/*
Largest Element In An Array
    1.Brute Force - Sort Array ar[n-1]
    2.Better - No Better Solution
    3.Optimized Solution - O(n)
    
Note
    Brute Force:
        Sort An Array And Find ar[n-1]
        Time Complexity: O(nlogn)
        Space Complexity: O(1)
    Optimized Solution
        Iterating Array And Finding The Largest Element
*/
#include<iostream>
#include<algorithm>
using namespace std;
//Brute Force
int sortLargestElement(int ar[],int n){
        sort(ar,ar+n);
        return ar[n-1];
    }
//Optimized Solution
int iterLargestElement(int ar[],int n){
    int lar=ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]>lar)
            lar=ar[i];
    }
    return lar;
}
int main(){
    int ar[]={1,3,2,4,4,1,9,2,3};
    int size=sizeof(ar)/sizeof(int);
    //Brute Force
    cout<<sortLargestElement(ar,size)<<endl;
    //Optimized Solution
    cout<<iterLargestElement(ar,size)<<endl;
    return 0;
}
