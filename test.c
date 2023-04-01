#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main() {
//	char arr[] = { 0 }; int i = 0; int temp=0;
//	printf("请输入想要排序的数字");
//	scanf("%d\n",arr[]);
//	for (i = 0; i < sizeof(arr)-1;i++) {
//		if (arr[i] < arr[i + 1]) {
//			temp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = temp;
//		}
//	}
//	printf("%d\n",arr[]);
//	return 0;
//}
// 辗转相除法
int main() {
	int x=24; int y=16; int r = 0;
	printf("请输入两个数\n");
	scanf(" % d % d\n", &x, &y);
	while (r=x % y){
		/*r = x % y;*/
		x = y;
		y = r;
	}
	printf("%d\n", y);
	return 0;
}

