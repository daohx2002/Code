#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int A[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &A[i]);
        }
        int max = -2147483647;
        int temp = 0;
        for(int i = 0; i < n - 1; i++){
            temp = A[i + 1] - A[i];
            if(temp > max)
                temp = max;
        }
        printf("%d\n", max);
    }
    return 0;
}