void pyramid_border(int n)
{
    int i,j;
    char s ='*';
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i+1;j++)
            printf(" ");
        printf("%c",s);
        if(i>1)
        {
            for(j=0;j<2*i-3;j++)
                printf(" ");
            printf("%c",s);    
        }
        printf("\n");    
    }
    for(i=0;i<2*n+1;i++)
        printf("%c",s);
}
void square(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            printf("*");
        printf("\n");    
    }
}
void pyramid(int n)
{
    int i,q=0,k;
    while(n>0)
    {
        for (i = 1; i<n; i++)
            printf("%c", ' ');
        for (k = 0; k <= q; k ++)
            printf("%c", '*');
        for (k = 0; k < q; k ++)
            printf("%c", '*');
        n -- ;
        q ++ ;
        printf("\n");
    }
}
void triangle(int n)
{
    int i,k;
    for(int i = n; i >0; i--)
    {
        for(int k = 1;k<=i;k++)
        {
            printf("*");            
        }
        printf("\n");
    } 
}
void ChuNhatRong(int m, int n)
{
   for (int i = 1; i <= m; i++)
   {
      for (int j = 1; j <= n; j++)
         if (i == 1 || j == 1 || i == m || j == n)
            printf("* ");
         else
            printf("  ");
      printf("\n");
   }
}

void TamGiacVuongCanRong(int h)
{
   for (int i = 1; i <= h; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         if (j == 1 || j == i || i == h)
            printf("* ");
         else
            printf("  ");
      }
      printf("\n");
   }
}

void TamGiacCanRong(int h)
{
   int m = h, n = h;
   for (int i = 1; i <= h; i++)
   {
      for (int j = 1; j <= 2 * h - 1; j++)
      {
         if (j == m || j == n || i== h)
            printf("*");
         else
            printf(" ");
      }
      m--;
      n++;
      printf("\n");
   }
}
