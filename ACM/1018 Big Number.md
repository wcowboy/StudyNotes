### 杭电 1018 Big Number

N的位数为 $\lg{N} + 1 ​$，所以n!位数为:
$$
lg  ~{(n*(n-1)*(n - 2)*(\cdots) * 1)} + 1 = lg~n+lg~(n - 1)+\cdots+lg~1+1
$$

因此迭代一下就能解决问题

![](https://wcowboy-1258563652.cos.ap-chengdu.myqcloud.com/img/1018%20Big%20Number.png)

N的位数为



#### code:

```c
#include<stdio.h>
#include<math.h>
int main() {
	int n, m;
	double numberOfDigits;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		numberOfDigits = 0;
		for (int i = 1; i <= m; i++)
			numberOfDigits += log10((double)i);
		printf("%d\n", (int)(numberOfDigits + 1));
	}
}
```

