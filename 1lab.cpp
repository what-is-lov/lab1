#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	double y;

	while (true)
	{
		cout << "¬ведите значение х " << endl;
		cin >> x ;
	
		if (x<=-6)
		{
			y = 1 ;
		}
		else if (x>-6 && x<=-4)
		{
			y = -0.5*x-2;
		}
		else if (x>-4 && x<=0)
		{
			y = sqrt(4-pow((x+2),2));
		}
		else if (x>0 && x<2)
		{
			y = -sqrt(1-pow((x-1),2));
		}
		else if (x>=2)
		{
			y = -x+2;
		}
		cout << " y = " << y << endl;
	}
	return 0;
}
