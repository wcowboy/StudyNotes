#### 1032 The 3n + 1 problem：

![](https://wcowboy-1258563652.cos.ap-chengdu.myqcloud.com/img/1032%20The%203n%20%2B%201%20problem.jpg)

#### code:

```c
#include<stdio.h>
int times(int n)
{
	int ret = 1;
	while (n != 1) {
		ret++;
		n = n & 0x01 ? n = (n << 1) + n + 1 : n >>= 1;
	}
	return ret;
}
int main() {
	int a, b,max = 0;
	while (scanf("%d%d", &a, &b) != EOF) {
		max = times(a);
		for (int i = a < b ? a + 1:b + 1; i <= (a < b ? b : a); i++)
			max = times(i) > max ? times(i) : max;
		printf("%d %d %d\n", a, b, max);
	}
	return 0;
}
```

