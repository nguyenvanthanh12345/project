
int tong (int mang[], int d)
{
	int tong=0;
	for (int i=0;i<d;i++)
	{
		tong= tong +mang[i]; 
	}
	return tong;
}
int lonnhat(int mang[], int d)
{
	int lon=0;
	for (int i=0;i < d; i++)
	{
		if(lon<mang[i])
		{
			lon=mang[i];
		}
	}
	return lon;
}
int nhonhat(int mang[], int d)
{
	int nho=0;
	for (int i=0;i<18; i++)
	{
		if(nho>mang[i])
		{
			nho=mang[i];
		}
	}
	return nho;
}
void vitri(int a[], int n, int d)
{
    for (int u = 0; u < d ; u++)
    {
        if(a[u] == n)
        {
            printf ("vi tri: %d" ,u);
        }
	}
    printf("\n");
}