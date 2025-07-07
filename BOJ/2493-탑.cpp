#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	vector<int> tower;
	vector<int> down;
	
	int rec[500000] = {-1};

	for (int i = 0; i < n; i++) {
		cin>>tower[i];
	}

	for (int i = n - 1; i >= 1; i--) {
        if (tower[i - 1] > tower[i]){
            rec[i] = i - 1;
            int until = -1;
            for(int j=0;j<n;j++){
                if (tower[i - 1] > tower[down[j]]){
                    until = j;
                    break;
                }
            }
            if (until == -1) {
                continue;
            }
            for (int j=until;j<n;j++){
                rec[down[j]] = i - 1;
                down = down[:until];
            }
        }
        else{
            down.append(i);
        }
	}


}