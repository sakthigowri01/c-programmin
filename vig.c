int main()
{
    char str[MAX_SIZE];
    int alphabets, digits, others, i;

    alphabets = digits = others = i = 0;


    
    printf("Enter any string : ");
    gets(str);

        {
            digits++;
        }
        else
        {
            others++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}
