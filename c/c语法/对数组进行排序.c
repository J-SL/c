 #include<stdio.h>
int max(int a[],int len)
{
	int maxid=0;
	for(int i=1;i<len;i++)
	{
		if(a[i]>a[maxid])
		{
			maxid=i;
		}
	}
	return maxid;
}
int main()
{
	int a[]={1,8,4,2,5};
	int len=sizeof(a)/sizeof(a[0]);
	for(int i=len-1;i>0;i--)
	{
	int maxid=max(a,i+1);
	//swap a[maxid] ,a[len-1]
	int t=a[maxid];、 
	a[maxid]=a[i];
	a[i]=t;                            //交换变量要引入一个中间变量，否则无法交换成功。 
	}
	
	for(int i=0;i<len;i++){
		printf("%d",a[i]);
	}
return 0;
}
