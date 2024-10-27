#include <iostream>
using namespace std;

int main(){
    int n, x;
    int num[10000];
    cin >> n >> x;
    for (int i=0; i<n; i++){
        cin >> num[i];
    }

    for (int i=0; i<n; i++){
        if (num[i] < x) cout << num[i] << ' ';
    }
}