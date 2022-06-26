#include <stdio.h>
#include <Windows.h>

int main(void)
{
    HANDLE hFile;
    BOOL bFile;
    char chBuffer[] = "Reversing is sexy.";
    DWORD dwNoBytesToWrite = strlen(chBuffer);
    DWORD dwNoBytesWritten = 0;
    DWORD dwNoBytesToRead = strlen(chBuffer);
    DWORD dwNoBytesRead = 0;

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

    bFile = WriteFile(
        hFile,
        chBuffer,
        dwNoBytesToWrite,
        &dwNoBytesWritten,
        NULL
    );
    if (bFile == FALSE)
    {
        printf("WriteFile failed and error no %ul\n", GetLastError());
    }
    else
    {
        printf("WriteFile Success!");
    }

    bFile = ReadFile(
        hFile,
        chBuffer,
        dwNoBytesToRead,
        &dwNoBytesRead,
        NULL
    );
    if (bFile == FALSE)
    {
        printf("ReadFile failed and error no %ul\n", GetLastError());
    }
    else
    {
        printf("ReadFile Success!");
    }

    printf("data: %s\n", chBuffer);

    CloseHandle(hFile);
}