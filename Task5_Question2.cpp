#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   srand(time(nullptr));
   int dayUntilExpiry=rand()%5 + 0;
cout << "The number of days until expiry are: " << dayUntilExpiry << endl;
switch(dayUntilExpiry){
   case 0: cout << "Your subscription has expired." <<endl;
   break;
 case 1: cout << "Your subscription expires within a day!" <<endl;
         cout << "Renew now and save 20%!" << endl;
         break;
         case 2 : cout << "Your subscription expires in " << dayUntilExpiry << " days" <<endl;
                  cout << "Renew now and save 10%!"<< endl;
                  break; 
         case 3:  cout << "Your subscription expires in " << dayUntilExpiry << " days" <<endl;
                  cout << "Renew now and save 10%!"<< endl;
                  break;
         case 4:     cout << "Your subscription expires in " << dayUntilExpiry << " days" <<endl;
                  cout << "Renew now and save 10%!"<< endl;
                  break;
         case 5: cout << "Your subscription expires in " << dayUntilExpiry << " days" <<endl;
                  cout << "Renew now and save 10%!"<< endl;
                  break;

}
return 0;
}
