#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
for (int i = 0; i <= n; i++)
{
print_times_table_row(i, n);
}
}
}

/**
 * print_times_table_row - prints a single row of the times table
 * @i: the number to generate a times table row for
 * @n: the highest multiplier to use in the row
 */
void print_times_table_row(int i, int n)
{
for (int j = 0; j <= n; j++)
{
print_times_table_cell(i * j, j == 0);
}
_putchar('\n');
}

/**
 * print_times_table_cell - prints a single cell of the times table
 * @value: the value of the cell
 * @first_column: whether or not this is the first column of the row
 */
void print_times_table_cell(int value, bool first_column)
{
<<<<<<< HEAD
if (!first_column)
=======
_putchar(k + '0');
}
else if (k < 10 && j != 0)
>>>>>>> e09d2ce7310294eec360ccc243a19502080cd1c0
{
_putchar(',');
_putchar(' ');
}

if (value < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(value + '0');
} 
else if (value < 100)
{
_putchar(' ');
_putchar(' ');
<<<<<<< HEAD
_putchar((value / 10) + '0');
_putchar((value % 10) + '0');
} 
else 
=======
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else if (k >= 100)
>>>>>>> e09d2ce7310294eec360ccc243a19502080cd1c0
{
_putchar(' ');
_putchar((value / 100) + '0');
_putchar(((value / 10) % 10) + '0');
_putchar((value % 10) + '0');
}
}

