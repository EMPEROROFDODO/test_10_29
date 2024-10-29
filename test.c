#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	double x = 0;
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	double sum = 1.0;
//	scanf("%d%d", &x, &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		double nx = 1.0;
//		nx *= x;
//		if (i == 1)
//			sum += x;
//		else
//			sum += (-1) * x;
//	}
//	printf("%d", sum);
//
//
//	return 0;
//}

//int main()
//{
//	float x = 0.0;
//	int n = 0;
//	int i = 0;
//	scanf("%f %d", &x, &n);
//	float ret = x;
//	float sum = 1+x;
//	if (n == 0)
//	{
//		sum = 1;
//	}
//	if(n>=2)
//	{
//		for (i = 2; i <= n; i++)
//		{
//				ret = ret * (-x) / i;
//				sum += ret;
//		}
//	}
//	printf("%f\n", sum); 
//
//	return 0;
//}
//

//void main()
//{
//	int n;
//	float x, s = 1.0, a = 1.0;
//	scanf("n=%d,x=%f", &n, &x);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		a = a * (-x) / i;
//		s = s + a;
//	}
//	printf("前n项和为：%f", s);
//}

//#include <stdio.h>
//
//int main() {
//    float x = 0.0;
//    int n = 0;
//    float sum = 0.0;
//    float term = 1.0; // 用于存储当前项的值
//
//    // 从键盘读取x和n的值
//    scanf("%f %d", &x, &n);
//
//    // 计算前n项和
//    for (int i = 0; i < n; i++) {
//        term = term * (-x) / (i + 1); // 计算当前项的值
//        sum += term; // 累加到总和中
//    }
//
//    // 输出结果
//    printf("%f\n", sum);
//
//    return 0;
//}


int main()
{
	int n = 0;
	int i = 0;
	int ret = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{

		ret += i;
		sum += ret;

	}
	printf("%d\n", sum);

	return 0;
}