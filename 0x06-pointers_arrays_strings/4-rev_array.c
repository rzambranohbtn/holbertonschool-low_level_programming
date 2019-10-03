/**
 *reverse_array - array in reverse
 *@a: array
 *@n: length
 */
void reverse_array(int *a, int n)
{
	int medio;
	int tmp;
	int x;

	if ( n % 2 == 0 )
	{
		medio = n / 2;
	}
	else
	{
		medio = (n / 2) + 1;
	}
	n--;

	for(x=0; x<medio;x++)
	{
		tmp=a[x];
		a[x]=a[n-x];
		a[n-x]=tmp;
	}
}
