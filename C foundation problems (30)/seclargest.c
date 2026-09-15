#include <stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int n;
    
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter the element %d: ",i+1);
    scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int pos=0;
    for(int i=n-1;i>=0;i--)
    {
        if (arr[i]==arr[i-1])
        pos++;
        else
        break;
    }
    printf("The second largest element is %d.",arr[n-2-pos]);
}