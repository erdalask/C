//12.5
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sid1,sid2;
	int gr;
	char lgrade;
    FILE *fp,*fp1,*fp2;
    fp=fopen("result.txt","w");
	fp1=fopen("grade.txt","r");
    fp2=fopen("letter.txt","r");
      
	if(fp1!=NULL&&fp2!=NULL){//Eðer dosya acildiysa
	while(!feof(fp1)){
    	fscanf(fp1,"%d %d",&sid1,&gr);
    	fscanf(fp2,"%d %c",&sid2,&lgrade);
    	if(sid1==sid2){
    		fprintf(fp,"%d %d %c\n",sid1,gr,lgrade);
    		printf("%d %d %c\n",sid1,gr,lgrade);
		}
    	
    }
}//end of if
	 fclose(fp);
	 fclose(fp1);
	 fclose(fp2);
	 return 0;
	 
}
