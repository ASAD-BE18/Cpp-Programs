#include <iostream>
//The program illustrates nested while loop
using namespace std;
int main()
{
int i=0, Z=0;
while (i<=5) // outer while loop
{
int j = 0;
while (j<=4) // inner while loop
{
Z+=(i*j);
++j;
}
++i;
}
cout<<"Z="<<Z;
return 0;
}
