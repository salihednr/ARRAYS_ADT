/*
Find The Second Largest Element In Array
    1.Brute Force: Sort Then Find An Element Before Largest Element
    2.Better Solution: Find The First Largest Then Find Second Largest
    3.Optimized: Using Two Variable
Note
    Second Largest Element Can't Be Equal To First Largest
    {1,2,2,2}
    Largest: 2
    Second Largest: 1
    
1.Brute Force
    Sort Then Find An Element Before Largest Element
    Time Complexity:
    Sort: O(nlogn)
    Find: O(n)
    Total: O(nlogn+n)
    Space Complexity: O(1)
2.Better Solution
    Find First Largest Then Second Largest
    Time Complexity:
    Find Largest: O(n)
    Second Largest: O(n)
    Total: O(2n)
    Space Complexity: O(1)
3.Optimized Solution
    Whenever Finding The Largest Element Assign Previous Element To Second Largest
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
//Brute Force
int sortSecondLargest(int ar[],int n){
    sort(ar,ar+n);
    int sLargest=INT_MIN;
    int largest=ar[n-1];
    for(int i=n-2;i>=0;i--){
        if(largest!=ar[i])
        {
            sLargest=ar[i];
            break;
        }
    }
    return sLargest;
}
//Better Solution
int findFirstThenSecond(int ar[],int n){
    int largest=ar[0];
    //Finding The Largest Element In An Array
    for(int i=1;i<n;i++){
        if(ar[i]>largest)
            largest=ar[i];
    }
    //Finding The Second Largest
    int sLargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(ar[i]>sLargest&&ar[i]!=largest)
            sLargest=ar[i];
    }
    return sLargest;
}
//Optimized Solution
int secondLargestTwoVariable(int ar[],int n){
    int largest=ar[0];
    int sLargest;
    for(int i=0;i<n;i++){
        if(ar[i]>largest){
            sLargest=largest;
            largest=ar[i];
        }    
    }
    return sLargest;
}
int main(){
    int ar[]={1,-1,1,1,1};
    int n=sizeof(ar)/sizeof(int);
    //Brute Force
    cout<<sortSecondLargest(ar,n)<<endl;
    //Better Solution
    cout<<findFirstThenSecond(ar,n)<<endl;
    //Optimized Solution
    cout<<secondLargestTwoVariable(ar,n)<<endl;
    return 0;
}
