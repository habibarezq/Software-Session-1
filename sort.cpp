#include <iostream>
int main() {
    int a[6];
    int i,pass;
    int temp; //to swap values in case 1st greater than 2nd
    bool sorted=false;
    printf("Enter Elements of Array\n");
    for(i=0;i<6;i++)
        scanf("%d",&a[i]);
    printf("Array before Sorting: ");
    for(i=0;i<6;i++)
     printf("%d  ",a[i]);
     printf("\n");
    for(pass=1;pass<6 && !sorted;pass++)
    {
        sorted=true;
        for(i=0;i<6-pass;i++)
        {
            if(a[i]>=a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                sorted = false;
            }
        }
    }
    printf("Array After Sorting: ");
   for(i=0;i<6;i++)
   printf("%d  ",a[i]);
printf("\nDone\n");
    return 0;
}
