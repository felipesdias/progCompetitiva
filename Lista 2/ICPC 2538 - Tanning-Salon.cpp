#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int n, naoAtendidos;
	vector<char> fila;
	char c;
	cin >> n;
	while(n) {
		fila.clear();
		int cliente[30] = {0};
		naoAtendidos = 0;
		cin.get();
		cin.get(c);
		while(c != '\n') {
			if(cliente[c-'A'] == 2) {
				cliente[c-'A'] = 0;
				naoAtendidos++;
				for(int i=0; i<fila.size(); i++) {
					if(fila[i] == c) {
						fila.erase(fila.begin()+i);
						break;
					}
				}
			} else if(cliente[c-'A'] == 1) {
				cliente[c-'A'] = 0;
				if(fila.size()) {
					cliente[fila.front()-'A'] = 1;
					fila.erase(fila.begin()+0);
				}
				n++;
			} else {
				if(n) {
					cliente[c-'A'] = 1;
					n--;
				} else {
					cliente[c-'A'] = 2;
					fila.push_back(c);
				}
			}
			cin.get(c);
		}
		if(naoAtendidos)
			cout << naoAtendidos << " customer(s) walked away." << endl;
		else
			cout << "All customers tanned successfully." << endl;
		cin >> n;
	}

	return 0;
}