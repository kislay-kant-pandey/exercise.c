#include<stdio.h>
int main()
{
// data_type array_name[no_of_2d_array] [no_of_row] [no_of_column];
//
    int a, b, c;
    printf("enter elements of matrix :\t");
    scanf("%d%d%d", &a, &b, &c);
    int num[a][b][c]; // = { { {0, 1, 2}, {3, 4, 5}, {6, 7, 8},}, { {9, 10, 11}, {12, 13, 14}, {15, 16, 17} }, { {18, 19, 20}, {21, 22, 23}, {24, 25, 26} } };
    int f11, f12, f13, f21, f22, f23, f31, f32, f33;
    printf("enter elements values");
    
    for (int i=0; i<3; ++i)
    {
                
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
            
                scanf("%d", &num[i][j][k]);
                
            }
        }
        
    }
    
    for (int i=0; i<3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                printf("%d\t", num[i][j][k]);
            }
        }
        printf("\n");
    }
// print the values
    f11 = num[0][0][0] + num[1][0][0] + num[2][0][0];
    f12 = num[0][0][1] + num[1][0][1] + num[2][0][1];
    f13 = num[0][0][2] + num[1][0][2] + num[2][0][2];
    f21 = num[0][1][0] + num[1][1][0] + num[2][1][0];
    f22 = num[0][1][1] + num[1][1][1] + num[2][1][1];
    f23 = num[0][1][2] + num[1][1][2] + num[2][1][2];
    f31 = num[0][2][0] + num[1][2][0] + num[2][2][0];
    f32 = num[0][2][1] + num[1][2][1] + num[2][2][1];
    f33 = num[0][2][2] + num[1][2][2] + num[2][2][2];

    printf("%d\t%d\t%d", f11, f12, f13);
    printf("\n%d\t%d\t%d", f21,f22, f23);
    printf("\n%d\t%d\t%d", f31, f32, f33);

    /*for(int )
    f11 = num[0][b][c] + num[1][b][c] +num[2][b][c];
    }*/
    return 0;
}