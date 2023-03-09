#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int n=3;
    int a[n][n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                scanf("%d",&a[i][j][k]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                printf("%d",a[i][j][k]);
            }printf("\n");
        }
        printf("\n");
    }
 
 return 0;
}
