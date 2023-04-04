#include <stdio.h>
#include <stdlib.h>

int *mix(int list1[],int size1,int list2[],int size2)
{
    int result=(int)calloc(size1+size2,sizeof(int));
    int i,k,temp;
    for(i=0;i<5;i++)
    {
        result[i]=list1[i];
    }
    for(k=0;k<5;k++,i++)
    {
        result[i]=list2[k];
    }
     for(int i=0;i<10;i++)
    {
       for(int j=1;j<10;j++)
       {
            if(result[j]<result[j-1])
            {
                temp=result[j];
                result[j]=result[j-1];
                result[j-1]=temp;
            }
       }
    }
    return result;
}

int main()
{
    int list1[5]={2,4,6,8,10};
    int list2[5]={1,7,9,11,13};
    int *p,temp;
    p=mix(list1,5,list2,5);
    for(int j=0;j<10;j++)
       {
            printf("%d ",p[j]);
       }

    return 0;

}
