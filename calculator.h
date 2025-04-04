#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string> 
int add(int a, int b); 
int subtract(int a, int b); 
int multiply(int a, int b); 
double divide(int a, int b); 
unsigned long long factorial(int n); 
int gcd(int a, int b); 
int lcm(int a, int b); 
int rand(int min, int max);
double evaluateExpression(const std::string &expression);
#endif
