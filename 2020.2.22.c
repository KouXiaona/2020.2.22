#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)


/*2.ʵ�ֺ���tolowercase(),�ú�������һ���ַ�������str,�������ַ����еĴ�д��ĸת����Сд��ĸ֮�󷵻��µ��ַ�����*/
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
///*1.����һ�����飬�������е�Ԫ��������K����λ��kΪ�Ǹ�����*/
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k;
//	printf("����ת�Ƽ���Ԫ��->");
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