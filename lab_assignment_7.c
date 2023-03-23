
#include <stdio.h>

// bubblesort function
void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        // counter set to 0 to account for iteration passes
        int swaps = 0;

        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // for each swap, increment
                swaps++;
            }
        }
        // prints passes , starting at 1 till 8, accounting for the count/per pass
        printf("pass #%d: %d\n", i + 1, swaps);
    }

}
int main(void)
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}

/*
output:
printf("Pass #1: 8");
printf("Pass #2: 4");
printf("Pass #3: 3");
printf("Pass #4: 2");
printf("Pass #5: 1");
printf("Pass #6: 1");
printf("Pass #7: 0");
printf("Pass #8: 0");
*/