#include<stdio.h>
int timkiemtuyentinh(int a[],int n,int x)
{
	int i;
	for (i = 0; i < n; i++) 
	 	if (a[i]==x)
		return i;
	return -1;
}
int timkiemnhiphan(int a[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == x)
      return i;
  return -1;
}
int main()
{
	int a[]={-9,-9,-5,-2,0,3,7,7,10,15};
	int x=-9;
	int n=sizeof(a)/ sizeof(a[0]);
	int kq=timkiemtuyentinh(a,n,x);
		(kq==-1 )?
	printf("khong co phan tu nao ."):
	printf("\n Phan o vi tri so : %d ",kq);
	int kqq = timkiemnhiphan(a, n, x);
  if (kqq != -1) 
  {
    printf("\n%d xuat hien tai chi so %d", x,kqq);
  } else {
    printf("\n%d khong co trong mang", x);
  }
	return 0;
}

