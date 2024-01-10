#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        count=count+arr[i];

    }
    return count;

}



int main(){
    int size;
    cout<<"Enter the size of array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the Elements of an array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
   cout<< sum(arr,size);
   

}