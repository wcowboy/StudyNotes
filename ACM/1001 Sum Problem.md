1001  Sum Problem

![](https://raw.githubusercontent.com/wcowboy/Photos/master/ACM/1001%20Sum%20Problem.png?token=Ae6Xb0uQXmIsKYHeQmgCHe5CjIol6SXzks5cTCS-wA%3D%3D)

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

