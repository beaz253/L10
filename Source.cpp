#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	int accamulator = 0;
	int mass[15] = { 6,8,3,9,1,0,3,6,8,2,4,8,0,5456,657 };
	for  (int i = 0; i < 15; i++)
	
	{ 
		accamulator = accamulator + mass[i];

	}
	float x = accamulator / 15;
	printf("%d\n", accamulator / 15);
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}