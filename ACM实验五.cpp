/*2084
#include<iostream>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int C, N, i, j;
	int f[100][100];
	cin >> C;
	while (C--) {
		cin >> N;
		for (i = 0;i < N;i++)
			for (j = 0;j <= i;j++)
				cin >> f[i][j];

		for(i=N-2;i>=0;i--)
			for (j = 0;j <= i;j++)
			{
				f[i][j] = f[i][j] + max(f[i + 1][j], f[i + 1][j + 1]);
			}
		cout << f[0][0] << endl;
	}
	return 0;
}
*/
/*�����Ƚϼ򵥣����Թ�����û�г����������⣬���Թ�����Ψһ������һ����С�������������������ѭ��ʱ
��ÿһ���ж��ٸ����ķ�ΧŪ���ˣ�Ӧ���������������ȣ�����Ҫע���������ĸ�ʽ�������˻���*/


/*1159*/

#include<iostream>
#include<string>
using namespace std;

int max(int x, int y) {
	return x > y ? x : y;
}

int main() {
	int c[11][11];
	int i, j;
	string a, b;
	while (cin >> a >> b) {
		for (i = 0; i <= a.length(); i++) 
			for (j = 0; j <= b.length(); j++) {
				if (i != 0 && j != 0)
				{
					if (a[i - 1] == b[j - 1])
						c[i][j] = c[i - 1][j - 1] + 1;
					else
						c[i][j] = max(c[i - 1][j], c[i][j - 1]);
				}
				else
					c[i][j] = 0;

			}
		
		cout << c[a.length()][b.length()] << endl;
	}
	return 0;
}

