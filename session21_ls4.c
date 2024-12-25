#include<stdio.h>

int main(){
    char sentence01[] ="line 1\n";
    char sentence02[] ="line 2\n";
    char sentence03[] ="line 3\n";
    char readsentence[100]={0};
    FILE *fptr;
	fptr=fopen("bt01.txt","w");
	if(fptr==NULL){
		printf("loi khong the mo file de ghi");
		return 1; 
	}
	fputs(sentence01,fptr);
	fputs(sentence02,fptr);
	fputs(sentence03,fptr);
	fclose(fptr);
	printf("da ghi thanh cong vao file\n");
	fptr=fopen("bt01.txt","r");
	if(fptr==NULL){
		printf("loi khong the mo file de ghi\n");
		return 1; 
	}
	fgets(readsentence,sizeof(readsentence),fptr);
	printf("dong 1: %s\n",readsentence);
	fclose(fptr);
	
return  0;
}

