#include <stdio.h>

long long cycle(long long n){
    long long cnt = 1;
    while(n != 1){
        if(n % 2)
            n = 3 * n + 1;
        else
            n /= 2;
        cnt++;
    }
    return cnt;
}

int main(){
    int i, j;
    while(scanf("%d %d", &i, &j) == 2){
        int a = i;
        int b = j;
        if(a > b){
            int t = a;
            a = b;
            b = t;
        }
        long long ans = 0;
        for(int k = a; k <= b; k++){
            long long len = cycle(k);
            if(len > ans)
                ans = len;
        }
        printf("%d %d %lld\n", i, j, ans);
    }
}