#include<iostream>
using namespace std;

int Search(int arr[],int target){
    for(int i=0;i<7;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;


}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int target=3;
    cout<<Search(arr,target);
   
}