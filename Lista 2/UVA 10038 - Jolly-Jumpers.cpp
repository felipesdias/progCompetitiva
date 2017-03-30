#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <cstring>
#include <cstdio>
#include <stack>
#include <cmath>

using namespace std;

int main() {
    int n;
    int p1;
    int p2;
    int nJol;
  
    while(scanf("%i",&n) != EOF) {
		nJol = true;
		int num[40000] = {0};
		if(n == 1) {
			cin >> p1;
		} else {
			cin >> p1;
			for(int i=1; i<n; i++) {
				cin >> p2;
				num[abs(p1-p2)]++;
				p1 = p2;
			}
		}
		for(int i=1; i<n; i++) {
			if(num[i] != 1) {
				cout << "Not jolly" << endl;
				nJol = false;
				break;
			}	
		}
		if(nJol)
			cout << "Jolly" << endl;
    }
  
	return 0;
}