

#include <iostream>
#include<string>#

using namespace std;

void printString(string getString)
{
    cout << "\nI am printing a string: " << getString;
}
int main()
{
    string inputString;
    cin >> inputString;
    printString(inputString);
}

