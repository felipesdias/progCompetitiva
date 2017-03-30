#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, cont, aux, tam;
	int vet[30000];
	vector<int> list;

	cin >> n;

	while(n--) {
		scanf("%d%d", &aux, &tam);
		list.clear();
		cont = 0;

		for(int j=1; j<=tam; j++) {
			scanf("%d", &vet[j-1]);

			sort(vet, vet+j);

			if(j%2 == 1) {
				cont++;
				list.push_back(vet[j/2]);
			}
		}
		

		printf("%d %d", aux, cont);
		for(int j=0; j<list.size(); j++) {
			if(j%10 == 0) {
				puts("");
				printf("%d", list[j]);
			} else {
				printf(" %d", list[j]);
			}
		}

		puts("");
	}

	return 0;
}