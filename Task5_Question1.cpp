#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /* generating random numbers*/
    srand(time(0));

    int dayUntilExpiry = rand() % 11 + 0;
    cout << "Number of days until expiry are:" << dayUntilExpiry << endl;

    // Checking if conditions:
    /* for <= 5 and <=10*/
    if (dayUntilExpiry <= 5)
    {

        if (dayUntilExpiry == 1)
        {
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
        }
        else if (dayUntilExpiry == 0)
        {
            cout << "Your subscription has expired" << endl;
        }
        else
        {
            cout << "Your subscription expires in " << dayUntilExpiry << endl;
            cout << "Renew now and save 10%!" << endl;
        }
    }
    else if (dayUntilExpiry <= 11)
    {
        if (dayUntilExpiry <= 10)
        {
            cout << "Your subscription will expire soon. Renew Now!" << endl;
        }
        else 
        {
            cout << "You have an active subscription." << endl;
        }
    }
}
