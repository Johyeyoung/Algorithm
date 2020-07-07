#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N, K;
	cin >> N >> K; // ��ǰ�� ��, ��ƿ�� �ִ� ����

	int dp[100001] = { 0, };


	int W, V; // ����, ��ġ
	for (int i = 0; i < N; i++) {
		cin >> W >> V;
		for (int j = K; j >= 1; j--) {  //�ߺ��� �����ϱ� ���� �ڿ������� ����Ѵ�.
			if (j >= W) {
				dp[j] = max(dp[j - W] + V, dp[j]);
				// cout << j << ": "<<dp[j] << endl; 
			}
		}
	}

	cout << dp[K];



	return 0;
}