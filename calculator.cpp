#include"calculator.h"
#include <iostream>
 #include <cstdlib> 
 using namespace std;  

 int add(int a, int b) { 
return a+b; }

 int subtract(int a, int b) {
 return a-b; } 

int multiply(int a, int b) { 
return a*b; } 

double divide(int a, int b) { 
if (b==0) { 
cout << "cannot divide by zero" << endl; 
return 0;  } return static_cast<double>(a)/b; } 

unsigned long long factorial(int n) { 
    if (n < 0) {
        cout << "Error: Factorial is not defined for negative numbers!" << endl;
        return 0;  
    }
    unsigned long long result = 1; 
    for (int i = 1; i <= n; i++) { 
        result *= i;  
    } 
    return result; 
 } 

int gcd(int a, int b){ 
if (b==0) 
return a; 
return gcd(b, a % b); } 

int lcm(int a, int b) { 
return (a*b) / gcd(a,b); }

int rand(int min, int max) { 
srand(50); 
return min + rand() % (max - min + 1); }
