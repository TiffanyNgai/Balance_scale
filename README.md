# Balance_scale
SYDE 121 - assignment #1 Q1
The balance scale includes the following weight types: 125 lb, 75 lb, 42 lb, 15 lb, and 1 lb. This program calculates the number of each type of weight that is required to weigh an object of a certain pounds specified by the user.

Assignment instruction: 
A balance scale includes the following weight types: 125 lb, 75 lb, 42 lb, 15 lb, and 1 lb.

1. Write a program to calculate and output the number of each type of weight that is required to weigh an object of 2,048 pounds.
   To compute the number for each weight type, first maximize the usage of the heaviest weight type.
   Before writing any code, outline program steps as comments. After that, appropriately declare and initialize a number of variables for this problem, and give
   each identifier a descriptive name.
   For example, to compute the number of 125 lb weights, you may use the following:
   int weight_given = 2048;
   int weights125 = weight_given / 125;
   You may also find the modulus % operator useful in your program.
   For example, “value % 125” will compute the remainder for when the given value is divided by 125.
   
2. Modify the program to provide a simple user interface where the user can enter the initial weight value on their own (e.g., 500 pounds). Use “cin >> variable
   name;” to obtain user input. You do not have to incude error checking.
   
4. Verify that your program is correct by manually computing the result (e.g., on paper, using an online calculator), and then compare that result with the output
   of your program; test a number of different values.
   As a comment at the start of your program (i.e., using /* ... */ notation), explain what values you used to test the program logic, and identify the valid range
   of values for which your program will work correctly.
   Also record the output for step (1) as part of these comments. Do not insert all your code into the main() function.
