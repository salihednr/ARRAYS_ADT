/*
Find The Majority Element In An Array (Array Is Having The Majority Element)
Majority Element:
Element Which Occurs Morethan n/2 Times
Eg:
{1,2,1}=> 1 Is The Majority Element

Note:
Array Will Have Only One Majority Element

3 Method
    1. Brute Force Approach
    2. Better Approach
    3. Optimal Solution
    
1. Brute Force Approach: Similar To Selection Sort
    Time Complexity: O(n^2)
    Space Complexity: O(1)
2. Better Approach: Sort Array Using Best Sorting Method mid+1 Th Term Will Be Majority Element
    Use Merge Sort So
    Time Complexity: O(nlogn)
    Space Complexity: O(1)
    Note: We Have To Make Sure Array Contains Majority Element
3. Optimal Solution:
    Moore's Majority Voting Algorithm
    Time Complexity: O(n)
    Space Complexity: O(1)


*/
#include <iostream>
#include <algorithm>
using namespace std;
//Brute Force Approach
int selectionMajorityElement(int ar[],int size){
    for(int i=0;i<size;i++){
        int el=ar[i];
        int count=0;
        for(int j=i;j<size;j++){
            if(ar[j]==el)
                count++;
        }
        if(count>size/2)
            return el;
    }
    return -1;
}
//Better Solution
int sortMajorityElement(int ar[],int size){
    sort(ar,ar+size);
    //This Will Return Mid+1 th Element
    return ar[size/2];
}
//Moore's Majority Voting Algorithm
int mooresmajorityVotingAlgorith(int ar[],int size){
    int count=1;
    int maj=ar[0];
    for(int i=1;i<size;i++){
        if(ar[i]==maj)
            count++;
        else{
            count--;
            if(count==0)
            {    
                maj=ar[i];
                count=1;
            };
        }
    }
    return maj;
    
}
int main()
{
    int ar[]={2,1,2,1,1,2,1};
    int n=sizeof(ar)/sizeof(int);
    //Brute Force Approach
    cout<<selectionMajorityElement(ar,n)<<endl;
    //Better Approach
    cout<<sortMajorityElement(ar,n)<<endl;
    //Moore's Majority Voting Algorithm
    cout<<mooresmajorityVotingAlgorith(ar,n)<<endl;
    
    return 0;
}
