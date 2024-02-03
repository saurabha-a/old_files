#include <stdio.h>

int main()
{
    int c;
    fscanf(stdin,"%d",&c);
    fprintf(stdin,"this is done %d", c);
    char f[11];
    fgets(f,10,stdin);
    f[10]='\0';
    printf("%s",&f[0]);
    return 0;
}
