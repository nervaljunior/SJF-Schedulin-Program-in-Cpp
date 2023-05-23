#include <bits/stdc++.h>
using namespace std;
//Matrix to store the values.
int matrix[20][6];
//Function to swap.
void swap(int *x, int *y)
{
    int var = *x;
    *x = *y;
    *y = var;
}
//Function to sort the processes by the time of arrival.
void sortbyarrival(int noofprocess, int matrix[][6])
{
    for( int i=0;i<noofprocess;i++)
    {
        for(int j=0;j<noofprocess-i-1;j++)
        {
            if(matrix[j][1]>matrix[j+1][1])
            {
                for(int k=0;k<5;k++)
                {
                swap(matrix[j][k],matrix[j+1][k]);
                }
            }
        }
    }
}
//Choosing the process with minimum burst time.
void timeofcompletion(int noofprocess, int matrix[][6])
{
    int var, ctr;
    matrix[0][3] = matrix[0][1] + matrix[0][2];
    matrix[0][5] = matrix[0][3] - matrix[0][1];
    matrix[0][4] = matrix[0][5] - matrix[0][2];
    for(int i=1;i<noofprocess;i++)
    {
        var=matrix[i-1][3];
        int lower=matrix[i][2];
        for(int j=i;j<noofprocess;j++)
        {
            if(var>= matrix[j][1]&&lower>=matrix[j][2])
            {
                lower=matrix[j][2];
                ctr=j;
            }
        }
        matrix[ctr][3] = var+matrix[ctr][2];
        matrix[ctr][5] = matrix[ctr][3] - matrix[ctr][1];
        matrix[ctr][4] = matrix[ctr][5] - matrix[ctr][2];
        for(int k=0;k<6;k++)
        {
            swap(matrix[ctr][k],matrix[i][k]);
        }
    }
}
//Driver function.
int main()
{
    int noofprocess=6;
    matrix[0][0]=1,matrix[0][1]=2,matrix[0][2]=3;
    matrix[1][0]=2,matrix[1][1]=0,matrix[1][2]=4;
    matrix[2][0]=3,matrix[2][1]=4,matrix[2][2]=2;
    matrix[3][0]=4,matrix[3][1]=5,matrix[3][2]=4;
    matrix[4][0]=5,matrix[4][1]=6,matrix[4][2]=6;
    matrix[5][0]=6,matrix[5][1]=7,matrix[5][2]=7;
    sortbyarrival(noofprocess, matrix);
    timeofcompletion(noofprocess, matrix);
    cout<<"Process ID  Arrival Time  Burst Time  Waiting Time  Turnaround Time"<<endl;
    for(int i=0; i<noofprocess; i++)
    {
        cout<<matrix[i][0]<<" "<<matrix[i][1]<<" "<<matrix[i][2]<<" "<<matrix[i][4]<<" "<<matrix[i][5]<<endl;
    }
}