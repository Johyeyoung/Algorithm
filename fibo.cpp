#include<stdio.h>
//int z = 0;// 0�� ���� ���� �Ǻ���ġ���� ����ߴ� Ʋ��
//int O = 0; // 1�� ���� ����
int data[100] = {1,1,}; //�޸������̼��� ����ϱ� ���� �ʱ�ȭ

int fibo(int n);

int main() {
	int check; // � �˾� ���� üũ ����
	int f; // fibo���� 0�̶� 1�� ������ �˾ƺ� ����
	scanf_s("%d", &check);
	for (int i = 0; i < check; i++)
	{
		scanf_s("%d", &f);
		if (f == 0)
		{
			printf("1 0\n");
		}
		else if (f == 1)
			printf("0 1\n");
		else {
			fibo(f);
			printf("%d %d\n", data[f - 2], data[f - 1]);
		}
	}
}

int fibo(int n) {
	if (n <= 2)
		return data[n - 1];
	else if (data[n - 1] > 0)
		return data[n - 1];
	else {
		data[n-1]= fibo(n - 1) + fibo(n - 2);
		return data[n - 1];
	}
}