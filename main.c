#include <stdio.h>
#include <stdlib.h>
int n=10;
int arr[10];
int i,j;

void insertSort()
{
    for(i=1;i<n;i++)
    {
        int hold=arr[i];
        j=i;
        while(hold<arr[j-1])
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=hold;

    }
}
void display()
{
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}
int main()
{
    printf("\nEnter Values in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("///// DISPLAY ///// \n");
    display();
    insertSort();
    printf("\n Insertion Sort \n");
    display();


}
