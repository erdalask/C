//12.6-Append ile ekleme yapilabilir
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	FILE *fp1,*fp2;
    fp1=fopen("num1.txt","a");
    fp2=fopen("num2.txt","r");
      
	if(fp2!=NULL){//Eðer dosya acildiysa
	while(!feof(fp2)){
    	fscanf(fp2,"%d",&num);
    	fprintf(fp1,"%d\n",num);
    }
}//end of if
	 fclose(fp1);
	 fclose(fp2);
	 return 0;
	 
}
