#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define PI 3.1416
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i)
#define SWAP(x,y,T) do { T SWAP; SWAP = x; x = y; y = SWAP; } while (0)

int main()
{
    /* freopen("input","r",stdin); */
    /* freopen("output","w",stdout); */
    float i=0,j;
    int n = 3;
    
    while(i<=2.0){
        j = 1;
        while(--n){
            if(i==0)
                printf("I=%d J=%d\n",(int)i,(int)j);
            else
                printf("I=%.1f J=%.1f",i,j);
            ++j;
        }
        i += .2;
    }

    return 0;
}
