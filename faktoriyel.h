/* faktoriyel.h
n! sayisini gönderir.
*/

int faktoriyel(int n){
	int i, f;
	
	for(f=1, i=2; i<=n; i++)
	{
		f *= i;
	}
	return f;
}