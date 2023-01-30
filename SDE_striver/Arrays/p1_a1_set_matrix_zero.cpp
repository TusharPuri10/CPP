#include <iostream>
using namespace std;

// approach is not correct because code is getting too complex
int main()
{
    int row,col;
    cin>>row>>col;
    int** arr = new int*[row];
    for(int i=0;i<row;i++)
    {
        *(arr+i) = new int[col];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == 0)
            {
                cout<<"hellworld"<<endl;
                int check_flag=0;
                int x=0,y=0;
                start:
                int flag_row=0;
                int flag_col=0;
                    if(check_flag==1)
                    {
                        x=j+1;
                        y=i+1;
                    }
                for(int j1=x;j1<col;j1++)
                {
                    if(arr[i][j1]==0)
                        ++flag_row;
                }
                for(int i1=y;i1<row;i1++)
                {
                    if(arr[i1][j]==0)
                        ++flag_col;
                }
                if(flag_row==col || flag_col==row)
                    goto end;
                else if(check_flag==0)
                {
                    ++check_flag;
                    goto start;
                }
                if(flag_row==0)
                {
                    for(int j1=0;j1<col;j1++)
                    {
                        arr[i][j1]=0;
                    }
                }
                if(flag_col==0)
                {
                    for(int i1=0;i1<col;i1++)
                    {
                        arr[i1][j]=0;
                    }
                }
                end: {}
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<"\n";
    }
    //deallocating
    for(int i=0;i<row;i++)
    {
        delete[] (arr+i);
    }
    delete[] arr;
    return 0;
}