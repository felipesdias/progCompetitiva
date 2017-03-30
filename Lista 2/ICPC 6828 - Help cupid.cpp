#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, tam;
	int vet[30000];

	while(cin >> n) {
		for(int i=0; i<n; i++)
			scanf("%d", &vet[i]);

		sort(vet, vet+n);

		int soma1 = 0;
		int soma2 = 0;

		for(int i=0; i<n-1; i+=2)
			soma1 += abs(vet[i]-vet[i+1]);

		for(int i=1; i<n-2; i+=2)
			soma2 += abs(vet[i]-vet[i+1]);
		soma2 += 24-abs(vet[n-1]-vet[0]);

		printf("%d\n", min(soma1, soma2));
	}

	return 0;
}