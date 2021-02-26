/*
===============================================================
                    10971�� - ���ǿ� ��ȸ 2
===============================================================
�ð����⵵ )
O(N!*N)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    int cost[20][20];
    vector<int> route(n);
    int ans = 2147483647; // min

    // �Է¹ޱ�
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    // ù ���� ���� - ��������: 0~(n-1)��° ����
    for (int i = 0; i < n; i++) {
        route.push_back(i);
    }

    // �� �������� ó���ؾ��� ��
    do {
        int sum = 0;
        bool back = true;
        for (int i = 0; i < n-1; i++) { // �ٷ� next ���ÿ��� ���� check
            if (cost[route[i]][route[i + 1]] != 0) { // ���° �������� ������ route[i]�� ���
                sum += cost[route[i]][route[i+1]];
            }
            else{ 
				back = false;
				break;
			}
        }
        if (back && cost[route[n-1]][route[0]] != 0) { // ������ ���ÿ� ù���� ����
            sum += cost[route[n-1]][route[0]];
            if (ans > sum) ans = sum;
        }
    } while (next_permutation(route.begin() + 1, route.end())); // ���� ���� ȣ��

    cout << ans << '\n';
    return 0;
}








/*
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int a[20][20];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        d[i] = i;
    }

    int ans = 2147483647;

    do {
        bool ok = true;
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[d[i]][d[i + 1]] == 0) {
                ok = false;
            }
            else {
                sum += a[d[i]][d[i + 1]];
            }
        }
        if (ok && a[d[n - 1]][d[0]] != 0) {
            sum += a[d[n - 1]][d[0]];
            if (ans > sum) ans = sum;
        }
    } while (next_permutation(d.begin() + 1, d.end()));

    printf("%d\n", ans);
    return 0;
}
*/
