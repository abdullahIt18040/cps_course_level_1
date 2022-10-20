
#include<cstdio>
int main(){
	int n, a, b;
	while (scanf("%d%d%d", &n, &a, &b) == 3){
		int ans = 1;
	//	int mask = (n - 1) << 1;
		while (true){
			a++, b++;
			a >>= 1, b >>= 1;
			if (a == b)
				break;
			else
				ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
