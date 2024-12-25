#include<stdio.h>
int main(){
   char string[100];
   printf("moi ban nhap chuoi ki tu: ");
   fgets(string, sizeof(string), stdin);
   FILE *fptr;
   fptr= fopen("bt01.txt","w");
   if(fptr == NULL){
    	printf("loi khong the mo tep\n");
    	return 1; 
   }
    fprintf(fptr, "%s", string );
    fclose(fptr);
    printf("da ghi chuoi vao tep bt01.tex");
return  0;
}

