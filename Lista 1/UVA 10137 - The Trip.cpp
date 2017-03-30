#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int n;
	double aux, total, media, neg, pos;
	double valor[10000];

	while( (cin >> n) && n) {
		total = neg = pos = 0;

		for(int i=0; i<n; i++) {
			scanf("%lf", &aux);
			total += aux;
			valor[i] = aux;
		}

		media = total/n;

		for(int i=0; i<n; i++) {
			aux = double((long)((valor[i]-media) * 100.0) / 100.0);
			if(aux > 0)
				pos += aux;
			else
				neg += aux;
		}


		printf("$%.2lf\n", max(abs(neg), pos));
	}

	return 0;  
}