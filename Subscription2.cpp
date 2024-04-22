#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   srand(time(nullptr));
   int dayUntilExpiry=rand()%11 + 0;
cout << "The number of days until expiry are: " << dayUntilExpiry << endl;
return 0;
}
