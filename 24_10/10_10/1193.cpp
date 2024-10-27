#include <iostream>
using namespace std;

int main(){
    int num;
    int a,b;
    cin >> num;
    if (num == 1){
        cout << "1/1" << endl;
    }
    else {
        for (int i=0; i<num; i++){
            num -= i;
            a = i+1;
            b = num;
        }
        //cout << a << "번째 줄 " << b << "번째 분수" << endl;
        if(a%2 == 1){
            // 홀수번째 줄 -> 큰수 / 작은수 시작
            cout << a-(b-1) << "/" << b << endl;

        }
        else {
            // 짝수번째 줄 -> 작은수 / 큰수 시작
            cout << b << "/" << a-(b-1) << endl;
        }
    }
    // 1/1 
    // 1/2 2/1
    // 3/1 2/2 1/3
    // 1/4 2/3 3/2 4/1
    // 5/1 4/2 3/3 2/4 1/5
}