#### 1001  Sum Problem：

![](https://wcowboy-1258563652.cos.ap-chengdu.myqcloud.com/img/1001%20Sum%20Problem.png)

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

