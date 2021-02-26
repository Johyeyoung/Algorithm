/*
===============================================================
                    10972�� - ���� ����
===============================================================
�ð����⵵: O(N)
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (next_permutation(a.begin(),a.end())) {
        for (int i=0; i<n; i++) {
            cout << a[i] << ' ';
        }
    } else {
        cout << "-1";
    }
    cout << '\n';
    return 0;
}







/*
===============================================================
                    10972�� - ���� ����
===============================================================
�ð����⵵: O(N)
next_permutation - ���� ���� 
*/

bool next_permutation(vector<int> &a, int n) {
    // 1) �������� �����ϴ� ������ ��������- i ã�� (������ �����̹Ƿ� ���������� ���ۺκ�): O(N)
	int i = n-1;
    while (i > 0 && a[i-1] >= a[i]) {
        i -= 1;
    }
    if (i <= 0) { // ��� ���Ұ� �� ���������̶�°� ���� ������ ������ ���̻� ����
        return false;
    }

	// 2) j ã��: O(N)
    int j = n-1;
    while (a[j] <= a[i-1]) {
        j -= 1;
    }

	// 3) i-1, j ��ȯ: O(1)
    swap(a[i-1], a[j]); 

	// 4) i~n ���� ������- ���������ǵ���: O(N)
	j = n-1;
    while (i < j) { 
        swap(a[i], a[j]);
        i += 1; 
        j -= 1;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (next_permutation(a,n)) {
        for (int i=0; i<n; i++) {
            cout << a[i] << ' ';
        }
    } else {
        cout << "-1";
    }
    cout << '\n';
    return 0;
}




/*
===============================================================
                    10974�� - ��� ����
===============================================================
���� �ð����⵵: O(N x N!) - ������ ����(N!)��ŭ ���� ��������(N)�� �ؾߵż�
*/






