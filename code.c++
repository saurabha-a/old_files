#include <cstdio>
#include <cstdlib>

int main(int argc,char *argv[])
{
    printf("this is the new dawn\n");
    printf("%d\n",argc);
    int t=atoi(argv[1]);
    if (t==5) printf("good job\n");
    else printf("bad job\n");
    return 0;
}
