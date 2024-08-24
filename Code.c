#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
    int a[8],i,p,n,m,q;
    char ans[5];
    char Y[5]="YES";
    char y[5]="yes";
    printf("The 8 inputs for the digits 0-9 are:\n");
    printf("0:00000011\n1:10011111\n2:00100101\n3:00001101\n4:10011001\n5:01001001\n6:01000001\n7:00011111\n8:00000001\n9:00001001\n");
    printf("For decimal point replace the last digit with 0 in the input\n");
    do
    {
    printf("Enter the 8 inputs\n");
    for(i=0;i<8;++i)
    {
        scanf("%d",&a[i]);
          if(a[i]!=0 && a[i]!=1)
            {
            printf("Invalid input.Enter input in binary(1 or 0)\n");
         }
        else
        {
         printf("Valid input\n");
        }
     }
        }while((a[0]!=0 && a[0]!=1) || (a[1]!=0 && a[1]!=1) || (a[2]!=0 && a[2]!=1) || (a[3]!=0 && a[3]!=1) || (a[4]!=0 && a[4]!=1) || (a[5]!=0 && a[5]!=1) || (a[6]!=0 && a[6]!=1) || (a[7]!=0 && a[7]!=1));
    printf("The 7 segment LED display is as follows\n");
    if(a[0]==0)
    printf(" _\n");
    else
    printf("   \n");
    if(a[5]==0)
    printf("|");
    else
    printf(" ");
    if(a[6]==0)
    printf("_");
    else
    printf(" ");
    if(a[1]==0)
    printf("|\n");
    else
    printf(" \n");
    if(a[4]==0)
    printf("|");
    else
    printf(" ");
    if(a[3]==0)
    printf("_");
    else
    printf(" ");
    if(a[2]==0)
    printf("|");
    else
    printf(" ");
    if(a[7]==0)
    printf(".\n");
    else
    printf(" \n");
    printf("Type YES to know the hexcode for the above displaced digit\n");
    scanf("%s",ans);
    p=strcmp(ans,Y);
    q=strcmp(ans,y);
    if(p==0 || q==0)
    {
        m=(pow(2,3)*a[0])+(pow(2,2)*a[1])+(pow(2,1)*a[2])+(pow(2,0)*a[3]);
        n=(pow(2,3)*a[4])+(pow(2,2)*a[5])+(pow(2,1)*a[6])+(pow(2,0)*a[7]);
        printf("The hex code for the above displayed digit is %x%x",m,n);
    }
    else
    {
        printf("Hex code is not displayed\n");
    }
}
