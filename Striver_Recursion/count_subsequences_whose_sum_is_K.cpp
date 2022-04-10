#include <bits/stdc++.h>

using namespace std;

int printS(int index, int s, int sum, int arr[], int n)
{
    //condition not satisfied
    //strictly done if array contains positives only
    if(s>sum) return 0;
    if (index == n)
    {
        //condition satisfied
        if (s == sum)
        {
            return 1;
        }
        //condition not satisfied
        else
            return 0;
        
    }

    // pick condition
    s += arr[index];
    int l= printS(index + 1, s, sum, arr, n);

    s -= arr[index]; 
   

    // not pick condition

    int r=printS(index + 1, s, sum, arr, n);

     return l + r;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    
    cout<<printS(0, 0, sum, arr, n);

    return 0;
}
