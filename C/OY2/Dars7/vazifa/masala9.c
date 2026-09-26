#include <stdio.h>

int main(){
    int n, m;
    printf("n va m: ");
    scanf("%d %d", &n, &m);

    int sonlar[n][m], yigindilar[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &sonlar[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        int qator=0;
        for(int j=0; j<m; j++){
            qator += sonlar[i][j];
        }

        yigindilar[i] = qator;
    }
    
    int jami=0;
    for (int i = 0; i < n; i++){
        printf("%d - qator yig'indisi: %d\n", i, yigindilar[i]);
        jami += yigindilar[i];
    }
    printf("Jami sonlar yig'indisi: %d", jami);
}