1001  Sum Problem

![](https://github.com/wcowboy/Photos/blob/master/ACM/1001Sum%20Problem.png?raw=true)

#### code:

```c
#include<stdio.h>
int main() {
	int  i, n,sum;
	while (scanf("%d", &n) == 1) {
		for (sum = i = 0; i <= n; i++)
			sum += i;
		printf("%d\n\n", sum);
	}
	return 0;
}
```

因为可能输入字符，scanf() != EOF的话sum还是原来的值会导致错误，因此用scanf("%d", &n) == 1，当输入为%d格式，scanf()返回1。
