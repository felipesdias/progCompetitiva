#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int mat[254];
	mat['W'] = 64;
	mat['H'] = 32;
	mat['Q'] = 16;
	mat['E'] = 8;
	mat['S'] = 4;
	mat['T'] = 2;
	mat['X'] = 1;

	char c;
	int cont = 0;
	int notas = 0;

	while( (c = cin.get()) && c != '*') {
		if(c == '\n') {
			printf("%d\n", cont);
			cont = 0;
			notas = 0;
			continue;
		} 
		else if(c == '/') {
			if(notas == 64)
				cont++;
			notas = 0;
			continue;
		} else {
			notas += mat[c];
		}
	}

	return 0;
}