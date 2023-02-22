void times_table(void)
{
	int row, col;
	int mult = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			mult = (row * col);
			if (mult < 10)
			{
				if (col != 0)
				{
					__putchar_(' ');
					__putchar_(' ');
				}
				__putchar_(mult + '0');
			}
			else
			{
				__putchar_(' ');
				__putchar_((mult / 10) + '0');
				__putchar_((mult % 10) + '0');
			}
			if (col != 9)
				__putchar_(',');
		}
		__putchar_('\n');
	}
}
