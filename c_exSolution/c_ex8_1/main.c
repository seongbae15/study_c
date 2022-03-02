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

	printf("������ ���ϸ��� �Է��ϼ���: ");
	fgets(filename, MAX_FILENAME, stdin);
	filename[strlen(filename) - 1] = '\0';
	file = fopen(filename, "wt");
	if (!file)
	{
		printf("������ ���� ���߽��ϴ�.\n");
		return -1;
	}
	printf("������ �Է��ϼ���.: ");
	fgets(title, MAX_TEXT, stdin);
	printf("������ �Է��ϼ���.: ");
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