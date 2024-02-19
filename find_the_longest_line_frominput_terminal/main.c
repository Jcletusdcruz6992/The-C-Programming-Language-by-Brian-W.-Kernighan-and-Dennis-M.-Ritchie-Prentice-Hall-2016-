#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

// Function prototypes
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* Main function: print the longest input line */
int main() {
    int len; // Current line length
    int max; // Maximum length seen so far
    char line[MAXLINE]; // Current input line
    char longest[MAXLINE]; // Longest line saved here

    max = 0; // Initialize max to 0
    while ((len = getLine(line, MAXLINE)) > 0) { // Read a line
        if (len > max) { // If the line is longer than the previous longest
            max = len; // Update max to the new length
            copy(longest, line); // Copy the current line to longest
        }
    }

    if (max > 0) { // If there was at least one line
        printf("%s", longest); // Print the longest line
    }

    return 0; // Return success
}

/* getline: read a line into s, return length */
int getLine(char s[], int lim) {
    int c, i; // Declare variables for character and index
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) { // Read characters
        s[i] = c; // Store character in the array
    }
    if (c == '\n') { // If the character is a newline
        s[i] = c; // Store the newline in the array
        ++i; // Increment the index
    }
    s[i] = '\0'; // Add a null terminator to the end of the array
    return i; // Return the length of the line
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
    int i; // Declare an index variable
    i = 0; // Initialize index to 0
    while ((to[i] = from[i]) != '\0') { // Copy characters until the null terminator is encountered
        ++i; // Increment the index
    }
}
