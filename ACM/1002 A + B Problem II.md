1002 A + B Problem II

![](https://raw.githubusercontent.com/wcowboy/Photos/master/ACM/1002%20A%20%2B%20B%20Problem%20II.png?token=Ae6XbwhZpkFRJvzK2Y77nIbDOV6OfKHzks5cTHbkwA%3D%3D)

#### code:

```c
#include<stdio.h>
#include<string.h>
int main() {
	static char a[1009] = { "\0" }, b[1009] = { "\0" }, c[1009];
	int n = 2, len1, len2, temp, min = 0, max = 0;
	int i,j = 1,k = 1;
	scanf("%d", &n);
	while(n --){
		len1 = len2 = temp = 0;
		scanf("%s%s", a, b);
		len1 = strlen(a);
		len2 = strlen(b);
		min = len1 < len2 ? len1 : len2;
		max = len1 > len2 ? len1 : len2;
		strcpy(c, len1 > len2 ? a : b);
		for (i = min - 1,j = max - 1; i >= 0 ; i--,j--) {
			if(len1 < len2)
				c[j] = a[i] + b[j] - '0' ;
			else
				c[j] = a[j] + b[i] - '0' ;
		}
		for (i = strlen(c); i > 0; i--)
			if ((c[i] - '0') > 9) {
				c[i] -= 10;
				c[i - 1] ++;
			}
		printf("Case %d:\n", k++);
		printf("%s + %s = ", a, b);
		for(i = 0;i < strlen(c);i++)
			printf("%d", c[i] - '0');
		printf("\n");
		if(n > 0)
			printf("\n");
	}
}

```

