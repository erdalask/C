#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LEN 8
int main() 
{
	printf("01234567");
	int total = 8;
	int i = 0, j = 0, k = 0, p = 0, q = 0, m = 0;
	
	char S[MAX_STRING_LEN];
	S[0]='d';
	S[1]='o';
	S[2]='g';
	
	char out[MAX_STRING_LEN];
	printf("\n");
	
for(;;)
{
		for (i = 0; i < 10; i++) 
		{
			sleep(1);
			
			for(j = 0; j<total; j++)
			{
				int address = (total - (j + 1)); // 8 - 1 = 7 
				int cnt = 0;
				for(p = 0; p < total; p++)
				{
					if(p < address)
					{
						out[p] = ' ';	
						cnt++;
					}
					else
					{
					    int rest = total - cnt; // 1, 2, 3, 4!! > -
							
						for(m = 0; m < rest; m++)
						{
							out[p] = S[m];	
							p++;
						}
					}
				}
				
					for(k = 0; k < total; k++)
					{
						printf("%c",out[k]);
					}
				printf("\n"); // new line  
			}
			
			printf("%c%c      \n",S[1],S[2]);
			printf("%c       \n",S[2]);
			  
		}
	printf("\n"); // new line  
}  
	return 0;
}
