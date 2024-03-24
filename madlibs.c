#include<stdio.h>
#include<stdio.h>

int main() {
    // input words
    char color[20];
    char pluralNoun[20];
    char celebrityfirstName[20]; 
    char  celebrityLastName[20];

    //print the lines
    printf("Enter the color: ");
    scanf("%s", color);
    printf("Enter the plural noun: ");
    scanf("%s",pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityfirstName, celebrityLastName);

    // print the poem
    printf("Rose are %s\n", color);
    printf("%s are blue\n",pluralNoun);
    printf("I love %s %s\n",celebrityfirstName, celebrityLastName);
    
    return 0;
}