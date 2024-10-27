#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    while (a >= 4){
        cout << "long ";
        a = a-4;
    }
    cout << "int" << endl;
}