#include <stdio.h>  
#include <math.h>  

int my_binary_atoi(char *str)
{
	int result = 0;
	int lenght = strlen(str);

	if (lenght > 8)
	{
		printf("Error! Strlengt > 8 bit!\n");
		return -1;
	}

	for (int i = 0; i < lenght; ++i)
	{
		if (str[i] == '1')
		{
			result = result + (int)pow((int)2, (int)7 - (int)i);
		}
	}
	return result;
}

int main(void)
{
	char * pbin = "01001001";   //������ ��� ��������������
	int Num = 0;                //���������� ��� ������ ����������

								
	Num = my_binary_atoi(pbin); //�������������� ������ � ����� ���� int
	
	//����� ���������� ��������������
	printf("%d\n", Num);

	//���������� ������ ���������
	return 0;
}