/*
===============================================================
					   1759. ��ȣ �����
===============================================================
�ð� ���⵵)
���� ����(C): �� ���� L (������ ������ C����) -> O(2^C * L)
M �� 15�̹Ƿ� 15^15 �� 1048576 �����̹Ƿ� Brute force ��ͷ� ��� ������ �� check ʦ
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

go(int n, vector<char> &alpha, string password, int i) {
	// 1. Ż�� ����
	if (password.length() == n) {
		return;
	}


	// ��� - ���� ���� �ݿ�
	go(n, alpha, password+alpha[i], i+1);
	go(n, alpha, password, i+1);
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<char> a(m); // ���ڸ� ���
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	return 0;
}





//-----------------------------------------------------------------------------
// ����

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool check(string& password) {
    int ja = 0;
    int mo = 0;
    for (char x : password) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            mo += 1;
        }
        else {
            ja += 1;
        }
    }
    return ja >= 2 && mo >= 1;
}
void go(int n, vector<char>& alpha, string password, int i) {
    if (password.length() == n) {
        if (check(password)) {
            cout << password << '\n';
        }
        return;
    }
    if (i == alpha.size()) return;
    go(n, alpha, password + alpha[i], i + 1);
    go(n, alpha, password, i + 1);
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<char> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    go(n, a, "", 0);

    return 0;
}