#include<stdio.h>
#include<string.h>
void find()
{
    char N[200];
    int s;
    int i=0,j;
    printf("input the number:");
    scanf("%s",N);
    printf("\ninput times:");
    scanf("%d",&s);
    while(s>0){
	    i=0;/*ÿ��ɾ������ͷ��ʼ*/
	    while(i<strlen(N) && N[i]<=N[i+1])
			i++;/*�㷨����*/
	    for(j=i;j<strlen(N);j++)
			N[j]=N[j+1];/*��λ��ɾ���ĸ���*/
	    s--;      
    }
    printf("%s",N);
 
}
 
int main()
{   
    find();
  
}
