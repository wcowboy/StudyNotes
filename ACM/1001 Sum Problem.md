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

