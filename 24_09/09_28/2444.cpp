#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++){
        for (int k=i; k<n-1; k++){
            cout << " ";
        }
        for (int j=0; j<i; j++){
            cout << '*';
        }
        cout << '*';
        for (int j=0; j<i; j++){
            cout << '*';
        }
        cout << endl;
    }

    for (int i=n-2; i>=0; i--){
        // n-2로 시작하게끔 하여 1 3 3 1 과 같은 형태가 아닌, 1 3 1 형태로 나오게끔 유도함
        for (int k=i; k<n-1; k++){
            cout << " ";
        }
        for (int j=0; j<i; j++){
            cout << '*';
        }
        cout << '*';
        for (int j=0; j<i; j++){
            cout << '*';
        }
        cout << endl;
    }
}