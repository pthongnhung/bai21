#include<stdio.h>

int main(){
	int string[100];
    printf("moi ban nhap chuoi moi de them vao tep: ");
    fgets(string, sizeof(string),stdin);
    FILE *fptr;
	fptr=fopen("bt01.txt","a");
	if(fptr=NULL){
		printf("loi khong the mo tep de ghi\n");
		return 1; 
	}
	fputs(fptr,string);
	fclose(fptr);
	printf("da them thanh cong chuoi moi vao tep\n");
return  0;
}

