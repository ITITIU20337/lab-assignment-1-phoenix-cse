/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
	 	int h=height;
	int b=border;
	int a[100][100];
	int i,j,flag;
	for (i = 1; i <= h; i++)
		for (j = 1; j <= h * 2 - 1; j++)
			a[i][j] = 1;

	for (i = 1; i < h; i++)
		for (j = 1; j <= h - i; j++)
			a[i][j] = 0;

	for (i = 1; i < h; i++)
		for (j = h + i; j <= h * 2 - 1; j++)
			a[i][j] = 0;
	 i = b + 1;
	a[i][h] = 0;
	 flag = 0;
	while (i <= h - b)
	{
		a[i][h] = 0;
		for (j = 1; j <= flag; j++) {
			a[i][h + j] = 0;
			a[i][h - j] = 0;
		}
		i += 1;
		flag += 1;
	}
	printf(" ");
	for (i = 1; i <= h; i++)
		for (j = 1; j <= h * b - 1; j++) {
			if (a[i][j] == 1)
				printf("* ");
			else
				printf("  ");
			if (j == h * b - 1 && i==h) {
				printf(" ");
			}
			else if (j == h * b - 1)
			{
				printf("\n");
				printf(" ");
			}
		}
	printf(" \n");
	return 0;
}