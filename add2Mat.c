/* Write a program to add 2 matrics each of order 3*3 *
int main()
{
  int array1[3][3], array2[3][3], resultArray[3][3], i, j;
  printf("\nEnter the 1st matrics:");
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
      scanf("%d", &array1[i][j]);
  }
  printf("\nEnter 2nd matrix:\n");
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
      scanf("%d", &array2[i][j]);
  }
  //adding the two arrays

  for (i = 0; i <= 2; i++)
    for (j = 0; j <= 2; j++)
    {
      resultArray[i][j] = array1[i][j] + array2[i][j];
    }
  //printing the resultant mat.
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
      printf("%d  ", resultArray[i][j]);
    printf("\n");
  }
}
*/

/* multiplication of two matrics */
int main()
{
  int array1[3][3], array2[3][3], resultArray[3][3], i, j;
  printf("\nEnter the 1st matrics:");
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
      scanf("%d", &array1[i][j]);
  }
  printf("\nEnter 2nd matrix:\n");
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
      scanf("%d", &array2[i][j]);
  }
  //adding the two arrays

  for (i = 0; i <= 2; i++)
    for (j = 0; j <= 2; j++)
    {
      resultArray[i][j] = array1[i][j] * array2[i][j];
    }
  //printing the resultant mat.
  for (i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
      printf("%d  ", resultArray[i][j]);
    printf("\n");
  }
}