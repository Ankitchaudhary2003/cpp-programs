#include<iostream>
using namespace std;


void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
        
    }


void swaping(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);

        }
    }

}


int main(){
    int size;
    cout<<"Enter the size of an array "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of an array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
     
    swaping(arr,size);
     print(arr,size);
  
}