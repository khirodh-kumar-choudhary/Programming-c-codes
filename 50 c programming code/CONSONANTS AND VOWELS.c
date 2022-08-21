#include <stdio.h>
int main()
{
 char ch;
 printf("Enter your key : ");
 scanf("%c", &ch);
 if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
 {
 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
 {
 printf("This is Vowel Alphabet");
 }
 else
 {
 printf("This is Consonant Alphabet");
 }
 }
 else if (ch >= '0' && ch <= '9')
 {
 printf("This is Digit number");
 }
 else
 {
 printf("This is Special character");
 }
 return 0;
}
