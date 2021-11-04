// FirstConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <typeinfo>

int calculator(int number, int number2);

using namespace std;
int main(void)
{
    char myname[] = "";
    int number1;
    int number2;
    
    cout << "Please enter your name: ";
    cin >> myname;
    cout << myname, "\n";
    cout << "Please enter a number: ";
    cin >> number1;
    if (typeid(number1).name() != "integer")
        printf("non integer");
    cout << "Please enter another number ";
    cin >> number2;
    int outputnumber = calculator(number1, number2);
    printf("The output number is %i\n", outputnumber);
}

int calculator(int number1, int number2)
{
    return number1 + number2;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
