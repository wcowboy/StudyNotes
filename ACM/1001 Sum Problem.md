1001  Sum Problem

![](https://raw.githubusercontent.com/wcowboy/Photos/master/ACM/1000%20A%20%2B%20B%20Problem.png?token=Ae6Xb5rtrhkUGWJzbtbC3Q7wk8nxvhzlks5cTHYfwA%3D%3D)

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

