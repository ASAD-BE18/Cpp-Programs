#include <iostream>
using namespace std;
void para(float & R1, float& R2, float& R3)
{
	float r=0;
	r=(R1*R2*R3)/((R1*R2)+(R2*R3)+(R1*R3));
	cout<<r;
}
int main ()
{
	float r1=20,r2=11,r3=21;
	para(r1,r2,r3);
	return 0;
}
