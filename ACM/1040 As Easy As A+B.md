### 1040 As Easy As A+B：

![](https://wcowboy-1258563652.cos.ap-chengdu.myqcloud.com/img/1040%20As%20Easy%20As%20A%2BB.png)

#### code:

```c
#include<stdio.h>
int main() {
    int t, n, i, j, a[1009];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for(i = 0;i < n;i ++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            for (j = 0; j < i; j++) {
                if (a[i] < a[j]) {
                    a[i] = a[i] + a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                }
            }
        for (i = 0; i < n -1; i++)
            printf("%d ", a[i]);
        printf("%d\n",a[n - 1]);
        
    }
}
```

