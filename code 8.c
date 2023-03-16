int array[5];
int sum = 0;
printf("Enter array\n");
for (int i=0;i<5;i++)
{
    scanf("%d" ,&array[i]);
}
for(int j=0;j<5;j++)
{
    sum+=array[j];
}
    printf("average of element =%d" ,sum/5);
    
}
