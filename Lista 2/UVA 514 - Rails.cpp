#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main() {
	int n, aux;

	while((scanf("%d", &n)) && n) {
		while((scanf("%d", &aux)) && aux) {
			stack<int> pilha;
			queue<int> fila;

			fila.push(aux);

			for(int i=1; i<n; i++) {
				scanf("%d", &aux);
				fila.push(aux);
			}

			for(int i=1; i<=n; i++) {
				pilha.push(i);
				while(!fila.empty() && !pilha.empty() && fila.front() == pilha.top()) {
					fila.pop();
					pilha.pop();
				}
			}

			if(fila.empty())
				puts("Yes");
			else
				puts("No");
		}
		puts("");
	}

	return 0;
}