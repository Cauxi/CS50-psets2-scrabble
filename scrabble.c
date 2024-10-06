#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int word_score(string s);
string to_uppercase(string s);

int main(void) {

   string player1_word = get_string("Player 1: ");
   string player2_word = get_string("Player 2: ");
   player1_word = to_uppercase(player1_word);
   player2_word = to_uppercase(player2_word);

    if (word_score(player1_word) > word_score(player2_word)) {
        printf("Player 1 wins!\n");
    } else if (word_score(player2_word) > word_score(player1_word)) {
        printf("Player 2 wins!\n");
    } else {
        printf("Tie!\n");
    }

    // I just finished reading the "Convert the pseudocode to code:" and it's so clever the solution that they give

}


string to_uppercase(string s)
{
    int n = strlen(s);
    // this is to fix apperant memory error
    char *result = malloc(n + 1);

    if (result == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            result[i] = s[i] - 32;
        }
        else
        {
            result[i] = s[i];
        }
    }

    result[n] = '\0';
    return result;
}


int word_score(string s) {

    int n = strlen(s);
    int score = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'L' || s[i] == 'N' || s[i] == 'O' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'U') {
            score += 1;
        } else if (s[i] == 'D' || s[i] == 'G') {
            score += 2;
        } else if (s[i] == 'B' || s[i] == 'C' || s[i] == 'M' || s[i] == 'P') {
            score += 3;
        } else if (s[i] == 'F' || s[i] == 'H' || s[i] == 'V' || s[i] == 'W' || s[i] == 'Y') {
            score += 4;
        } else if (s[i] == 'K') {
            score += 5;
        } else if (s[i] == 'J' || s[i] == 'X') {
            score += 8;
        } else if (s[i] == 'Q' ||s[i] == 'Z') {
            score += 10;
        } else {
            score += 0;
        }
    }
        return score;
}
