#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n_pessoas, gasto, n_hoteis, n_semanas;


	int preco_pessoa;
	int n_camas;

	
	while(cin >> n_pessoas >> gasto >> n_hoteis >> n_semanas) {
		int minimo = 1000000000;

		while(n_hoteis--) {
			bool casa = true;
			scanf("%d", &preco_pessoa);
			for(int i=0; i<n_semanas; i++) {
				scanf("%d", &n_camas);
				if(n_camas >= n_pessoas)
					casa = false;
			}

			if(!casa)
				minimo = min(minimo, n_pessoas*preco_pessoa);
		}

		if(minimo <= gasto)
			printf("%d\n", minimo);
		else
			puts("stay home");
	}
	return 0;
}