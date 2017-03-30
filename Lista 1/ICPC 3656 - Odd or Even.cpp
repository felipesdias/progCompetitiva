#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int jogos[2][2];
	int n, i, j;
	int num;
	cin >> n;
	while(n) {
		for(i=0; i<2; i++)
			for(j=0; j<2; j++)
				jogos[i][j] = 0;
				
		for(i=0; i<2; i++) {
			for(j=0; j<n; j++) {
				cin >> num;
				jogos[i][num%2]++;
			}
		}
		
		cout << abs(jogos[0][0]-jogos[1][1]) << endl;
		
		cin >> n;
	}
	
	return 0;
}