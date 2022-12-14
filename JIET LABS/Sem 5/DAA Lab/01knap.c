//0 1 Knapsack Problem
#include <stdio.h>
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int knapSack(int W, int wt[], int val[], int n)//the maximum value that can be put in a knapsack of capacity W
{
    int i, w;
    int K[n + 1][W + 1];
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++) 
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]],K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 60, 70 };
    int W = 50;
    printf("%d", knapSack(W, wt, val, 3));
    return 0;
}
