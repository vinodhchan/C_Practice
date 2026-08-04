/*********************************************************************** */
/***************** ARRAY PROGRAMS **************************************** */
/*********************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void reverseIterative(int arr[], int n);
void reverserecurse(int arr[], int n);
int display(int arr[], int size, int *arr1);
void reversenew(int arr[], int size);
void array_reference(uint16_t *date_t, uint16_t *time_t);
void array_fun(uint16_t date_t[], uint16_t time_t[]);
int acceding_array(int arr[], int size);
int maximum(int arr[], int size);
int reversearray(int arr[], int size);
void reversearr(int *arr, int size);
int sum(int arr[], int size);
void copyarr(int arr[], int size, int arr1[]);
bool checkarequal(int arr[], int arr2[], int size);
int linearsearch(int arr[], int findnum, int size);
void count_cal(int arr[], int size);
void second_largest(int arr[], int size);
void bubble_sort(int arr[], int size);
void selection_sort(int arr[], int size);

struct Array {
    uint16_t date[5];
    uint16_t time[5];
    uint32_t ptr1;
} arr_struct;

void reversenew(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void array_fun(uint16_t date_t[], uint16_t time_t[])
{
    arr_struct.date[0] = 10;
    arr_struct.date[1] = 12;
    arr_struct.date[2] = 2023;
    arr_struct.date[3] = 11;
    arr_struct.date[4] = 30;

    arr_struct.time[0] = 10;
    arr_struct.time[1] = 12;
    arr_struct.time[2] = 2023;
    arr_struct.time[3] = 11;
    arr_struct.time[4] = 30;

    for (int i = 0; i < 5; i++) {
        date_t[i] = arr_struct.date[i];
        time_t[i] = arr_struct.time[i];
    }
}

void array_reference(uint16_t *date_t, uint16_t *time_t)
{
    arr_struct.date[0] = 10;
    arr_struct.date[1] = 12;
    arr_struct.date[2] = 2023;
    arr_struct.date[3] = 11;
    arr_struct.date[4] = 30;

    arr_struct.time[0] = 10;
    arr_struct.time[1] = 12;
    arr_struct.time[2] = 2023;
    arr_struct.time[3] = 11;
    arr_struct.time[4] = 30;

    for (int i = 0; i < 5; i++) {
        *(date_t + i) = arr_struct.date[i];
        *(time_t + i) = arr_struct.time[i];
    }
}

void reverserecurse(int arr[], int n)
{
    if (n <= 1) {
        return;
    }

    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;
    reverserecurse(arr + 1, n - 2);
}

void reverseIterative(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int display(int arr[], int size, int *arr1)
{
    for (int i = 0; i < size; i++) {
        arr1[i] = arr[i];
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int acceding_array(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}

int maximum(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    return 0;
}

int reversearray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    return 0;
}

void reversearr(int *arr, int size)
{
    for (int i = 0; i < size / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + (size - i - 1));
        *(arr + (size - i - 1)) = temp;
    }
}

int sum(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    printf("Array sum is = %d\n", total);
    return total;
}

void copyarr(int arr[], int size, int arr1[])
{
    for (int i = 0; i < size; i++) {
        arr1[i] = arr[i];
    }
}

bool checkarequal(int arr[], int arr2[], int size)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int linearsearch(int arr[], int findnum, int size)
{
    for (int i = 0; i < size; i++) {
        if (findnum == arr[i]) {
            return i;
        }
    }
    return -1;
}

void count_cal(int arr[], int size)
{
    int odd_count = 0, even_count = 0, zero_count = 0, positive_count = 0, negative_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            odd_count++;
        } else {
            even_count++;
        }

        if (arr[i] == 0) {
            zero_count++;
        }

        if (arr[i] >= 0) {
            positive_count++;
        } else {
            negative_count++;
        }
    }

    printf("oddcount = %d, evencount = %d\n", odd_count, even_count);
    printf("zerocount = %d\n", zero_count);
    printf("positive_count = %d, negative_count = %d\n", positive_count, negative_count);
}

void second_largest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    int second = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] != largest) {
            if (second == -1 || arr[i] > second) {
                second = arr[i];
            }
        }
    }

    printf("Second largest element is %d\n", second);
}

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(void)
{
    printf("Array practice flow\n");
    printf("===================\n");

    int basic[5] = {10, 20, 30, 40, 50};
    int size = sizeof(basic) / sizeof(basic[0]);

    printf("Basic array values:\n");
    display(basic, size, basic);
    printf("Address of basic[0]: %p\n", (void *)&basic[0]);
    printf("Size of array: %d\n", size);

    int reverse_demo[] = {1, 2, 3, 4, 5};
    size = sizeof(reverse_demo) / sizeof(reverse_demo[0]);

    reverseIterative(reverse_demo, size);
    printf("Iterative reverse: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reverse_demo[i]);
    }
    printf("\n");

    int recursive_demo[] = {1, 2, 3, 4, 5};
    size = sizeof(recursive_demo) / sizeof(recursive_demo[0]);
    reverserecurse(recursive_demo, size);
    printf("Recursive reverse: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", recursive_demo[i]);
    }
    printf("\n");

    int copied[5];
    display(recursive_demo, size, copied);
    printf("Copied values from display(): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", copied[i]);
    }
    printf("\n");

    uint16_t date[5], time[5];
    array_reference(date, time);
    printf("Date array from pointer reference: ");
    for (int i = 0; i < 5; i++) {
        printf("%u ", date[i]);
    }
    printf("\nTime array from pointer reference: ");
    for (int i = 0; i < 5; i++) {
        printf("%u ", time[i]);
    }
    printf("\n");

    uint16_t date_arr[5], time_arr[5];
    array_fun(date_arr, time_arr);
    printf("Date array from array function: ");
    for (int i = 0; i < 5; i++) {
        printf("%u ", date_arr[i]);
    }
    printf("\nTime array from array function: ");
    for (int i = 0; i < 5; i++) {
        printf("%u ", time_arr[i]);
    }
    printf("\n");

    int arr_ops[5] = {3, 4, 5, 6, 1};
    size = sizeof(arr_ops) / sizeof(arr_ops[0]);
    int copied_ops[5];
    copyarr(arr_ops, size, copied_ops);
    printf("Copied array values: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", copied_ops[i]);
    }
    printf("\n");

    printf("Array sum = %d\n", sum(arr_ops, size));

    int same_arr[5] = {3, 4, 5, 6, 1};
    printf("Are arrays equal? %s\n", checkarequal(arr_ops, same_arr, size) ? "true" : "false");
    printf("Found number index = %d\n", linearsearch(arr_ops, 6, size));

    int count_arr[] = {-3, 3, 0, 2, -4, 4, 5, 6, 1};
    size = sizeof(count_arr) / sizeof(count_arr[0]);
    count_cal(count_arr, size);

    int sort_arr[10] = {1, 2, 3, 4, 5, 6, 2, 1, 3, 5};
    size = sizeof(sort_arr) / sizeof(sort_arr[0]);

    bubble_sort(sort_arr, size);
    printf("Bubble sort result: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sort_arr[i]);
    }
    printf("\n");

    selection_sort(sort_arr, size);
    printf("Selection sort result: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sort_arr[i]);
    }
    printf("\n");

    second_largest(sort_arr, size);

    return 0;
}