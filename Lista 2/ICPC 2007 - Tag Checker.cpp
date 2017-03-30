#include <bits/stdc++.h>

using namespace std;

int main() {
	
	char linha[1000];

	while(cin.getline(linha, 1000, '#')) {
		int tam = strlen(linha);

		if(tam == 0 || (tam == 1 && linha[0] == '\n'))
			break;

		stack<char> pilha;
		bool correto = true;

		for(int i=0; i<tam; i++) {
			if(tam-i-1 >= 2 && linha[i] == '<' && linha[i+1] >= 'A' && linha[i+1] <='Z' && linha[i+2] == '>') {
				pilha.push(linha[i+1]);
			}
			else if(tam-i-1 >= 3 && linha[i] == '<' && linha[i+1] == '/' && linha[i+2] >= 'A' && linha[i+2] <='Z' && linha[i+3] == '>') {
				if(pilha.empty()) {
					correto = false;
					printf("Expected # found </%c>\n", linha[i+2]);
					break;
				}
				else if(linha[i+2] == pilha.top()) {
					pilha.pop();
				}
				else {
					correto = false;
					//cout << "Expected </" << pilha.top()
					printf("Expected </%c> found </%c>\n", pilha.top(), linha[i+2]);
					break;
				}
			}
		}

		if(correto && pilha.empty())
			puts("Correctly tagged paragraph");
		else if(correto)
			printf("Expected </%c> found #\n", pilha.top());
	}

	return 0;
}