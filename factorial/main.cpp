#include <iostream>

using namespace std;
//Juan Tendwa Nyange
//Bit-1-3575-3/2016
//Structured Programming CAT, 2ND Trimester 2021
//Question F.

int factorial(int arg)
{
    if(arg > 1)
    {
        return arg * factorial(arg - 1);
    }else
    {
        return 1;
    }
}
int main()
{
    int num, result;

    cout<<"Enter a number greater than 1: ";
    cin>>num;

    result = factorial(num);
    cout<<"The Factorial of "<< num <<" = "<<result;
    return 0;
}
