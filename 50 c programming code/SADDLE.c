 #include <stdio.h>
  #define ROW 100
  #define COL 100

  int main() 
  {
        int i, j, k, n, min, max, matrix[ROW][COL], pos[2][2];
        printf("Enter the order of the matrix:");
        scanf("%d", &n);
        printf("Enter your entries for the input matrix:\n");
        for (i = 0; i < n; i++) 
		{
                for (j = 0; j < n; j++) 
				{
                        scanf("%d", &matrix[i][j]);
                }
        }
        for (i = 0; i < n; i++) 
		{
                min = matrix[i][0];
                for (j = 0; j < n; j++) 
				{
                        if (min >= matrix[i][j]) 
						{
                                min = matrix[i][j];
                                pos[0][0] = i;
                                pos[0][1] = j;
                        }
                }

                j = pos[0][1];
                max = matrix[0][j];
                for (k = 0; k < n; k++)
				 {
                        if (max <= matrix[k][j])
						 {
                                max = matrix[i][j];
                                pos[1][0] = k;
                                pos[1][1] = j;
                        }
                }

                
                if (min == max)
				 {
                        if (pos[0][0] == pos[1][0] &&
                                pos[0][1] == pos[1][1])
								 {
                                printf("Saddle point (%d, %d) : %d\n",
                                                pos[0][0], pos[0][1], max);
                        }
                }
        }
        return 0;
  }

