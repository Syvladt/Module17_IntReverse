#include <iostream>

void reverse(int* p_arr)
{
	for (int i = 0; i < 5; i++)
	{
		int* p_num1 = p_arr + i;
		int* p_num2 = p_arr + 9 - i;
		std::swap(*p_num1, *p_num2);
	}
}

int main()
{
	setlocale(LC_ALL, "RU_ru");
	int arr[] = { 0, 9, 8, 7, 6, 1, 2, 3, 4, 5 };
	reverse(arr);
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << ' ';
	}
}