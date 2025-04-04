#include <iostream>
#include "calculator.h"
using namespace std; 


int main() {
unsigned int a;
unsigned int b;
unsigned int c;

while(true){cout<<"which operation would you like to use?"<<endl;
    cout<<"--------please enter only numbers between 1 and 8-------"<<endl;
    cout<<" 1.addition"<<endl;
    cout<<" 2.subtraction "<<endl;
    cout<<" 3.multiplication "<<endl;
    cout<<" 4.division"<<endl;
    cout<<" 5.facorial"<<endl;
    cout<<" 6.GCD "<<endl;
    cout<<" 7.LCM"<<endl;
    cout<<" 8.Random Number Generator in a specific range"<<endl;
    cout<<" 9. Exit" << endl;
    
     cin>>c;


     if (c == 9) {  
        cout << "Exiting the calculator. Goodbye!" << endl;
        break;
    }

    if (c < 1 || c > 8) { 
        cout << "Invalid choice! Please enter a number between 1 and 8." << endl;
        continue; 
    }

switch (c){
    case 1:{
        cout<<"enter first value: ";
        cin>>a;
        cout<<"enter second value: ";
        cin>>b;
        cout<<"addition:"<<add(a,b)<<endl;}
    break;
    case 2:
    {
        cout<<"enter first value: ";
        cin>>a;
        cout<<"enter second value: ";
        cin>>b;
        cout<<"subtraction:"<<subtract(a,b)<<endl;}
    break;
    case 3:
    {
        cout<<"enter first value: ";
        cin>>a;
        cout<<"enter second value: ";
        cin>>b;
        cout <<"mulltiplication:"<<multiply(a,b)<<endl;}
    break;
    case 4:
    {
        cout<<"enter first value: ";
        cin>>a;
        do{
        cout<<"enter second value that is not zero: ";
        cin>>b;} while(b==0);
        cout <<"division:"<<divide(a,b)<<endl;}
    break;
    case 5:
    {
        cout<<"enter value: ";
        cin>>a;
        cout <<"factorial:"<<factorial(a)<<endl;}
    break;
    case 6:
    {
        cout<<"enter first value: ";
        cin>>a;
        cout<<"enter second value: ";
        cin>>b;
        cout<<"GCD:"<<gcd(a,b)<<endl;}
    break;
    case 7:
    {
        cout<<"enter first value: ";
        cin>>a;
        cout<<"enter second value: ";
        cin>>b;
        cout <<"LCM: "<< lcm(a,b)<<endl;}
    break;

    case 8:
    {   cout<<"enter minimum value: ";
        cin>>a;
        cout<<"enter maximum value: ";
        cin>>b;
        cout <<"random number:"<<rand(a,b)<<endl;}
    break;


}

}
}
