#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE* fp;
	int i = 0;
	char str[30];

	fp = fopen("sample.txt", "w");
	
	while (i < 3) {
		printf("input a word : ");
		scanf("%s", str);
		fprintf(fp, "%s\n", str);
		i++;
	}

	fclose(fp);
	
	return 0;
}
