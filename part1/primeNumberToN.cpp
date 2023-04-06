#include <iostream>
#include <string>
#include <cmath> // to use the round function
using namespace std;

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

enPrimeNotPrime CheckPrime(int number)
{
    int M = round(number / 2);

    for (int counter = 0; counter <= M; counter++)
    {
        if (number % counter == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

int readPostieNumber(string messages)
{
    int number = 0;

    do
    {
        cout << messages << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

void PrintPrimNumbre(int number)
{

    cout << "the prime number from 1 to " << number << " are:";
    cout << endl;

    for (int i = 1; i <= number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
        {
            cout << i << endl;
        }
    }
}
int main()
{

    PrintPrimNumbre(readPostieNumber("Enter The Number: "));

    return 0;
};