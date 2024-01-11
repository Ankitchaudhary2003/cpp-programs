#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
     int ans=arr[0];
  for (int i = 1; i < size; i++) {
   ans=ans^arr[i];
    }
     return ans;
  }
int main(){
int arr[]={1,4,1,4,6};
int size=5;
cout<<findUnique(arr,size);


}
 
