template<typename T>
T extgcd(T a,T b,T&x,T&y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	T q=a/b;
	T g=extgcd(b,a-q*b,y,x);
	y-=q*x;
	return g;
}