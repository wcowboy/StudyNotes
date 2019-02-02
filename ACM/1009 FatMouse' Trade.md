### 1009 FatMouse' Trade

![](https://wcowboy-1258563652.cos.ap-chengdu.myqcloud.com/img/1009%20FatMouse'%20Trade.png)

#### code:

```c
#include<stdio.h>
#include<stdlib.h>
#define maxsize 10000

struct table {
	int J;
	int F;
	double value;
} food[maxsize];		 //食物数量，需要的猫粮

int cmp(const void *a, const void *b) {
	struct table *aa = (table *)a;
	struct table *bb = (table *)b;
	return ((aa->value < bb->value) ? 1 : -1);
}
int main() {
	int M, N, i;
	double sum = 0;
	while ((scanf("%d%d", &M, &N) != EOF)){
		if (M == -1)
			break;
									//循环输入数据
		for (i = 0; i < N; i++) {
			scanf("%d%d", &food[i].J, &food[i].F);
			food[i].value = (double)food[i].J / (double)food[i].F;
		}
									//数据排序
		qsort(food, N, sizeof(food[0]), cmp);

		sum = i = 0;				
        			//特殊情况：FatMouse 没有猫粮，此时可兑换的仓库为需要猫粮为0的
		if (M == 0) {
			for (i = 0; i < N; i++)
				sum += food[i].F == 0 ? food[i].J : 0;
			printf("%.3f\n", sum);
			continue;			//跳出本次循环
		}

		while (M && i < N) {	//猫粮还有，且还有未兑换的仓库
			if (M > food[i].F) {	//剩余猫粮大于仓库所需，全部兑换
				M -= food[i].F;
				sum += food[i].J;
			}
			else {				//猫粮不足，等比兑换
				sum += (double)M / food[i].F * food[i].J;
				M = 0;
			}
			i++;
		}
		printf("%.3f\n", sum);
	}
}

```

背包问题，考虑特殊情况

