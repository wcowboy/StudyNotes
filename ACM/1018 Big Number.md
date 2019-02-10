### 杭电 1018 Big Number



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

