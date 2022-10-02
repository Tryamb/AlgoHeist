#include <iostream> 
#include<bits/stdc++.h>
#include<vector> 
using namespace std; 
 
int search(vector<int>&a, int l, int r, int key){ 
 if (l > r)  
    return -1; 
  
  int mid = (l + r) / 2;  //finding the middle element
  
 if (a[mid] == key)  
    return mid; 
  
 if (a[l] <= a[mid]) 
 {  if (key >= a[l] && key <= a[mid])  
      {
        return search(a, l, mid - 1, key);
      } 
    return search(a, mid + 1, r, key); 
 } 
  
 if (key >= a[mid] && key <= a[r]) 
  {
    return search(a, mid + 1, r, key); 
  } 
 return search(a, l, mid - 1, key); 
} 

int main()
{ 
 int n; vector<int>a; 
 cout<<"Enter the number of elements : "; 
 cin>>n; 
 cout<<"Enter the elements : \n"; 
 for(int i=0;i<n;i++)
 {  
    int key; cin>>key;
    a.push_back(key); 
 }  
 cout<<"\nEnter the key Element "; 
 int key;  cin>>key; 
 int index=search(a,0,n-1,key);
  if(index!=-1)
    cout<<"\nKey is present at index : "<<index; 
  else
    cout<<"Element Not Found!";

 return 0; 
} 
