#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;
   int Max(int arr[], int size){  
             //int max=arr[0];
             int maxi=INT_MIN;
            for(int i=0;i<size;i++){
               // if(max<arr[i]){
                //    max=arr[i];
                maxi=max(maxi,arr[i]);

                }
                 return maxi;
            }
           int Min(int arr[], int size){
             //int min=arr[0];
             int mini=INT_MAX;
              for(int i=0;i<size;i++){
                //if(min>arr[i]){
                  //  min=arr[i];
                  mini=min(mini,arr[i]);
                }
                  return mini;
              }
            int main(){
    int size;
    cout<<"Enter the size of Array "<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   cout<< "Maximum value is: " <<Max(arr,size)<<endl;
   cout<<"Minimum value is "<<Min(arr,size);
    
}