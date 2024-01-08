#include<iostream>
using namespace std;
int fact=1;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
    }
int nCr(int a,int b){
    int c=factorial(a);
    int d=factorial(b)*factorial(a-b);
    int ans=c/d;
    return ans;
}


int main(){
    int num1;
    int num2;
    cout<<"Enter the value of n "<<endl;
    cin>>num1;
    cout<<"Enter the value of r "<<endl;
    cin>>num2;
   int answer=nCr(num1,num2);
   cout<<answer;

}