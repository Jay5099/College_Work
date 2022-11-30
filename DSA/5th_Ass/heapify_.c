#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArr(int Arr[], int S)
{
    int i;
    for (i = 0; i < S; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

void heapify(int Arr[], int s, int parent)
{
    if (parent > s - 1)
        return;

    int max;
    int left = parent * 2 + 1;
    int right = parent * 2 + 2;
    heapify(Arr, s, left);
    heapify(Arr, s, right);
    if (Arr[right] > Arr[left])
        max = right;
    else
        max = left;
    if (left <= s - 1)
    {
        if (right <= s - 1)
        {
            swap(&Arr[max], &Arr[parent]);
        }
        else
        {
            if (Arr[left] > Arr[parent])
            {
                swap(&Arr[left], &Arr[parent]);
            }
        }
    }
}

int main()
{
    int size = 5, i = 0, choice = 0, x = 0;
    int Arr[100];
    printf("Enter the size of Array : ");
    scanf("%d", &size);
    printf("Enter the Array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &Arr[i]);
    }
    i = 1;
    // Menu :
    while (i)
    {
        printf("1) Add an Element 2) Heapify 3) Delete 4) Sort 5) Display\n:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element : ");
            scanf("%d", &choice);
            Arr[size++] = choice;
            printf("%d successfully Added \n", choice);
            break;
        case 2:
            heapify(Arr, size, 0);
            printf("successfully heapified \n");
            break;
        case 3:
            if (size >= 1)
            {
                swap(&Arr[0], &Arr[size - 1]);
                size--;
                heapify(Arr, size, 0);
                printf("successfully Deleted %d \n", Arr[size]);
            }
            else
            {
                printf("No element exists to delete ! \n");
            }
            break;
        case 4:
            printf("Sorting will clear the Heap ! proceed ?(1/0) : ");
            scanf("%d", &choice);
            if (choice == 0)
                break;
            while (size >= 1)
            {
                swap(&Arr[0], &Arr[size - 1]);
                size--;
                heapify(Arr, size, 0);
                printf("%d ", Arr[size]);
            }
            printf("\n");
            break;
        case 5:
            printArr(Arr, size);
            break;
        }
    }
}