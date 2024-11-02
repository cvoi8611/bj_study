#include <iostream>

using namespace std;

// 1 2 3 5 8 
// 13 21 34 55 89



int main(){
    int n;
    int fib[1001] = {0};
    fib[1] = 1;
    fib[2] = 2;
    
    cin >> n;

    for (int i=3; i<=n; i++){
        fib[i] = (fib[i-2] + fib[i-1]) % 10007;
    }

    cout << fib[n] << endl;
}