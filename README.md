pset2-scrabble
<strong>NOTE</strong>: Copying this data and using it for your submission will breach the academic honesty policy of CS50. Please ensure you learn the material and solve the problem on your own—it's worth it!

<p>This is my solution to the CS50 "Scrabble" problem set, implemented in C. You can find the full problem description <a href="https://cs50.harvard.edu/x/2024/psets/2/scrabble/">here</a>.</p>
Problem Overview
<p>In this problem set, I implemented a program that simulates a game of Scrabble between two players. The program takes two words as input and calculates the score for each word based on Scrabble letter values. The word with the higher score wins!</p> <p>This solution is part of <strong>CS50: Introduction to Computer Science</strong>. Uploading my solution to GitHub is consistent with CS50’s academic honesty policy. For more clarification on academic honesty and reasonable sharing practices, refer to this <a href="https://www.reddit.com/r/cs50/comments/63235w/is_this_reasonable/">Reddit discussion</a>.</p>
Program Structure
<ul> <li><strong>Input</strong>: The program takes two words as input from the players.</li> <li><strong>Scoring</strong>: It calculates the Scrabble score for each word using predefined letter values.</li> <li><strong>Comparison</strong>: It compares the scores and prints out whether Player 1, Player 2, or neither (tie) wins.</li> </ul>
Key Steps:
<ol> <li><strong>Letter Scoring</strong>: The program uses a scoring system that assigns different point values to letters based on Scrabble rules.</li> <li><strong>Input Handling</strong>: The input words are converted to uppercase to simplify matching against the scoring table.</li> <li><strong>Winner Determination</strong>: After computing the scores for both words, the program determines the winner or declares a tie.</li> </ol> <p>Note: This repository does not include CS50’s provided resources, such as the Makefile or any additional sample inputs.</p>
