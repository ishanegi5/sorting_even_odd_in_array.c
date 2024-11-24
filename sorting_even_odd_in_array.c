#include<stdio.h>
int main()
{  int i,j,arr[]={325,7685,464,986532,463,425,78,3876,245,7684};
   for(i=0;i<10;i++)
   { if(arr[i]%2==0)
     {
       printf("%d ",arr[i]);
     }
    if(i==9)
    { for(j=0;j<=9;j++)
    {
       if(arr[j]%2==0)
     {
       continue;
     }
     if(arr[j]%2!=0)
     {
        printf("%d ",arr[j]);
     }
     
    }

    }
   }
    printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
    return 0;
}
