#include <iostream>

using namespace std;

int main(){
    int n, total=0;
    cin >> n;
    int paper[100][100] = {0};
    for (int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        for (int j=a; j<a+10; j++){
            for (int k=b; k<b+10; k++){
                paper[j][k] += 1; 
            }
        }
    }
    for (int j=0; j<100; j++){
        for (int k=0; k<100; k++){
            if (paper[j][k] != 0){
                total++;
            } 
        }
    }
    cout << total << endl;
}