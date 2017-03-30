#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

	int posicoes[1000001];
	int pEscadas[100][2];
	
int main() {
	int posAux;
	int casos, players, escadas, dados;
	int sorteio;
	int i, j;
	bool ganhou;
	cin >> casos;
	for(int tam=0; tam<casos; tam++) {
		ganhou = false;
		cin >> players >> escadas >> dados;
		for(i=0; i<=players; i++)
			posicoes[i] = 1;
		for(i=0; i<escadas; i++) {
			cin >> pEscadas[i][0];
			cin >> pEscadas[i][1];
		}

		for(i=0; i< dados; i++) {
			cin >> sorteio;
			posAux = i%players;
			
			if(!ganhou) {
				posicoes[posAux] += sorteio;
				if(posicoes[posAux] >= 100) {
					posicoes[posAux] = 100;
					ganhou = true;
				}
				
				for(j=0; j<escadas; j++)
					if(posicoes[posAux] == pEscadas[j][0])
						posicoes[posAux] = pEscadas[j][1];
				
				if(posicoes[posAux] >= 100) {
					posicoes[posAux] = 100;
					ganhou = true;
				}
			}
		}
		for(int i=0; i< players; i++) {
			cout << "Position of player " << i+1 << " is " << posicoes[i] << "." << endl;
		}
	}
	
	return 0;
}