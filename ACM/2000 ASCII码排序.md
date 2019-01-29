

#### code:

```c
#include<stdio.h>
int main() {
	char a, b, c,d,max,mid,min;
	while (scanf("%c%c%c%c", &a, &b, &c,&d) != EOF) {
		max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
		mid = (a > b ? a : b) > c ? ((a < b ? a : b) > c ? (a < b ? a : b) : c) : (a > b ? a : b);
		min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
		printf("%c %c %c\n", min, mid, max);
	}
}
```

)

三目运算符真好用，输入四个字符可以通过但是三个不能，猜测应该是为了吞掉回车。