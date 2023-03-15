#include<iostream>
using namespace std;
int main()
{
int m,arr[m], n;;
cout<<"enter size of array";
cin>>m;
cout<<"Enter"<<m<<"integers in assencing order";
for(i=0,i<m,i++)
cin>>arr[i];
cout<<"enter numbetr you want to search";
cin>>n;
int start= 0, end= n-1,mid;
  int pos= -1
    while(start<=end) 
    {
      mid = (start+end)/2
      if(arr[mid]==n){
        pos=mid;
        break;
      }
      else if(arr[mid]<n)
      {
        end=mid-1;
       else
         start=mid+1;
      }
      if (pos==-1)
        cout<<n<<"is not present in array"<<endl;
      else
        cout<<n<<"is present in array at position;
        return 0;
    }
      
  
 
