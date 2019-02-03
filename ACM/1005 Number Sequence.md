### 杭电1005 Number Sequence



#### code:

```c
#include <stdio.h>
int main()
{
	int a, b, n;
	int f[51], i, t;
	f[0] = f[1] = 1;
	while (scanf("%d%d%d", &a, &b, &n) != EOF && (a || b || n)) // (a || b || n)三者都为零时为假 
	{
		for (i = 2; i < 51; i++)    //先将49种情况计算出来 
			f[i] = (a*f[i - 1] + b * f[i - 2]) % 7;


		for (i = 0; i < 49; i++)      //找到循环节点的位置 
			if (f[49] == f[i] && f[50] == f[i + 1]){
				t = i;
				break;
			}
		printf("%d\n", f[n % 49 + t - 2]); 
	}
}

```

