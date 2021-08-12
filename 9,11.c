#include<stdlib.h>
#include<stdio.h>

int mean(int [],int);
void fillOverMeanArray(int [],int [],int,int*, int);
int main()
{
	
	int N,i, userValue, newSize;
	do
	{
		printf("Enter the number of integer (1-30):");
		scanf("%d",&N);	
	}while(N<1 || N>30);
	
	int array[N], overMeanArray[N];
	
	printf("Enter %d integers:",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&userValue);
		array[i]=userValue;
	}
	
	int meanValue=mean(array,N);
	printf("Mean is %d\n",meanValue );
	
	fillOverMeanArray(array,overMeanArray,N,&newSize,meanValue );
	printf("New array is:");
	
	
	for(i=0;i<newSize;i++)
	{
		printf(" %d",overMeanArray[i]);
	}
	printf("\n");
	
}

int mean(int arr[],int size)
{
	int total=0, i;
	for(i=0;i<size;i++)
	{
		total+=arr[i];
	}
	
	return total/size;
}

void fillOverMeanArray(int arr[],int arr2[],int size,int *p, int mean)
{
	int i;//, j=0;

	for(i=0;i<size;i++)
	{
		if(arr[i]>mean)
		{
			arr2[*p]=arr[i];
			(*p)++;
		}
	}
//	*p=j;

}



