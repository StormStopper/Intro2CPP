//
//  main.cpp
//  Chapter7
//
//  Created by Jackson Ruthe on 11/18/15.
//  Copyright © 2015 Jackson Ruthe. All rights reserved.
//
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int inputOne = 0;
    int inputTwo = 0;
    int final;
    cout << "Enter an Even Int" << endl;
    cin >> inputOne;
    cout << "Enter an Int" << endl;
    cin >> inputTwo;
    if (inputOne % 2  == 0)
    {
        while (inputOne < inputTwo)//outputting 16
        {
            final = inputOne + 2;
            inputOne = final;
            final = final + final;
            cout << final << endl;
        }
    }
    else
    {
        inputOne = inputOne + 1;
    }
    return 1;
}
