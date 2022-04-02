#include <stdio.h>
#include <string.h>
void matrx()
{

    printf("|-----------------------------------------------------------|\n");
    printf("|choose the Operation would you like to perform:            |\n");
    printf("|-----------------------------------------------------------|\n");
    printf("|1)Addition='+'                2)Subtraction='-'            |\n");
    printf("|3)Multiplication='*'          4)Transpose='a'              |\n");
    printf("|5)Determinent='b'             6)Inverse='c'                |\n");
    printf("|7)Rank='d'                    8)Trivial and Non-Trivial='e'|\n");
    printf("|9)Cayley Hamilton='f'        10)Eigen Values and Vector='g'|\n");
    printf("|-----------------------------------------------------------|\n");
    printf("Enter Operation Symbol given above:\n");
    char opt;
    getchar();
    scanf("%c", &opt);

    if (opt == '+')
    {
        int arr1[50][50], brr1[50][50], crr1[50][50], r, c, i, j;

        printf("\n\nAddition of two Matrices :\n");
        printf("------------------------------\n");
        printf("Enter the number of row=");
        scanf("%d", &r);
        printf("Enter the number of column=");
        scanf("%d", &c);

        printf("Input elements in the first matrix :\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Input elements in the second matrix :\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &brr1[i][j]);
            }
        }
        printf("\nThe First matrix is :\n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", arr1[i][j]);
        }

        printf("\nThe Second matrix is :\n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", brr1[i][j]);
        }
        /* calculate the sum of the matrix */
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                crr1[i][j] = arr1[i][j] + brr1[i][j];
        printf("\nThe Addition of two matrix is : \n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", crr1[i][j]);
        }
        printf("\n\n");
    }

    else if (opt == '-')
    {
        int arr1[50][50], brr1[50][50], crr1[50][50], r, c, i, j, n;

        printf("\n\nSubtraction of two Matrices :\n");
        printf("------------------------------\n");
        printf("Enter the number of row=");
        scanf("%d", &r);
        getchar();
        printf("Enter the number of column=");
        scanf("%d", &c);
        getchar();

        printf("Enter elements in the first matrix :\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Enter elements in the second matrix :\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &brr1[i][j]);
            }
        }
        printf("\nThe First matrix is :\n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", arr1[i][j]);
        }

        printf("\nThe Second matrix is :\n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", brr1[i][j]);
        }
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                crr1[i][j] = arr1[i][j] - brr1[i][j];
        printf("\nThe Subtraction of two matrix is : \n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", crr1[i][j]);
        }
        printf("\n\n");
    }

    else if (opt == '*')
    {
        int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
        printf("Enter the number of row=");
        scanf("%d", &r);
        getchar();
        printf("Enter the number of column=");
        scanf("%d", &c);
        getchar();
        printf("Enter the first Matrix element=\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
                getchar();
            }
        }
        printf("Enter the second Matrix element=\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &b[i][j]);
                getchar();
            }
        }
        printf("\nThe First matrix is :\n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", a[i][j]);
        }

        printf("\nThe Second matrix is :\n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", b[i][j]);
        }

        printf("\nMultiply of the Matrix=\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < c; k++)
                {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        //for printing result
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else if (opt == 'a')
    {
        int a[10][10], r, c, i, j;
        printf("Enter the number of row=");
        scanf("%d", &r);
        getchar();
        printf("Enter the number of column=");
        scanf("%d", &c);
        getchar();
        printf("Enter the Matrix element=\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Matrix are=\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("Transpose of the matrix=\n");
        for (i = 0; i < c; i++)
        {
            for (j = 0; j < r; j++)
            {
                printf("%d\t", a[j][i]);
            }
            printf("\n");
        }
    }
    else if (opt == 'b')
    {
        int arr1[10][10], r, c, i, j, n;
        int det = 0;

        printf("\nCalculate the determinant of a  Matrix :\n");
        printf("-------------------------------------------------\n");
        printf("Enter the number of row=");
        scanf("%d", &r);
        getchar();
        printf("Enter the number of column=");
        scanf("%d", &c);
        getchar();
        printf("Input elements in the Matrix :\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("The matrix is :\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                printf("% 4d", arr1[i][j]);
            printf("\n");
        }

        for (i = 0; i < r; i++)
            det = det + (arr1[0][i] * (arr1[1][(i + 1) % r] * arr1[2][(i + 2) % r] - arr1[1][(i + 2) % r] * arr1[2][(i + 1) % r]));

        printf("\nThe Determinant of the matrix is|A|: %d\n\n", det);
    }
    else if (opt == 'c')
    {
        int a[10][10], r, c, i, j;
        float determinant = 0;
        printf("Enter the number of row=");
        scanf("%d", &r);
        getchar();
        printf("Enter the number of column=");
        scanf("%d", &c);
        getchar();
        printf("Enter the Matrix element=\n");
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                scanf("%d", &a[i][j]);

        printf("\nThe matrix is\n");
        for (i = 0; i < r; i++)
        {
            printf("\n");
            for (j = 0; j < c; j++)
                printf("%d\t", a[i][j]);
        }

        for (i = 0; i < 3; i++)
            determinant = determinant + (a[0][i] * (a[1][(i + 1) % r] * a[2][(i + 2) % r] - a[1][(i + 2) % r] * a[2][(i + 1) % r]));

        printf("\nInverse of matrix is: \n\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                printf("%.2f\t", ((a[(i + 1) % c][(j + 1) % c] * a[(i + 2) % c][(j + 2) % c]) - (a[(i + 1) % c][(j + 2) % c] * a[(i + 2) % 3][(j + 1) % c])) / determinant);
            printf("\n");
        }
    }
    else if (opt == 'd')
    {
        printf("Under Construction");
    }
    else if (opt == 'e')
    {
        int arr1[10][10], r, c, i, j, n;
        int det = 0;

        printf("\nCalculate the determinant of a  Matrix :\n");
        printf("-------------------------------------------------\n");
        printf("Enter the number of row=");
        scanf("%d", &r);
        getchar();
        printf("Enter the number of column=");
        scanf("%d", &c);
        getchar();
        printf("Input elements in the Matrix :\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("The matrix is :\n");
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                printf("% 4d", arr1[i][j]);
            printf("\n");
        }

        for (i = 0; i < r; i++)
            det = det + (arr1[0][i] * (arr1[1][(i + 1) % r] * arr1[2][(i + 2) % r] - arr1[1][(i + 2) % r] * arr1[2][(i + 1) % r]));

        printf("\nThe Determinant of the matrix is|A|: %d\n\n", det);

        if (det == 0)
        {
            printf("-------------------------------\n");
            printf("Matrix has Non-Trivial Solution\n");
            printf("-------------------------------\n");
        }
        else
        {
            printf("---------------------------\n");
            printf("Matrix has Trivial Solution\n");
            printf("---------------------------\n");
        }
    }
    else if (opt == 'f')
    {
        printf("Under Construction");
    }
    else if (opt == 'g')
    {
        printf("Under Construction");
    }
}

int main()
{
    int usrn, pass;
    printf("------------------------------------------------------------\n");
    printf("            Welcome to Matrix Calculator\n");
    printf("------------------------------------------------------------\n");
    FILE *ptr;
    ptr = fopen("numberthree.txt", "r");

    printf("Verify Your Authenticity\n");
    printf("Enter Username:");
    scanf("%d", &usrn);
    printf("Enter Password:");
    scanf("%d", &pass);
    if (usrn == 1234 && pass != 1234)
    {
        printf("Username Correct but Password Not Correct\n");
        printf("Please try again later\n");
    }
    else if (usrn != 1234 && pass == 1234)
    {
        printf("Password Correct but Username Not Correct\n");
        printf("Please try again later\n");
    }
    else if (usrn == 12345 && pass == 12345678)
        matrx();
    else
    {
        printf("Wrong Username and Password, Please try again later\n");
        printf("Forget Password:\n");
        printf("Enter your Favourite Charater:");
        int nwusrn, nwpass, strg = 0;
        char frg[15], i;
        getchar();
        scanf("%s", &frg);
        if (frg[i] == 'a' || frg[i] == 'A')
        {
            printf("Enter New Username:");
            getchar();
            scanf("%d", &nwusrn);
            printf("Enter New Password:");
            getchar();
            scanf("%d", &nwpass);
            printf("Enter Confirm Password:");
            getchar();
            scanf("%d", &nwpass);
            usrn = nwusrn;
            pass = nwpass;
            printf("|----------------------------------------------------------------------|\n");
            printf("|Congratulations you've Successfully changed your Username and Password|\n");
            printf("|----------------------------------------------------------------------|\n");
            printf("Enter Username:");
            scanf("%d", &usrn);
            printf("Enter Password:");
            scanf("%d", &pass);
            if (usrn == nwusrn && pass == nwpass)
                matrx();
        }
    }

    return 0;
}