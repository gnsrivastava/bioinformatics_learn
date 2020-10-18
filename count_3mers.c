#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ncurses.h>

// This is to search a three letter string on to anoter string and find the count

int main()
{
    char dna[1000]; 
    char read[1000];
    printf("Enter the DNA sequence\n");
    // There are 3 ways to get string input having multiple characters
    // fgets(), scanf() and gets()
    // Since, gets() is deorecated, its advisable not to use gets() for stdin
    // scanf() works but sometimes for larger strings that are given in multiple lines it
    // can create problems by reading '\n'

    // it is recommended to use fgets(). If the read length is known.
    fgets(dna, sizeof(dna), stdin);
    //scanf("%s", dna);
    //gets(dna);

    printf("Enter the read sequence\n");
    fgets(dna, sizeof(dna), stdin);
    //scanf("%s", read);
    //gets(read);

    int count=0;
        
    for(int i = 0; i<=strlen(dna); i++)
    {
        if(dna[i] == read[0] && dna[i+1] == read[1] && dna[i+2] == read[2])
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("%d\n", count);
    return(count);
}


