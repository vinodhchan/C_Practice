
#include "stdio.h"
#include "string.h"

int main()
{
    int a = 10;
    int *p = &a;
    char *str= "vinodh";
    char *ptr="vinodh";
    printf("%s\n",str);
    printf("%d\n", *p);
    printf("Address of a: %p\n", (void*)&a);
    printf("Address stored in p: %s\n", ptr);

   int len=0;
    while(*ptr != '\0')
    {
        printf("%c\n", *ptr);
        printf("%p\n", ptr);
        ptr++;
        len++;
    }
    printf("Length of the string: %d\n", len);

    char str1[]="vinodh";
    printf("%s\n", str1);

    str1[0] = 'V';
    str1[5] = 'D';
    int len1=0;
    for(int i=0; str1[i] != '\0';i++)
    {
        printf("%c\n", str1[i]);
    }
    while(str[len1] != '\0')
    {
        len1++;
    }
    printf("Length of the string: %d\n", len1);

    int *ptr2 = &a;
   printf("address of ptr2: %p\n", (void*)&ptr2);
    printf("ptr2 (points to): %p\n", (void*)ptr2);
    printf("address of a: %p\n", (void*)&a);
    printf("*ptr2 (value pointed to): %d\n", *ptr2);

    // get the string
    // char str3[20];
    // scanf("%19s", str3);
    // printf("entered: %s\n", str3);

    char str4[20];
    printf("Enter a string: ");
    fgets(str4,sizeof(str4),stdin);
    printf("entered: %s\n", str4);  

    char str5[20];
    printf("Enter a string: ");
    fgets(str5,sizeof(str5),stdin);
    printf("entered: %s\n", str5);
    printf("Length of the string: %lu\n", strlen(str5));
    str5[strcspn(str5, "\n")] = '\0';

    char str6[20];
    strcpy(str6, str5);//des,source
    printf("str6: %s\n", str6);

    char str7[20];
    strncpy(str7,str5, 10);
    str7[10] = '\0'; // Null-terminate the string ->We dont know the src string length, so we need to null terminate the string 
    printf("str7: %s\n", str7);

    char str8[20]="good boy";
    strcat(str5 , str8);
    printf("str8: %s\n", str5);

      const char *text = "apple,banana;cherry:date";
    size_t pos = strcspn(text, "d");

    if (text[pos] != '\0') {
        printf("First delimiter '%c' found at index %zu\n", text[pos], pos);
    } else {
        printf("No delimiter found\n");
    }

    
    return 0;
}