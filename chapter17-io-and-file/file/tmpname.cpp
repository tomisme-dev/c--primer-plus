#include <cstdio>
#include <iostream>
#include <cstdio>


int main()
{
    int fd;
    char tmpnae[] = "template-XXXXXX";
    fd = mkstemp(tmpnae);
    printf("template = %s\n", tmpnae);
    // close(fd);
}