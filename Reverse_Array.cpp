#include<iostream>
using namespace std;
 
int Reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int size;
    cout<<"Enter the size of an Array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements of an Array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Initial Array is : ";
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }

   Reverse(arr,size);
    cout<<endl<<"Reverse Array is : ";
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 
    }
    }


