#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MAX_FILENAME 256
#define BUFFER_SIZE 102400


int main()
{
	char srcfilename[MAX_FILENAME];
	FILE* srcfile;

	printf("���� ���ϸ��� �Է��ϼ���: ");
	fgets(srcfilename, MAX_FILENAME, stdin);
	srcfilename[strlen(srcfilename) - 1] = '\0';

	srcfile = fopen(srcfilename, "rt"); 
	if (!srcfile)
	{
		printf("���� ������ ���� ���߽��ϴ�.");
		return -1;
	}

	char cpyfilename[MAX_FILENAME];
	FILE* cpyfile;

	printf("���� ���ϸ��� �Է��ϼ���: ");
	fgets(cpyfilename, MAX_FILENAME, stdin);
	cpyfilename[strlen(cpyfilename) - 1] = '\0';
	cpyfile = fopen(cpyfilename, "wt");

	if (!srcfile)
	{
		printf("���� ������ ���� ���߽��ϴ�.");
		return -1;
	}

	char* buffer;
	int read;

	buffer = (char*)malloc(BUFFER_SIZE);
	do
	{
		read = fread(buffer, 1, BUFFER_SIZE, srcfile);
		fwrite(buffer, 1, read, cpyfile);
	} while (read == BUFFER_SIZE);

	printf("�ش� ������ ����Ǿ����ϴ�.");
	fclose(srcfile);
	fclose(cpyfile);
	free(buffer);
	return 0;
}