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
	char * pbin = "01001001";   //Строка для преобразования
	int Num = 0;                //Переменная для записи результата

								
	Num = my_binary_atoi(pbin); //Преобразование строки в число типа int
	
	//Вывод результата преобразования
	printf("%d\n", Num);

	//Завершение работы программы
	return 0;
}