
#include <stdio.h>
void main()
{
	int N, a, b, c, d, e, f, y, x;//N is used to store the number of boxes needed, y is used to store 2*2 spaces x is used to store 1*1 slots.
	int u[4]={0, 5, 3, 1}; //The array u indicates that the number of products of 3*3 is a multiple of 4, the multiple of 4 is +1, the multiple of 4 is +2, and the multiple of 4 is the remaining 2*2 vacancies in the new box opened by the product of 3*3. Number of
	while(1){
		scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0) break;
		N = f + e + d + (c + 3) / 4;//Here's a little trick - (c+3)/4 is exactly equal to c divided by 4 rounded up results, the same below
		y = 5 * d + u[c % 4];
		if(b > y)
			N += (b - y + 8 ) / 9;
		x = 36 * N - 36 * f - 25 * e - 16 * d - 9 * c - 4 * b;
		if(a > x)
			N += ( a - x + 35 ) / 36;
		printf("%d\n", N);
	}
}
