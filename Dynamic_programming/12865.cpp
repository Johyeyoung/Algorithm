#include<stdio.h>
#include<algorithm>
using namespace std;
/*
int dp[101][100001];//dp �̿�
int wv[101][100001];//��ǰ��  1�� �õ��� ���� ��ġ�� ���� ���� �غ� ����
*/
//int N, K; //ũ��� ��ġ
int dp[10001]; // ���� ���� ��ġ�� ���� �� ������ 1���� ���
int w[101]; //���� 
int v[101]; // ��ġ

int N, K;
/*
int max(int a, int b) {
	return a > b ? a : b;
}
*/

int main()
{

	
	scanf_s("%d %d", &N, &K);
	
	
	for (int i = 1; i <= N; i++)
	{
		scanf_s("%d %d", &w[i], &v[i]);
	}
    
	for (int i = 1; i <= N; i++)
	{
		for (int j = K; j >=1; j--)
		{
			if (w[i]<=j) { //������ ���� �� ���� ���� 
				dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
			}
			
			
		}
		
	}
	printf("%d\n", dp[K]);

	return 0;
}