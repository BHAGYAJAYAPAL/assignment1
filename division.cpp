#include <iostream>
#include <conio.h>
using namespace std;
int division(int,int);   //function prototype or declaration with parameter
int main()
{
    int num1,num2,result;
    cout<<"Enter two number to find division\n";
    cin>>num1>>num2;  //Raading the entered two numbers from the user
    result=division(num1,num2);//assign the output to variable result
    //function call
     cout << "Division of "<<num1<<" and "<<num2<<" is: " << result<<endl;
    getch();
    return 0;
}
int division(int a, int b)//function definition
{
        return a/b;
    }