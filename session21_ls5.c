#include <stdio.h>

int main() {
    int num_lines;
    char line[100];
    FILE *fptr;

    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &num_lines);
    
    fptr = fopen("bt05.txt", "w");
    if (fptr == NULL) {
        printf("Loi khong the mo file de ghi\n");
        return 1;
    }

    getchar();
    for (int i = 0; i < num_lines; i++) {
        printf("Nhap dong thu %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fputs(line, fptr);
    }

    fclose(fptr);

    printf("Da ghi thanh cong vao file.\n");

    fptr = fopen("bt05.txt", "r");
    if (fptr == NULL) {
        printf("Loi khong the mo file de doc\n");
        return 1;
    }

    printf("Noi dung trong file bt05.txt:\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}
