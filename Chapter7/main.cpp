
#include <iostream>

using namespace std;

int main()
{
    int exspenseArraySize;
    cout << "Enter SIze of Exspense Array";
    cin >> exspenseArraySize;
    int *exspense = new int[exspenseArraySize];
    //int income = { };
    //cout << "Enter Income";
    //cin >> income;
    cout << "Enter Expsense";
    cin >> *exspense;
    //cout << income;
    cout << exspense;
}
