#include <iostream>
using namespace std;

int main()
{
    /*prompting user to enter integer and implementation of while loop*/
   cout<< "Please insert an integer between 5 and 10"<<endl;
   int i=5;
   while(i<=10)
   {
    cin >> i;
    i++;
   }
   return 0;
}