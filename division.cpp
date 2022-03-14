#include <iostream>
#include <conio.h>
using namespace std;
int division(int,int);   //function prototype or declaration with parameter
int main()
{
    int number1,number2,result;
    cout<<"Enter two number to find division\n";
    cin>>number1>>number2;  //Raading the entered two numbers from the user
    result=division(number1,number2);//assign the output to variable result
    //function call
     cout << "Division of "<<number1<<" and "<<number2<<" is: " << result<<endl;
     cout<<"demo project assignment for github";
    getch();
    return 0;
}
int division(int a, int b)//function definition
{
        return a/b;
    }