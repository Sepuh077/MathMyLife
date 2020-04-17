#include "Hatvac.h"
#include <iostream>
#include <cmath>
using namespace std;

void Hatvac::input() {
	cin >> x1 >> y1 >> x2 >> y2;
}
Hatvac Hatvac::change_angle(double angle, Hatvac hatvac) {
	double x0 = (x1 + x2) / 2, y0 = (y1 + y2) / 2, k = (y2 - y1) / (x2 - x1);
	double angle1 = atan(k);
	double k0 = tan(angle1 + angle), b0 = y0 - k0 * x0;
	double l = sqrt((x2 - x0) * (x2 - x0) + (y2 - y0) * (y2 - y0));
	Hatvac verj_hatvac;
	if (angle1 + angle != acos(0)) {
		verj_hatvac.x1 = x0 + sqrt((l * l) / (1 + k0 * k0));
		verj_hatvac.x2 = x0 - sqrt((l * l) / (1 + k0 * k0));
		verj_hatvac.y1 = k0 * verj_hatvac.x1 + b0;
		verj_hatvac.y2 = k0 * verj_hatvac.x2 + b0;
	}
	else {
		verj_hatvac.x1 = verj_hatvac.x2 = x0;
		verj_hatvac.y1 = y0 - l;
		verj_hatvac.y2 = y0 + l;
	}
	return verj_hatvac;
}
void Hatvac::print() {
	cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
}