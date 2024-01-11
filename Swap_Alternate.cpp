#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6};
    for(int i=0;i<5;i+=2){
        if(i+1<=5){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}