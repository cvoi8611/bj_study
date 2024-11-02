#include <iostream>
using namespace std;

int main(){
    int cnt[1000000]; // 연산 횟수
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        cnt[i] = i;
    }

    for (int i=2; i<=n; i++){
        if (i%2 == 0){
            // 2로 나누어 떨어지는 경우, i와 i/2중 게산 횟수가 적은걸로 설정함
            cnt[i] = min(cnt[i], cnt[i/2]);
        }
        if (i%3 == 0){
            // 3으로 나누어 떨어지는 경우, i와 i/3중 게산 횟수가 적은걸로 설정함
            cnt[i] = min(cnt[i], cnt[i/3]);
        }
        // 마지막으로 i와 i-1 값을 비교하여 계산횟수가 적은걸로 설정 후, +1 한 후에 cnt[i]에 넣어둠
        cnt[i] = min(cnt[i], cnt[i-1])+1;
    }

    // 위 실행 방식에 따라서 실행하였다고 가정,
    /*
    n이 10인경우

    cnt[2] -> %2, %3 과정 이후 cnt[2] = 1
    -> cnt[2] = 1 + 1

    cnt[3] -> %2 %3 과정 이후 cnt[3] = 1
    -> cnt[3] = 1 + 1

    [4] -> 과정 이후 [4] = min(4, 2) = 2
    -> cnt[4] = 2 + 1

    [5] -> 과정 이후 [5] = min(5, 3)
    -> cnt[5] = 3 + 1
    */

    // 이런식으로 cnt[1~n]까지 최단 횟수를 생성함

	cout << cnt[n]-1 << "\n";




    // 역추적
    // cnt[n] = k 일 때, cnt[n-a] = k-1 이 성립한다면
    // 이는 값 n -> n-a 로 역추적이 성립함을 의미한다

    // ex) cnt[5] = 4, cnt[4] = 3
    // -> 5 -> 4 로 역추적이 성립됨

    // 위 방식으로 cnt[n]-1 = k 일때
    // k에서 1씩 빼가면서 가장 작은 n값을 찾아가며 수를 줄이고 이를 출력하여 역추적한다 

	while (n != 0) {
		cout << n << " ";
		if (cnt[n] == cnt[n-1] + 1) {
			n = n-1;
		}
		else if (n%2 == 0 && cnt[n] == cnt[n/2]+1) {
			n = n/2;
		}
		else if (n%3 == 0 && cnt[n] == cnt[n/3]+1) {
			n = n/3;
		}
	}

}