#include <stdio.h> 
#include <ctype.h> 
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>

bool isInteger(const char *input) { 
    for (int i = 0; input[i] != '\0'; i++) { 
	    if (!isdigit(input[i]) && !(i == 0 && input[i] == '-')) { 
		    return false;
	    }
    }
    return true;
}


bool isFloat(const char *input) { 
	bool hasDecimal = false; 
	for (int i = 0; input[i] != '\0';i++) {
		if (input[i] == '.') { 
			if (hasDecimal) return false; // More than one decimal point 
						      hasDecimal = true;
        } else if (!isdigit(input[i]) && !(i == 0 && input[i] == '-')) 
	{
            return false;
        }
    }
    return hasDecimal;
}
bool isChar(const char *input) { 
    return strlen(input) == 1;
}
void analyzeInput(const char *input) 
{
    if (isInteger(input)) { 
	    printf("Data Type: Integer\n");
	    printf("Memory Size: %zu bytes\n", sizeof(int)); 
	    printf("Format Specifier: %%d\n");
    } else if (isFloat(input)) {
	    printf("Data Type: Float\n"); 
	    printf("Memory Size: %zu bytes\n", sizeof(float)); 
	    printf("Format Specifier: %%f\n");
    } else if (isChar(input)) {
	    printf("Data Type: Character\n"); 
	    printf("Memory Size: %zu bytes\n", sizeof(char)); 
	    printf("Format Specifier: %%c\n");
    } else {
	    printf("Data Type: String\n"); 
	    printf("Memory Size: Depends on length (%zu bytes per character)\n", sizeof(char)); 
	    printf("Format Specifier: %%s\n");
    }
}
int main() { char input[100]; 
	printf("Enter a value: "); 
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';
	// Remove newline 
	character analyzeInput(input); 


	return 0;
}
