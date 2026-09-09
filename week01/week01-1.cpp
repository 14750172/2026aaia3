// week01-1.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int N; /// 整數 N
	scanf("%d", &N); /// C語言， 毒入整數N
	int b = N, ans=0;? ///將 N 的質備份b、答案0開始湊
	while(N>0){ /// 只要 N還在， 就繼續「剝皮」
		ans = ans*10 + N%10; ///答案 *10 + 皮皮
		N = N / 10; /// N 被剝皮
	}
	printf("%d+%d=%d\n", b, ans, b+ans);
}
