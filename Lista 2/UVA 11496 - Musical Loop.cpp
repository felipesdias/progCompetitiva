#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, ini;
	int vet[30000];

	while((scanf("%d", &n)) && n) {
		scanf("%d", &ini);
		vet[0] = ini;
		vet[n] = ini;
		for(int i=1; i<n; i++)
			scanf("%d", &vet[i]);

		int cont = 0;

		for(int i=1; i<n; i++)
			if( (vet[i-1] < vet[i] && vet[i+1] < vet[i]) || (vet[i-1] > vet[i] && vet[i+1] > vet[i]))
				cont++;

		if( (vet[n-1] < vet[0] && vet[1] < vet[0]) || (vet[n-1] > vet[0] && vet[1] > vet[0]) )
			cont++;

		printf("%d\n", cont);
	}

	return 0;
}