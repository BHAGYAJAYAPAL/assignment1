#include <iostream>
#include <conio.h>
using namespace std;
int add(int,int);   
int main()
{
    int number1,number2,result;
    cout<<"Enter two numbers \n";
    cin>>number1>>number2;  //Raading the entered two numbers from the user
    result=add(number1,number2);//assign the output to variable result
    //function call
     cout << "sum of "<<number1<<" and "<<number2<<" is: " << result<<endl;
    getch();
    return 0;
}
int add(int a, int b)//function definition
{
        return a+b;