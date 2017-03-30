#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	long long int n;
	long long int soma, totalT, totalB;
	long long int est[10000];
	double aux;
	long long int media;

	while( (cin >> n) && n ) {
		for(long long int i=0; i<n; i++) {
			scanf("%lf", &aux);
			soma += long long int(aux*100);
			est[i] = long long int(aux*100);
		}

		media = long long int((soma*1.0/n*.10)*100);
		totalT = totalB = 0;

		for(long long int i=0; i<n; i++) {
			if(est[i] > media)
				totalT += est[i]-media
			else
				totalT += media-est[i]
		}

		cout << totalT << "   " << totalB << endl;
	}
	return 0;
}