#include <iostream>
using namespace std;

void input(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }
}
void output(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << "\n";
    }
}
void multiply(int arr1[3][3], int arr2[3][3], int res[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            res[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                res[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }
}
void multiply_generic()
{
    int r1,c1,r2,c2;
    cout<<"array1:\n";
    cin>>r1>>c1;
    cout<<"array2:\n";
    cin>>r2>>c2;
    if(c1 != r2)
    {
        cout << "Multiplication not possible\n";
        return;
    }

    int arr1[100][100];
    cout << "Array1 input:\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin >> arr1[i][j];
        }
    }

    int arr2[100][100];
    cout << "Array2 input:\n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout <<" Result:\n";
    int res[100][100];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            res[i][j] = 0;
            for(int k=0;k<r2;k++)
            {
                res[i][j] += (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout << res[i][j] << ",";
        }
        cout << "\n";
    }
    
}
int main()
{
    // int a[3][3],b[3][3];
    // input(a);
    // input(b);
    // int c[3][3];
    // multiply(a,b,c);
    // output(c);

    multiply_generic();
    return 0;
}