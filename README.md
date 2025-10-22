# Домашняя работа к лабораторной работе №7
## Условие задачи
Составить программу, которая для заданного числа от 1 до 12 выводит его отображение римскими числами.
## 1. Алгоритм и блок-схема
### Алгоритм
1. Объявляем переменную для ввода пользовательского значения:
   - ```n```
2. Записываем пользовательское значение:
   - ```scanf("%d", &n);```
3. Проверяем значение на соответствие с помощью оператора ```switch```:
   - ```switch (n)```
   - ```case 1: printf("%d = I\n", n);```
4. Если соответствия не будет найдено, передаем управление ```default```:
   - ```default: printf("Значение %d не соответствует диапазону от 1 до 12\n", n);```
### Блок-схема
<img width="338" height="1242" alt="homework-lab-7" src="https://github.com/user-attachments/assets/4d610bcf-d10e-4254-92ce-e3119b1e01d1" />

## 2. Реализация программы
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	system("chcp 1251");
	int n;
	scanf("%d", &n);
	switch (n) {
	case 1: printf("%d = I\n", n);
		break;
	case 2: printf("%d = II\n", n);
		break;
	case 3: printf("%d = III\n", n);
		break;
	case 4: printf("%d = IV\n", n);
		break;
	case 5: printf("%d = V\n", n);
		break;
	case 6: printf("%d = VI\n", n);
		break;
	case 7: printf("%d = VII\n", n);
		break;
	case 8: printf("%d = VIII\n", n);
		break;
	case 9: printf("%d = IX\n", n);
		break;
	case 10: printf("%d = X\n", n);
		break;
	case 11: printf("%d = XI\n", n);
		break;
	case 12: printf("%d = XII\n", n);
		break;
	default: printf("Значение %d не соответствует диапазону от 1 до 12\n", n);
	}
}
```
## 3. Результат работы
```
5
5 = V
```
## 4. Информация о разработчике
Зеленев Илья, бТИИ-251
