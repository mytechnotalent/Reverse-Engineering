#include <stdio.h>
#include <Windows.h>

int main(void)
{
	BOOL bFile;

	bFile = CopyFile(
		L"C:\\temp\\test1.txt",
		L"C:\\temp\\test2.txt",
		TRUE
	);
	if (bFile == FALSE)
	{
		printf("CopyFile failed & error no %ul\n", GetLastError());
	}
	else
	{
		printf("CopyFile Success!\n");
	}

	return 0;
}