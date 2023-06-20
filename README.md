# Project-2-Program-Design
Project 2, Program Design
1. (50 points) Tessa has recently started a produce stand. The prices are:
1. Lemons - $0.21 each,
2. Lettuce - $2.39 each,
3. Potatoes $0.79/lb,
4. Beans - $0.99/lb,
5. Avocado - $1.50 each
6. Tomatoes - $1.99/lb
Write a program to help Tessa calculate the charge. The program allows the user to select an
item, input the weight or the number of items, and calculate the total amount due. Tessa only
accepts cash. The program will take input of the cash received and calculate the change.
An example input/output:
Please select from the list:
1. Lemons - $0.21 each,
2. Lettuce - $2.39 each,
3. Potatoes $0.79/lb,
4. Beans - $0.99/lb,
5. Avocado - $1.50 each
6. Tomatoes - $1.99/lb
Enter selection: 1
Enter number of items: 3
Enter selection: 3
Enter weight (lb): 2
Enter selection: 7
Invalid selection, select from 1 to 6, enter 0 to stop selection
Enter selection: 4
Enter weight (lb): 1.6
Enter selection: 5
Enter number of items: 1
Enter product selection: 0
Amount due ($): 5.29
Enter cash received ($): 20
Your change is $14.71
1) Name your program produce_stand.c
2) If the user selects a number out of the range (1 through 6), display a message and allows the
user to select again. When user enters 0, the program should exit from the loop for
selection.
3) Use a switch statement to compute the amount due according to the selection(s).
2. (50 points) Some phone numbers are represented with letters. For example, (813)AIR-
PORT, represents (813)247-7678. The correspondence between numbers 2 through 9 on the
telephone keypad and the letters are as follows:
Digit Letter Digit Letter
2 A B C 6 M N O
3 D E F 7 P Q R S
4 G H I 8 T U V
5 J K L 9 W X Y Z
Write a program that prompts the user to enter a phone number. The program translates a
letter in the phone number to the corresponding digit. Other characters should remain
unchanged.
1) Name your program translate.c.
2) The user input ends with the user pressing the enter key (a new line character).
3) Use getchar() to read in the input.
Example input/output:
Input: 1-727-PET-CARE
Output: 1-727-738-2273
Before you submit:
1. Compile with –Wall. –Wall shows the warnings by the compiler. Be sure it compiles on student
cluster with no errors and no warnings.
gcc –Wall produce_stand.c
gcc –Wall translate.c
2. Be sure your Unix source file is read & write protected. Change Unix file permission on Unix:
chmod 600 produce_stand.c
chmod 600 translate.c
3. Test your programs with the shell script on Unix:
chmod +x try_produce_stand
./try_produce_stand
chmod +x try_translate
./try_translate
4. Download produce_stand.c and transalte.c from the student cluster to your computer and
submit on Canvas.
Grading:
Total points: 100 (50 points problem 1 and 50 points problem 2)
1. A program that does not compile will result in a zero.
2. Runtime error and compilation warning 5%
3. Commenting and style 15%
4. Functionality requirement 80%
Programming Style Guidelines
The major purpose of programming style guidelines is to make programs easy to read and understand.
Good programming style helps make it possible for a person knowledgeable in the application area to
quickly read a program and understand how it works.
1. Your program should begin with a comment that briefly summarizes what it does. This
comment should also include your name.
2. In most cases, a function should have a brief comment above its definition describing what it
does. Other than that, comments should be written only needed in order for a reader to
understand what is happening.
3. Variable names and function names should be sufficiently descriptive that a knowledgeable
reader can easily understand what the variable means and what the function does. If this is not
possible, comments should be added to make the meaning clear.
4. Use consistent indentation to emphasize block structure.
5. Full line comments inside function bodies should conform to the indentation of the code where
they appear.
6. Macro definitions (#define) should be used for defining symbolic names for numeric constants.
For example: #define PI 3.141592
7. Use names of moderate length for variables. Most names should be between 2 and 12 letters
long.
8. Use either underscores or capitalization for compound names for variable: tot_vol,
total_volumn, or totalVolumn
