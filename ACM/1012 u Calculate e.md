1012 u Calculate e

![](https://github.com/wcowboy/Photos/blob/master/ACM/1012%20u%20Calculate%20e.png?raw=true)

code:

```c
#include<stdio.h>
int factorial(int n) {
	if (n == 1 || n == 0)
		return 1;
	return factorial(n - 1) * n;
}

int main() {
	int n = 1;
	int i, j;
	double e = 0;
	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n1 2\n2 2.5\n");
	for (i = 3; i <= 9; i++) {
		e = 0;
		for (j = 0; j <= i; j++) {
			e += 1.0 / factorial(j);
		}
		printf("%d %.9f\n", i, e);
	}
}
```

注意一开始的三组数据格式，咳咳。暴力解决强行输出