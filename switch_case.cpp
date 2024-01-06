#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of A "<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of B "<<endl;
    cin>>b;
     int choice;
    char operation;
    cout<<"Enter the operation(+, - , * , / and %) that u want to perform"<<endl;
    cin>>operation;
    switch(operation){
        case '+':
        cout<<a+b;
        break;

        case '-':
       
        cout<<"1.(a-b) or 2.(b-a) "<<endl;
        cin>>choice;
        if(choice==1){
            cout<<a-b;
            break;
        }else{
            cout<<b-a;
            break;
        }
        case '*':
        cout<<a*b;
        break;
        case '/':
        
         cout<<"1.(a/b) or 2.(b/a) "<<endl;
         cin>>choice;
        if(choice==1){
            cout<<a/b;
            break;
        }else{
            cout<<b/a;
            break;
        }
        case '%':
         
        cout<<"1.(a%b) or 2.(b%a) "<<endl;
        cin>>choice;
        if(choice==1){
            cout<<a%b;
            break;
        }else{
            cout<<b%a;
            break;
        }
       
        default:
        cout<<"Enter the correct operation"<<endl;
    
    }
    return 0;
        
    }

