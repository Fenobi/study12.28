#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to Kenobi computer!!!!!!!";
//	char arr2[] = "                                 ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//	}
//	printf("%s\n", arr1);
//	return;
//}

#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ���\n");
			break;
		}
		else
		{
			printf("��½ʧ�ܣ�����������\n");
		}
	}
	if (i == 3)
	{
		printf("�������ξ�������󣬵�½ʧ��\n");
	}
	return 0;
}