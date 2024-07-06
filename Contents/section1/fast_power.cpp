// 快速冪
const int MOD = 1000000007;
int fp(int a, int b){
	int ans = 1;
	while(b>0){
		if(b&1) ans = ans*a%MOD;
		a = a*a%MOD;
		b>>=1;
	}
	.return ans;
}