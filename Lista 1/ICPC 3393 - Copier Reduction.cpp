#include <bits/stdc++.h>
using namespace std;
#define L min
#define I int
#define S scanf
#define P printf

#define T max
#define W while
#define R return

I main() {
	I x, y, w, h;
	W((S("%d%d%d%d", &x, &y, &w, &h)) && x+y+w+h != 0) P("%d%%\n", L(I(T(L(w*1.0/x, h*1.0/y), L(w*1.0/y, h*1.0/x))*100), 100));
	R 0;
}