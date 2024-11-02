#include <iostream>
using namespace std;

int main(){
    // 666 , 1666, 2666, 3666, 4666, 5666, 6661, 6662, 6663...
    int n1=0, n2, cnt=0;
    string str = "666";
    cin >> n2;
    
    while (cnt != n2){
        if (to_string(n1).find(str) != -1){
            cnt++;;
        }   
        n1++;
    }
    cout << n1-1;
}