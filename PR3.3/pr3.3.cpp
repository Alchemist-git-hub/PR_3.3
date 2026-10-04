#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double R;
	


	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	// 1.розгалуження в скороченій формі
	if (x <= -6-R)
		y=0 ;
	if (-6-R < x && x <= -6)
		y= - sqrt( pow(R,2) - pow((x+6),2) );
	if (x < -6 && x <= -R)
		y = (pow(R,2) + R*x)/(6-R);
	if (-R < x && x <= 0)
		y = sqrt( pow(R,2) - pow(x,2) );
	if (0 < x && x <= 3)
		y = (2*R*x)/3 ;
	if (3 < x)
		y = ( R*(x-3)/6 );

	cout << endl;
	cout << "1)y= " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x <= -6 - R)
		y = 0;
	else if (x <= -6)
		y = -sqrt(pow(R, 2) - pow((x + 6), 2));
	else if (x <= -R)
		y = (pow(R, 2) + R * x) / (6 - R);
	else if (x <= 0)
		y = sqrt(pow(R, 2) - pow(x, 2));
	else if (x <= 3)
		y = (2 * R * x) / 3;
	else
		y = (R * (x - 3) / 6);

	cout << "2)y= " << y << endl;

	cin.get();
	return(0);
}