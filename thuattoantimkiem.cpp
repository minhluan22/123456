#include <stdio.h> 
  
int timkiem(int a[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (a[i] == x) 
            return i; 
    return -1; 
}
void hoandoi(int &xp,int &yp)
{	
	int temp=xp;
	xp=yp;
	yp=temp;
}
void sapxep(int  a[],int n)
{
	int i,j, min;
	for (int i=0;i<n-1;i++)
	{		
		min=i;
		for (int j=i+1;j<n;j++)
		if (a[j]<a[min])	
		min=j;
		hoandoi(a[min],a[i]);
	}
}
void insapxep(int a[],int size)
{
	int i;
	for (int i=0; i<size;i++)
		printf("  %d  ",a[i]);
	printf("\n ");    
}
int main()
{ 
    int a[] = {15 ,2 , 32 , 52, 4, 17,20,10,36,41}; 
    int x = 10; 
    int n = sizeof(a) / sizeof(a[0]); 
    int kq = timkiem(a, n, x);
    sapxep(a,  n);
	printf("\nPhan tu duoc sap xep la : ");
	insapxep(a,  n);
	(kq == -1) ? 
	printf("Phan tu khong co trong mang"):
          printf("\nPhan tu la: %d", kq);
    return 0;
}
