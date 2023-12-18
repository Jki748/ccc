#include <stdio.h>

int main()
{   
    int n, m, i, j, ss;
    ss = 0;
    scanf("%d%d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
            if ((arr[i][j] % 2 == 0) && (arr[i][j] >= 0)){
               
                ss += arr[i][j];
                
            }
            
    }
    
    for (int i = 0; i < n; i++,  putchar('\n')) 
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        
    }
    printf("%d ",ss);
    return 0;

    
}
