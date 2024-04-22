#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   srand(time(nullptr));
   int dayUntilExpiry=rand()%11 + 0;
cout << "The number of days until expiry are: " << dayUntilExpiry << endl;
switch(dayUntilExpiry){
   case 0: cout << "Your subscription has expired."
case 1 : cout << "Your subscription expires within a day!" <<endl;
         cout << "Renew now and save 20%!" << endl;
         case 2 : cout << "Your subscription expires in " << dayUntilExpiry << "days" <<endl;
                  cout << "Renew now and save 10%!"<< endl        
}
return 0;
}
