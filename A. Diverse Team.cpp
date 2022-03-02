
#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;


int n, o;
int temp[105];
bool vis[105];
int s[105];

int main() {
	scanf("%d %d", &n, &o);
	int k = o;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &temp[i]);
	}
	for (int i = 1;i <= n;++i) {
		if (k == 0) {
			break;
		}
		if (vis[temp[i]] == false) {
			s[k] = i;
			vis[temp[i]] = true;
			k--;
		}
	}
	if (k == 0) {
		printf("YES\n");
		for (int i = 1;i <= o;++i) {
			printf("%d ", s[i]);
		}
	}
	else {
		printf("NO\n");
	}
	return 0;
}
