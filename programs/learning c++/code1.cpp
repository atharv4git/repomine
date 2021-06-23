#include <iostream>
#include <cmath>

using namespace std;

void sayHello(string name , int age){
    cout<<"Hello "<< name <<" you are "<<age<<" year old"<<endl;
}

int main(){

    sayHello("Atharv",19);  
    sayHello("mike",29);  
    sayHello("jack",50); 

    return 0;
}