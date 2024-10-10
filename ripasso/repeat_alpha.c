#include <stdio.h>
#include <stdlib.h>

void repeat_alpha(const char *str) {
    int i = 0;
    
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {

            int repeat_count;
	    if (str[i] >= 'a')
	    { 
		    repeat_count = str[i] - 'a' + 1;
	    }
	    else
	    {
		    repeat_count = str[i] - 'A' + 1;
	    }
            int j = 0;

            while (j < repeat_count)
	    {
           
	       	    putchar(str[i]);
                j++;
            }
        } else {
       
            putchar(str[i]);
        }
        i++; // Passa al carattere successivo
    }
    putchar('\n'); // Aggiunge una nuova riga alla fine
}

int main(int argc, char *argv[]) {
    // Se non ci sono argomenti o ci sono più di uno, stampa solo una nuova riga
    if (argc != 2) {
        putchar('\n');
        return 0;
    }

    // Chiama la funzione per ripetere i caratteri
    repeat_alpha(argv[1]);
    return 0;
}

