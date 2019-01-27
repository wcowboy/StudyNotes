

#### code:

```c
#include<stdio.h>
#include<string.h>
int main() {
	char num[1000];
	long int sum = 0,i;
	while (scanf("%s", num) && num[0] != '0') {
		for (sum = i = 0; i < strlen(num);i ++) {
			sum += num[i] - '0';
		}
		printf("%d\n", sum % 9 > 0 ? sum % 9 % 9 : 9);
	}
	return 0;
}
```

