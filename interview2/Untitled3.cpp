#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int num = 0;
    int n;
    char str[100];
    int a[100];
    printf("input the number:");
    scanf("%d",&num); //����
    printf("\ninput times:");
    scanf("%d",&n); //����
    itoa(num, str, 10); //ת��Ϊ�ַ���
    int flag=0; //�Ƿ��ǵ�������
    int i; 
    int length=strlen(str); //����
    int x=length-n;
    while(length!=x){
        flag=0; //����
        for(i=0;i<length-1;i++){
           if(str[i]>str[i+1]) //�Ⱥ�һ������ ɾ�� 
           {
                for(int temp=i;temp<length-1;temp++)
                {
                    str[temp]=str[temp+1]; //����
                } 
                length--;
                flag=1; //�ǵ���   
           } 
        }      
        if(flag==0){
            length--;//��������  ɾ�����һ��   
        }                        
    }
     
    int tempFlag=0;
   
    for(int i=0;i<length;i++){
        if(tempFlag==1)
            tempFlag=0;
        else
            printf("%c",str[i]);
    }
  
}
