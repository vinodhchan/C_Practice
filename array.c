/*********************************************************************** */
/*****************ARRAY PROGRAMS**************************************** */
/*********************************************************************** */
#include<stdio.h>
#include <stdint.h>
void reverseIterative(int arr[], int n);
int display(int arr[],int size,int *arr1);
void reverserecurse(int arr[], int n);
void array_refernce(uint16_t *date_t,uint16_t* time_t);
void array_fun(uint16_t date_t[],uint16_t time_t[]);
void reversenew(int arr[],int size);
struct Array{
    uint16_t date[5];
    uint16_t time[5];
    uint32_t ptr1;
}arr_struct;

#if 0 //Array practice 1
int main()
{
    int arr[2]={1,2};

    printf("Address of arr[0]: %p\n", (void*)&arr[0]);
    printf("Address of arr[1]: %p\n", (void*)&arr[1]);
    printf("value of arr[0]: %d\n", arr[0]);
    printf("value of arr[1]: %d\n", arr[1]);

    int arr1[10];

    printf("%lu\n",sizeof(arr1));

    printf("%lu\n",sizeof(arr1[0]));

    printf("%lu\n",sizeof(arr1)/sizeof(arr1[0]));

    int arr2[5]={10,20,30,40,50};
    for(int i=5-1;i>=0;i--)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");

    printf("%p\n",arr2);

    printf("%p\n",&arr2[1]);
    printf("%d\n",(*arr2+1));
    printf("%d\n",*(arr2+2));
    printf("%d\n",*arr2+2);

     int arr3[5]={10,20,30,40,50};

    char *p= (char*)arr3;

    printf("%d\n",*p);
    printf("%p\n",p);

    p++;

    printf("%d\n",*p);
    printf("%p\n",p);

    p++;

    printf("%d\n",*p);
    printf("%p\n",p);
    int array[5]={10,20,30,40,50};
    int arr4[5];
    display(array,sizeof(array)/sizeof(array[0]),arr4);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr4[i]);
    }
    printf("\n");

    int arr5[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr5)/sizeof(arr5[0]);

    reverseIterative(arr5, n);

    printf("Iterative Reverse: ");
    for(int i = 0; i < n; i++) printf("%d ", arr5[i]);

    printf("\n");
    int arr6[] = {1, 2, 3, 4, 5};
    int x = sizeof(arr6)/sizeof(arr6[0]);

    reverserecurse(arr6, x);
    for(int i = 0; i < x; i++) printf("%d ", arr6[i]);
    printf("\n");

    uint16_t arr7[5], arr8[5];
    int y = sizeof(arr7)/sizeof(arr7[0]);
    array_refernce(arr7, arr8);
    for(int i = 0; i < y; i++) printf("%d ", arr7[i]);
    printf("\n");   
    for(int i = 0; i < y; i++) printf("%d ", arr8[i]);
    printf("\n");
    uint16_t arr9[5], arr10[5];
    int a = sizeof(arr9)/sizeof(arr9[0]);
    array_fun(arr9, arr10);
    for(int i = 0; i < a; i++) printf("%d ", arr9[i]);
    printf("\n");   
    for(int i = 0; i < a; i++) printf("%d ", arr10[i]);
    printf("\n");
    int arr11[5] = {1, 2, 3, 4, 5};
    int b = sizeof(arr11)/sizeof(arr11[0]);
    reversenew(arr11, b);
    for(int i = 0; i < b; i++) printf("%d ", arr11[i]);
    printf("\n");


}

void reversenew(int arr[],int size)
{
    int temp;
    for(int i=0;i<size/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i- 1] = temp;
    }
}

void array_fun(uint16_t date_t[],uint16_t time_t[])
{
    //get date from user 
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
    date_t[0] = arr_struct.date[0];
    date_t[1] = arr_struct.date[1];
    date_t[2] = arr_struct.date[2];
    date_t[3] = arr_struct.date[3];
    date_t[4] = arr_struct.date[4];
    time_t[0] = arr_struct.time[0];
    time_t[1] = arr_struct.time[1];
    time_t[2] = arr_struct.time[2];
    time_t[3] = arr_struct.time[3];
    time_t[4] = arr_struct.time[4];


}


void array_refernce(uint16_t *date_t,uint16_t* time_t)
{
    //get date from user 
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
    *date_t = arr_struct.date[0];
    *(date_t + 1) = arr_struct.date[1];
    *(date_t + 2) = arr_struct.date[2];
    *(date_t + 3) = arr_struct.date[3];
    *(date_t + 4) = arr_struct.date[4];
    *(time_t + 0) = arr_struct.time[0];
    *(time_t + 1) = arr_struct.time[1];
    *(time_t + 2) = arr_struct.time[2];
    *(time_t + 3) = arr_struct.time[3];
    *(time_t + 4) = arr_struct.time[4];


}


void reverserecurse(int arr[], int n) {
  if(n <= 1) return;
  int temp = arr[0];
  arr[0] = arr[n-1];
  arr[n-1] = temp;
  reverserecurse(arr + 1, n - 2);
}

