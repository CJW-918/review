#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int SumDateEndOfMonth(int date_end_of_month[], int n)
{
	int sum_date = 0;
	for (int i = 0; i < n - 1; i++)
		sum_date += date_end_of_month[i];

	return sum_date;
}
int main(void)
{
	int year, month, day, how_many_date, date_end_of_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	scanf("%d%d%d", &year, &month, &day);
	
	if ((year % 4 == 0) & (year % 100 != 0))
		date_end_of_month[1] += 1;
	else if ((year % 4 == 0) & (year % 400 == 0))
		date_end_of_month[1] += 1;

	how_many_date = SumDateEndOfMonth(date_end_of_month, month) + day;
	printf("%d\n", how_many_date);

	return 0;
}