#include <stdio.h>

int main()
{
    char a[1000];
 
    scanf("%999s", a);



    for (int i = 0; i < 999; i++){
        if (a[i] == '!'){
            a[i] = '.';
        }
    }
    printf("%s", a);
    
    return 0;
}
