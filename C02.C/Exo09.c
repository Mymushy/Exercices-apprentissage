#include <stdio.h>
#include <unistd.h> 
#include <ctype.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    
    if (str[i] >= 'a' && str[i] <= 'z')
    str[i] = str[i] - 32;

    while (str[i] != '\0') 
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0') && (str[i] <= '9')))
		{
			if (str[i+1] >= 'a' && str[i+1] <= 'z')
				str[i+1] = str[i+1] - 32;
		}
		else if (str[i+1] >= 'A' && str[i+1] <= 'Z')
			str[i+1] = str[i+1] + 32;
		++i;
	}
	return (str);
}

int main()
{
    char str[] = "       salut, 654621 tu                     vas ?  42mots quarante-deux; cinquante+                   et+un";
    ft_strcapitalize(str);
    printf("Le phrase devient = %s\n", str);
    return(0);
}