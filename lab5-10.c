#include<stdio.h>

int main(void)
{

  int n, k;

  printf("Please write the size of array: ");
  scanf("%i", &n);

  int mas [n];

  for( int i = 0; i < n; i++)
   {
     printf("%i element is ", i);
     scanf("%i", &mas[i]);
   }

     printf("Show array vice versa from elem :  ");
     scanf("%i", &k);

    for(int i = 0; i < n; i++)
      {
        printf("%i ", mas[k]);

        if (k == 0)
        {
          k = n;
        }
      k--;
      }



  printf("\nSorting...\n");

  for(int i = 0 ;i < n ; i++)
  {
    for(int j= 0, a = 0; j < n - i - 1; j++)
    {
       if(mas[j] < mas[j+1])
        {
          a = mas[j];
          mas [j] = mas [j+1];
          mas [j+1]= a;
        }
      }
  }
  int nsize =  (n - n%2)/2;
  int new_mas[nsize];
  int t = 0;
printf ("Destroing elements with id 1 3 5...\n");
    for(int i = 1 ; i < n; i = i+2)
    {
        new_mas[t] = mas[i];
        t++;
    }

    printf ("New array is: ");
    for (int i = 0; i < nsize; i++)
    {
        printf ("%i ", new_mas[i]);
    }

printf("\nShow new array vice versa from elem :  ");
     scanf("%i", &k);

    for(int i = 0; i < nsize; i++)
      {
        printf("%i ", new_mas[k]);

        if (k == 0)
        {
          k = nsize;
       }
      k--;
      }

      printf("\n");

  return 0;
  }
