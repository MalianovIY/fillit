#include <stdio.h>

int main()
{
	int i, a[40];
	a[0] = (0xCC);
	a[1] = (0xF0);
	a[2] = (0x88);
	a[3] = (0x6C);
	a[4] = (0x8C);
	a[5] = (0xC6);
	a[6] = (0x4C);
	a[7] = (0xE8);
	a[8] = (0xC4);
	a[9] = (0x2E);
	a[10] = (0x88);
	a[11] = (0xE2);
	a[12] = (0x44);
	a[13] = (0x8E);
	a[14] = (0xC8);
	a[15] = (0xE4);
	a[16] = (0x4C);
	a[17] = (0x4E);
	a[18] = (0x8C);
	a[19] = 0;
	i = -1;
	while(++i < 20)
		printf("%o\t", a[i]);
	printf("\n");
	a[0] = (0x00);
	a[1] = (0x00);
	a[2] = (0x88);
	a[3] = (0x00);
	a[4] = (0x40);
	a[5] = (0x00);
	a[6] = (0x80);
	a[7] = (0x00);
	a[8] = (0x40);
	a[9] = (0x00);
	a[10] = (0xC0);
	a[11] = (0x00);
	a[12] = (0xC0);
	a[13] = (0x00);
	a[14] = (0x80);
	a[15] = (0x00);
	a[16] = (0x40);
	a[17] = (0x00);
	a[18] = (0x80);
	a[19] = 0;
	i = -1;
	while(++i < 20)
		printf("%o\t", a[i]);
}