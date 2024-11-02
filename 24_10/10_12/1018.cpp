#include <iostream>
using namespace std;

int main(){
    bool mode; // 0 = 흰색 , 1 = 검정색
    int m,n,m_modify=1000,modify=1000,start_i, start_j, total_count = 0;
    string str;
    cin >> n >> m;
    char cb[n][m];

    for (int i=0; i<n; i++){
        cin >> str;
        for (int j=0; j<m; j++){
            cb[i][j]=str.at(j);
        }
    }

    for (int k=0; k<=n-8; k++){
        for (int h=0; h<=m-8; h++){
            
            for (int p=0; p<=1; p++){
                //cout << ++total_count << ".";
                //cout << "8x8 체스판을 확인합니다";
                if (p == 0) {
                    //cout << " | 흰색 시작의 경우" << endl;
                }
                else {
                    //cout << " | 흑색 시작의 경우" << endl;;
                }
                mode = p;
                modify = 0;
                start_i = k;
                start_j = h;

                for (int i=k; i<8+k; i++){
                    for (int j=h; j<8+h; j++){
                        char ox = 'O';

                        if (mode == 0){  // 가장 왼쪽 위 색이 흰색(W)인 경우
                            if (((i+start_i)%2 == 1 && (j+start_j)%2 == 1) || ((i+start_i)%2 == 0 && (j+start_j)%2 == 0)){  // WBWBWB...에서 W 검사
                                if (cb[i][j] != 'W') {
                                    modify++;
                                    ox = 'X';
                                }
                            }
                            else{   // BWBWBW...
                                if (cb[i][j] != 'B') {
                                    modify++;
                                    ox = 'X';
                                }
                            }
                        }
                        else {           // 가장 왼쪽 위 색이 검정색(B)인 경우
                            if (((i+start_i)%2 == 1 && (j+start_j)%2 == 1) || ((i+start_i)%2 == 0 && (j+start_j)%2 == 0)){  // WBWBWB...에서 B 검사
                                if (cb[i][j] != 'B') {
                                    modify++;
                                    ox = 'X';
                                }
                            }
                            else{   // BWBWBW...
                                if (cb[i][j] != 'W') {
                                    modify++;
                                    ox = 'X';
                                }
                            }
                        }
                        //cout << " | " << cb[i][j] << "[" << ox << "]" << "(" << i << "," << j << ")";   
                    }
                    //cout << endl;
                }
                //cout << endl << "modify한 총 횟수 : " << modify << endl << endl << endl;
                if (m_modify > modify) m_modify = modify;
            }


        }
    }
    
    //cout << "최소 modify 횟수 : " << m_modify << endl;
    cout << m_modify << endl;
}