void reverseIterative(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int display(int arr[],int size,int *arr1)
{
    // for(int i=0;i<size;i++)
    // {
    //     printf("%d\n",*(arr+i));
    //     *(arr1+i) = *(arr+i);
    // }
    int temp;
    for(int i=0;i < size/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    printf("Reversed array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<size;i++)
    {
        *(arr1+i) = *(arr+i);
    }
    return 0;
}
#endif
#if 0
int acceding_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                printf("swap\n");
            }
            printf("i=%d j=%d arr[%d]=%d\n",i,j,j,arr[i]);
        }
    }
    return 0;
}

int maximum(int arr[],int size)
{
    int max = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]> max)
        {
            max = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    return 0;
}

int reversearray(int arr[],int size)
{
    int temp;
    for (int i=0;i < size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    return 0;
}

int main()
{
    int arr[8]={1,5,9,3,6,8,7,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    // acceding_array(arr,size);
    // maximum(arr,size);
    reversearray(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    char arr1[] = "Hello";
    printf("\n size is %d \n",sizeof(arr1));
    char *p = "Hello";
    printf("\n size is %d \n",sizeof(p));
}
#endif
#if 0
// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int reversearr(int *arr,int size)
{
    int temp;
    for(int i=0;i<size/2;i++)
    {
        temp = *(arr+i);
        *(arr+i)=*(arr+(size-i-1));
        *(arr+(size-i-1))=temp;
    }
}

int sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum + arr[i];
    }
    printf("Array sum is =%d \n",sum);
}
int copyarr(int arr[],int size,int arr1[])
{
    for(int i=0;i<size;i++)
    {
        arr1[i] = arr[i];
    }
}

bool checkarequal(int arr[],int arr2[],int size)
{
    bool result = false;
    for(int i=0;i<size;i++)
    {
        if(arr[i] == arr2[i])
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }
    return result;
}

int linearsearch(int arr[],int findnum,int size)
{
    for(int i=0;i<size;i++)
    {
        if(findnum == arr[i])
        {
            return i;
        }
    }
    
    return 0;
}
int count_cal(int arr[],int size)
{
    int odd_count=0,even_count=0,zero_count=0,positive_count=0,negative_count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2 != 0)
        {
            odd_count++;
        }
        else
        {
            even_count++;
        }
    }
    printf("oddcount =%d , evencount =%d \n",odd_count,even_count);
    for(int i=0;i<size;i++)
    {
        if(arr[i] == 0)
        {
            zero_count++;
        }
    }
    printf("zerocount =%d \n",zero_count);
    for(int i=0;i<size;i++)
    {
        if(arr[i] >= 0)
        {
            positive_count++;
        }
        else
        {
            negative_count++;
        }
    }
    printf("positive_count =%d , negative_count =%d \n",positive_count,negative_count);
    
}

int main() {
   int arr[5]={3,4,5,6,1};
   int size =  sizeof(arr)/sizeof(arr[0]);
   int arr1[5];
   int arr2[5]={3,4,5,6,1};
   int arr3[9]={-3,3,0,2,-4,4,5,6,1};
   int size1 =  sizeof(arr3)/sizeof(arr3[0]);
   int resultvalu;
   resultvalu = linearsearch(arr,6,size);
   count_cal(arr3,size1);
   
   printf("Found number array index is =%d\n",resultvalu);
   
   if(checkarequal(arr,arr2,size))
   {
       printf("Both array are equal \n");
   }
   else
   {
       printf("both array are not equal \n");
   }
   reversearr(arr,size);
   sum(arr,size);
   copyarr(arr,size,arr1);
   printf("copied array is ::");
   for(int i=0;i<size;i++)
   {
       printf("%d ",arr1[i]);
   }
   printf("\nReverse array is ::");
   for(int i=0;i<size;i++)
   {
       printf("%d ",arr[i]);
   }

    return 0;
}
#endif

/*********************************** */
/*FIND A FREQUENCY OF AN ELEMENT*/
/*second largest element*/
/*Bubble Sort*/
/*Selection Sort*/
/*Insertion Sort*/
/*********************************** */
int second_largest(int arr[],int size)
{
    int largest = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }

    int second =-1;
    for(int i=0;i<size;i++)
    { 
    if(largest != arr[i])
    {
        if((second == -1) || (arr[i] > second))
        {
            second = arr[i];
        }
    }
   }
    printf("Second largest element is %d \n",second);
}

int bubble_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int selection_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min_index = i;
        
    }
}


int main()
{
    int arr[10]={1,2,3,4,5,6,2,1,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    int COUNT[10]={0};
    for(int i=0;i<size;i++)
    {
        COUNT[arr[i]]++;
    }

    for(int i=0;i<10;i++)
    {
        if(COUNT[i] != 0)
        {
            printf("Frequency of %d is %d \n",i,COUNT[i]);
        }
    }
    second_largest(arr,size);
}