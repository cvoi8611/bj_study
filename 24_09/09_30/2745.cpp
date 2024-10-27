#include <iostream>
#include <cmath>

using namespace std;


// (int) char A = 65;
// (int) char 1 = 49;

int main(){
    string N;
    int B;
    long long total = 0;
    cin >> N >> B;
    for (int i=0; i<N.length(); i++){
        char a;
        int num = 0;
        a = N.at(i);
        int num_a = (int)a;
        if (num_a > 47 && num_a < 58){
            num = num_a - 48;
            //cout << "0~9인 수 : " << a << " / " << num << endl;
        }
        else {
            num = num_a - 55;
            //cout << "0~9가 아닌 문자열 : " << a << " / " << num << endl;
        }
        total += num * pow(B, (N.length()-1)-i);
        //cout << "total : " << total << endl;
    }
    cout << total << endl;
}