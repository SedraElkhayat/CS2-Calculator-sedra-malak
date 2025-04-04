#include"calculator.h"
#include <iostream>
 #include <cstdlib> 
#include <string>
#include <stack>
#include <queue>
#include <sstream>
#include <cmath>
#include <stdexcept>
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
int getPrecedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

double applyOperator(double a, double b, char op) {
    cout << "Applying: " << a << " " << op << " " << b << endl; // Debugging
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b == 0) ? throw invalid_argument("Division by zero") : a / b;
        case '^': return pow(a, b);
        default: throw invalid_argument("Invalid operator");
    }
}

double evaluateExpression(const string& expression) {
    stack<double> operands;
    stack<char> operators;
    stringstream numberBuffer;

    for (size_t i = 0; i < expression.length(); ++i) {
        char current = expression[i];

        if (isspace(current)) continue;

        if (isdigit(current) || current == '.') {
            numberBuffer << current;
        } else {
            if (numberBuffer.tellp() > 0) {
                operands.push(stod(numberBuffer.str()));
                numberBuffer.str("");
                numberBuffer.clear();
            }

            if (current == '(') {
                operators.push(current);
            } else if (current == ')') {
                while (!operators.empty() && operators.top() != '(') {
                    char op = operators.top();
                    operators.pop();
                    double b = operands.top(); operands.pop();
                    double a = operands.top(); operands.pop();
                    operands.push(applyOperator(a, b, op));
                }
                operators.pop();
            } else if (current == '+' || current == '-' || current == '*' || current == '/' || current == '^') {
                while (!operators.empty() && getPrecedence(operators.top()) >= getPrecedence(current)) {
                    char op = operators.top();
                    operators.pop();
                    double b = operands.top(); operands.pop();
                    double a = operands.top(); operands.pop();
                    operands.push(applyOperator(a, b, op));
                }
                operators.push(current);
            } else {
                throw invalid_argument("Invalid character in expression");
            }
        }
    }

    if (numberBuffer.tellp() > 0) {
        operands.push(stod(numberBuffer.str()));
    }

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        double b = operands.top(); operands.pop();
        double a = operands.top(); operands.pop();
        operands.push(applyOperator(a, b, op));
    }

    return operands.top();
}





