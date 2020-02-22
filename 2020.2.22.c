#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)


/*2.实现函数tolowercase(),该函数接收一个字符串参数str,并将该字符串中的大写字母转换成小写字母之后返回新的字符串。*/
int tolowercase(char* arr, int m)
{
	for (int j = 0; j < m; j++)
	{
		if (arr[j]<97)
			arr[j] = arr[j]+ 32;
		else
			arr[j] = arr[j];
	}
	return arr;

}

int main()
{
	char arr[] = "afargGAERGagf";
	int m=strlen(arr);
	printf("%s",tolowercase(arr, m));
	system("pause");
	return 0;
}



//
///*1.给定一个数组，将数组中的元素想右移K个单位，k为非负数。*/
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k;
//	printf("向右转移几个元素->");
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++){
//		for (int j = 0; j < 9 ; j++)
//		{
//			int temp;
//			temp = a[j];
//			a[j] = a[j + 1];
//			a[j + 1] = temp;
//		}
//	}
//	for (int n = 0; n < 10; n++)
//	{
//		printf("%d", a[n]);
//	}
//	system("pause");
//	return 0;
//}