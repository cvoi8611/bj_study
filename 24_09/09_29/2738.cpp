#include <iostream>
using namespace std;

int main(){
    int N, M, b;
    cin >> N >> M;
    int A[N][M], B[N][M];
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            //cout << "A[" << i << "][" << j << "] 입력 :"; 
            cin >> A[i][j];
        }
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            cin >> b;
            A[i][j] += b;
        }
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}