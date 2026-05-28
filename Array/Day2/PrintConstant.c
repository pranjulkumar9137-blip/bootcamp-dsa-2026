#include<stdio.h>
int main()
{
    char string[30];
    printf("Enter your string: ");
    scanf("%s",&string);
    int constant=0,i=0,vowel=0;
    while(string[i]!='\0')
    {
        if(string[i]=='a'||string[i]=='i'||string[i]=='e'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
        {
           vowel++;
        }
        else{
            constant++;
        }
        i++;
    }
    printf("\n%d constant are available in given string",constant);
    printf("\n%d vowels are available in given string",vowel);
}