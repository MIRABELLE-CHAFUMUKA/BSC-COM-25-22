#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   /*Implementation of random number generator*/
   srand(time(nullptr));
   int dayUntilExpiry=rand()%11 + 0;
cout << "The number of days until expiry are: " << dayUntilExpiry << endl;
  /*Implementation of switch cases*/
switch(dayUntilExpiry){
   case 0: cout << "Your subscription has expired." <<endl;
   break;
 case 1: cout << "Your subscription expires within a day!" <<endl;
         cout << "Renew now and save 20%!" << endl;
         break;
         /*Cases when number days are less than or equal to and out to be displayed*/
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
                  /*Cases when numbers are less than or equal to 10 but greater than or euqal to 6*/
         case 6: cout << "Your subscription will expire soon. Renew now!" << endl;   
             break;
           case 7: cout << "Your subscription will expire soon. Renew now!" << endl;
           break;
           case 8: cout << "Your subscription will expire soon. Renew now!" << endl;
             break;
             case 9: cout << "Your subscription will expire soon. Renew now!" << endl;
             break;
             case 10: cout << "Your subscription will expire soon. Renew now!" << endl;
             break;
             /*Case when number of days are equal to 11 the*/
             case 11: cout << "You have an active subscription." << endl;
             break;
}
return 0;
}
