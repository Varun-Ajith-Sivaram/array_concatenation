#include<stdio.h>

void read_array(int x,int[x]);
void disp_array(int x,int[x]);
void concat_array(int x,int y,int[x],int[y],int[x+y]);

int i,j,m,n;

void main()
{
    printf("\tConcatenation of Linear Array\n");
    
    printf("\n Enter the size of Array1: ");
    scanf(" %d",&m);
    
    int a[m];
    
    printf("\n   Enter the elements of Array1: \n");
    read_array(m,a);
    
    printf("\n   Array1: ");
    disp_array(m,a);
    
    printf("\n Enter the size of Array2: ");
    scanf("%d",&n);
    
    int b[n];
    
    printf("\n   Enter the elements of Array2: \n");
    read_array(n,b);
    
    printf("\n   Array2: ");
    disp_array(n,b);
    
    int l = m+n;
    int c[l];
    
    concat_array(m,n,a,b,c);
    
    printf("\n   Concatenated Array: ");
    disp_array(l,c);
}

void read_array(int x,int arr[x])
{
    for(i=0;i<x;i++)
    {
        printf("\t");
        scanf("%d",&arr[i]);
    }
}

void disp_array(int x,int arr[x])
{
    for(i=0;i<x;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void concat_array(int x,int y,int arr1[x],int arr2[y],int arr3[x+y])
{
    for(i=0,j=0;i<x;i++,j++)
    {
        arr3[j] = arr1[i];
    }
    
    for(i=0;i<y;i++,j++)
    {
        arr3[j] = arr2[i];
    }
}
