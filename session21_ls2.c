#include<stdio.h>
int main(){
    char string[100];
    printf("moi ban nhap chuoi ki tu: ");
    fgets(string, sizeof(string), stdin);
    FILE *fptr;
	fptr=fopen("bt01.txt","w");
	if(fptr==NULL){
		printf("loi khong the mo tep\n");
		return 1; 
	}
	fputc(string[0],fptr);
	fclose(fptr);
	printf("ban da ghi chuoi vao tep\n");
	fptr=fopen("bt01.txt","r");
	if(fptr==NULL){
		printf("loi khong the mo tep\n");
		return 1; 
	}
	int c=fgetc(fptr);
	printf("ki tu dau tien trong file: %c\n",c);
	
return  0;
}

