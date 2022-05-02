#include <stdio.h>
#include <Windows.h>

int main(void)
{
    HANDLE hFile;

    hFile = CreateFile(
        L"C:\\temp\\test.txt",
        GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ,
        NULL,
        CREATE_NEW,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );
    if (hFile == INVALID_HANDLE_VALUE)
    {
        printf("CreateFile failed and error no %ul\n", GetLastError());
    }
    else
    {
        printf("CreateFile Success!");
    }

    CloseHandle(hFile);
}