// mathpolimorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include<iostream>
#include<typeinfo>
#include<cmath>
using namespace std;

class add
{
    public:
    int a, b;
    int sum;
    
    void displayAdd(int a, int b)
    {
        sum = a + b;
        cout << "Sum is: " << sum << endl;
    }
};

class mul : public add
{
    public:
    int multificationl;
    
    void displayMul(int a, int b)
    {
        multificationl = a * b;
        cout << "Multiplication is: " << multificationl << endl;
    }
};

class sub : public mul
{
    public:
    int subtraction;
    
    void displaySub(int a, int b)
    {
        subtraction = a - b;
        cout << "Subtraction is: " << subtraction << endl;
    }
};

class division : public sub
{
    public:
    double divisionResult;
    
    void displayDiv(int a, double b)
    {
        divisionResult = a / b;
        cout << "Division is: " << divisionResult << endl;
    }
};

int main()
{
    division t;
    t.displayAdd(10, 5);    // Addition
    t.displayMul(10, 5);    // Multiplication
    t.displaySub(10, 5);    // Subtraction
    t.displayDiv(10, 5.0);  // Division

    return 0;
}
