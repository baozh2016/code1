//#include<iostream>
//using namespace std;
//#include<string.h>
//#include<math.h>
//
//char* add1(char *a,char *b)
//{	
//	int c=0;
//	int i=strlen(a)-1;//i,j�ֱ��ʾ����һλ����a[9],b[x]
//	int j=strlen(b)-1;
//	int k;
//
//	int maxlenth=strlen(a)>=strlen(b)? strlen(a)+1:strlen(b)+1;
//	char *s=(char *)malloc(maxlenth+1);
//
//
//    k=strlen(b);//��λ�ϵ���ֵ��
//	s[maxlenth]='\0';/////���һλ��\0��
//
//	while((i>=0)&&(j>=0))
//	{
//		s[k]=(a[i]-'0'+b[j]-'0'+c)%10+'0';
//		c=(a[i]-'0'+b[j]-'0'+c)/10;///�ж��Ƿ��н�λ1��
//		--i;
//		--j;
//		--k;
//		
//	}
//	while(i>=0)
//	{
//		s[k]=(a[i]-'0'+c)%10+'0';
//		c=((a[i]-'0')+c)/10;
//		k--;
//		i--;
//	}
//	while(j>=0)
//	{
//		s[k]=(b[j]-'0'+c)%10+'0';
//		c=((b[j]-'0')+c)/10;
//		k--;
//		j--;
//	}
//
//	s[0]=c+'0';
//	if(s[0]!='0')
//		return s;
//	else 
//		return s+1;
//
//	
//}
//int main()
//{
//char a[]="1234356666";//��λ�ں���,,
//char b[]="2343333378";
//char *c=NULL;
//	c=add1(a,b);
//	cout<<c<<endl;
//
//	return 0;
//}