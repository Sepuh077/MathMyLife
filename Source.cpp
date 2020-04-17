#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <Windows.h>
#include <deque>
#include <queue>
#include "Hatvac.h"
#include <algorithm>
#include <stack>
#include <cstring>
using namespace std;
typedef long long ll;
typedef long double ld;
ll j, i, k, x, u, m, n, a[300002], b[300002], sum, c[300002], d[300002];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	Hatvac hatvac;
	double ank;
	hatvac.input();
	cin >> ank;
	ank = ank * acos(-1) / 180;
	Hatvac verj_hatvac=hatvac.change_angle(ank, hatvac);
	verj_hatvac.print();
	return 0;
}