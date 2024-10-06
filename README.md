<h1>pset2-scrabble</h1>

NOTE: Copying this data and using it for your submission will breach the academic honesty policy of CS50. Please ensure you learn the material and solve the problem on your own. It's worth it!

This is my solution to the CS50 "Scrabble" problem set, implemented in C. The full details of the problem can be found here: https://cs50.harvard.edu/x/2024/psets/2/scrabble/

Problem Overview
In this problem set, I implemented a program that simulates a game of Scrabble between two players. The program takes two words as input and calculates the score for each word based on Scrabble letter values. The word with the higher score wins!

This solution is part of the CS50: Introduction to Computer Science course. Uploading my solution to GitHub is consistent with CS50's academic honesty policy. For more clarification on academic honesty and reasonable sharing practices, refer to this Reddit discussion.

Program Structure
The program breaks down into the following tasks:

Input: The program takes two words as input from the players.
Scoring: It calculates the Scrabble score for each word using predefined values for each letter (as per Scrabble rules).
Comparison: Compares the two scores and prints out the result, determining the winner or declaring a tie.
Key Steps:
Letter Scoring: The program uses a scoring system that assigns different point values to letters (e.g., A = 1 point, Z = 10 points) and calculates the score for each word based on the sum of the letters' points.
Input Handling: The input words are converted to uppercase to match them against the scoring table easily.
Winner Determination: After computing the scores for both words, the program determines and prints whether player 1, player 2, or neither (tie) wins based on their scores.
Note: The repository does not include CS50’s provided resources such as the Makefile or other utility files that are part of the course material.

