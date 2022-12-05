#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define LOCATE(x,y) (cout<<"\033["<<x<<';'<<y<<'H')
#define PI 3.1415926536
#define	START 0.0
#define	END (2.0*PI)
#define	PNT 64
#define	STEP ((END-START)/PNT)
#define	xA 14
#define yA 10
#define header (cout<<"----------The Sine Function----------")

int main() {
	int row{}, column{};
	LOCATE(2, 25); header;

	LOCATE(xA, 1);
	for (column = 1; column < 78; ++column) {
		cout << ((column - yA) % 8 ? '\304' : '\305');
	}
	cout << '\020';

	LOCATE(xA - 1, yA + 64); cout << "2PI	x";

	for (row = 5; row < 24; ++row) {
		LOCATE(row, yA); cout << '\305';
	}
	LOCATE(4, yA);	cout << "\036 sin(x)";

	LOCATE(xA - 8, yA + 1);	cout << " 1";
	LOCATE(xA + 8, yA + 1);	cout << "-1";

	int tavi = yA, bolo = tavi + PNT;

	for (column = tavi; column <= bolo; ++column) {
		double x = (column - yA) * STEP;
		row = (int)(xA - 8 * sin(x) + .5);
		LOCATE(row, column);	cout << '*';
	}

	LOCATE(26, 90); cout << "@_Lukk";
}
