long long sum(int* a, int n)
{
	long long ans = 0;
	for (int k = 0; k < n; k++)
		ans += a[k];
	return ans;
}