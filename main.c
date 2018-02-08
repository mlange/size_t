#include <stdio.h>
#include <stdlib.h>

size_t foo(long length)
{
    return length;
}

int main(int argc, char *argv[])
{
    foo(1);
    foo((long) 1);
    foo((size_t) 1);
    foo(sizeof(long));

    exit(0);
}
