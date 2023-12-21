#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fr;
    FILE *fw;
    char c[1000];
    int i = 0;
    fr = fopen("002.txt", "r");
    fw = fopen("001.txt", "w");
    while(!feof(fr)){
        if (fgets(c, 1000, fr) == NULL)
            break;
        if(i % 2 == 1){
            fgets(c, 1000, fr);
            fprintf(fw, "%s", c);
        }
    }
    fclose(fr);
    fclose(fw);
    printf("%s", "proga otradotala");
    return 0;
}
