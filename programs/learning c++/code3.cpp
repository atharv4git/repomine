#include <iostream>

using namespace std;

int plusss(int num1 , int num2){
    return num1+num2;
}

int main(){

    int n1,n2,result;
    char op;

    cout <<"Enter first number : ";
    cin>>n1;
    cout <<"Enter operator : ";
    cin>>op;
    cout <<"Enter second number : ";
    cin>>n2;

    if(op=='+')
    {
        result = n1+n2;
    }
    else if(op=='-')
    {
        result = n1-n2;
    }
    else if(op=='*')
    {
        result = n1*n2;
    }
    else{
        result = n1/n2;
    }

    cout<<"Result = "<<result<<endl;

    cout<<plusss(7,5);




    return 0;
}