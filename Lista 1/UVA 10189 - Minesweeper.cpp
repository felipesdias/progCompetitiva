#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	char mat[110][110];
	int cont[110][110];
	int contador = 0;

	while( (cin >> n >> m) && n+m != 0) {
		if(contador)
			puts("");

		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++) {
				cin >> mat[i][j];
				cont[i][j] = 0;
			}


		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++)
				if(mat[i][j] == '*') {
					cont[i-1][j-1]++;
					cont[i-1][j]++;
					cont[i-1][j+1]++;

					cont[i][j-1]++;
					cont[i][j+1]++;

					cont[i+1][j-1]++;
					cont[i+1][j]++;
					cont[i+1][j+1]++;
				}

		printf("Field #%d:\n", ++contador);
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				if(mat[i][j] == '*')
					printf("*");
				else
					printf("%d", cont[i][j]);
			}
			puts("");
		}
	}

	return 0;
}