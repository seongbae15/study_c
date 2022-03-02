#include <stdio.h>
#include <string.h>

#define MAX_FILENAME 256
#define MAX_TEXT 1024

int main()
{
	char filename[MAX_FILENAME];
	char title[MAX_TEXT];
	char body[MAX_TEXT];
	FILE* file;

	printf("저장할 파일명을 입력하세요: ");
	fgets(filename, MAX_FILENAME, stdin);
	filename[strlen(filename) - 1] = '\0';
	file = fopen(filename, "wt");
	if (!file)
	{
		printf("파일을 열지 못했습니다.\n");
		return -1;
	}
	printf("제목을 입력하세요.: ");
	fgets(title, MAX_TEXT, stdin);
	printf("내용을 입력하세요.: ");
	fgets(body, MAX_TEXT, stdin);
	fprintf(file, "<html>\n");
	fprintf(file, "<head>\n");
	fprintf(file, "<title>\n");
	fprintf(file, "%s\n", title);
	fprintf(file, "</title>\n");
	fprintf(file, "<body>\n");
	fprintf(file, "%s\n", body);
	fprintf(file, "</body>\n");
	fprintf(file, "</head>\n");
	fprintf(file, "</html>\n");
	fclose(file);
	return 0;

}