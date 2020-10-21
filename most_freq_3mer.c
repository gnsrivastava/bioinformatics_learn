#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ncurses.h>

// What is the most frequent 3-mer of CGCCTAAATAGCCTCGCGGAGCCTTATGTCATACTCGTCCT?

// process
/*
get a DNA string as an input from the user
1. starting from postion 0, get a 3 mer
2. check if that 3-mer occurs in the string
3. if yes then add that to count and save that 3mer in an array
4. increase the position by 1
5. rpeat the process from 2 to 4
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, k;
    unsigned long long x, y;
    if (argc == 1) {
        fprintf(stderr, "Usage: %s <k>\n", argv[0]);
        return 1;
    }
    k = atoi(argv[1]);
    for (x = 0; x < 1ULL<<(2*k); ++x) {
        for (i = 0, y = x; i < k; ++i, y >>= 2)
            putchar("ACGT"[y&3]);
        putchar('\n');
    }
    return 0;
}
*/

//CGCCTAAATAGCCTCGCGGAGCCTTATGTCATACTCGTCCT
//TCG
int main()
{
    char dna[1000];
    char read[3] = {0};
    char most_freq[3];

    printf("Enter the DNA sequence\n");
    fgets(dna, sizeof(dna), stdin);
    int i, j;
    for(i=0; i<strlen(dna)-3; i++)
    {

        read[0] = dna[i];
        read[1] = dna[i+1];
        read[2] = dna[i+2];
        int count=0, maxcount=1;
        for(j = 0; j < strlen(dna); j++)
        {
            if(dna[j] == read[0] && dna[j+1] == read[1] && dna[j+2] == read[2])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if(count > maxcount)
        {
            maxcount = count;
            
           printf("%s %d\n", read, maxcount);
        }

    }
}

