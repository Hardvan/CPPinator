# CPPinator

CPPinator is a Python automation script designed for compiling and running multiple C++ files in a specified directory. It simplifies the process of handling multiple C++ programs and provides a clear and organized output for each program's execution.

## How it works

1. The script allows you to specify a directory path where your C++ source code files are located.

2. It changes the current working directory to the specified path.

3. CPPinator lists all the C++ source code files with the `.cpp` extension in the directory.

4. For each `.cpp` file found, it compiles the code using `g++` and runs the resulting executable.

5. The script captures and displays the output and any errors produced by each program.

6. Upon successful execution of all C++ files, it provides a summary message.

7. Finally, the compiled executable file (`a.exe`) is deleted to keep your directory clean.

## Usage

1. Ensure you have Python and a C++ compiler (e.g., g++) installed on your system.

2. Clone or download this script to your local machine.

3. Open the script and update the `directory_path` variable to point to the directory containing your C++ files.

4. Run the script using Python.

## Example Output

Here's an example of the script's output when run with a list of C++ files:

List of .cpp files:

1. `count_digits.cpp`
2. `divisors.cpp`
3. `gcd.cpp`
4. `palindrome_number.cpp`
5. `prime.cpp`
6. `reverse_array.cpp`
7. `reverse_number.cpp`

Running .cpp files:

1. `count_digits.cpp`

   Number of digits in 123456789 is:  
   9  
   9  
   9

2. `divisors.cpp`  
   Divisors of 100 are:  
   1 100 2 50 4 25 5 20 10  
   Divisors of 100 are:  
   1 2 4 5 10 20 25 50 100

3. `gcd.cpp`  
   GCD of 12 and 15 is:  
   3  
   3

4. `palindrome_number.cpp`  
   12321 is palindrome: 1

5. `prime.cpp`  
   100 is not prime  
   100 is not prime

6. `reverse_array.cpp`  
   Original array:  
   1 2 3 4 5  
   Reversed array:  
   1 2 3 4 5  
   Reversed array:  
   5 4 3 2 1  
   Reversed array:  
   1 2 3 4 5

7. `reverse_number.cpp`  
   Reverse of 123456789 is: 987654321

✅ Ran all C++ files successfully.
