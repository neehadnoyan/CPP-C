#include <stdio.h>
#include <string.h>

int main() 
{
    int n, t;
    scanf("%d %d", &n, &t);
    char s[n];
    scanf("%s", s);
    for (int i = 0; i < t; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G') 
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                j++;
            }
        }
    }
    printf("%s", s);
    return 0;
}