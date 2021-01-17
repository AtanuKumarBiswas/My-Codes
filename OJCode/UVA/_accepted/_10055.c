// Hashmat the Brave	https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996
#include <stdio.h>

int main()
{
	int long long a,b;
	while(scanf("%lld%lld",&a,&b) != EOF){
		printf("%lld\n",(a<=b) ? (b - a): (a - b));
	}
	return 0;
}