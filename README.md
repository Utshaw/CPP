# Compilers
- C++ is a compiled programming language
- Doesn't have any official compiler
## GNU Compiler Collection (GCC)
- g++ program compiles C++ source code and automatically links the C++ standard library
- In order to use those classes and functions from the C++ standard library the compiler must have access to the compiled version of the standard library stored in object files
- The compiler links the standard library object files to the object files created from the programmer's source code
# Build tools
- Help simlify the process of building softwares
- Automate the process of compiling multiple source codes into object files, linking those object files together, and generating an executable
- Automate the process of determining which files have changed since the last build and thus need to be recompiled
## Make (GNU Make)
- Make use of Makefile
- Makefile includes one or more targets each performing different action
- build is a common target name to compile all of the project's source code into an executable file
- clean is a target to delete all object files and artifacts of the build process, resulting in a clean, unbuild project state
## CMake
- Make use of CMakeLists.txt
- facilitates cross platform builds
- Tutorial: https://cmake.org/cmake-tutorial/

# Debugger
- Allows you to pause the execution of code in varios locations, inspect the state of the program, and step throguh your code line by line 
- GDB, LLB are open source debugger for C++

# C++ main()
- When the program is run main function is executed automatically , main() should return an integer


# Namespace
- All standard library functions, classes exist in std:: namespace, std::vector refer to verctor class 

## Size of data types
```
char x;
int a;
cout << sizeof(a) << endl; // size of int in bytes
cout << sizeof(x) << endl; // size of char in bytes

cout << CHAR_MAX << " " << CHAR_MIN << endl; //  #include <climits>

```

# Literals
## Integer literals
```
int a = 10; // decimal number
int b = 010; // octal
int c = 0x10; // Hexadecimal
long distance = 1568L;// long 
```
## Float literals
```
float price = 12.5F;
```

## Double literals
```
double cost = 125.5L; // long double literal
double someVar = 25.5; // by default it's double
```

## char literals
```
char section = 65;
```

## string literals
```
string name = "Utshaw"; // string literals
```

## enum
```
enum day {
    mon=1, // 1
    tue,  // 2
    wed,  // 3
    thu=10, // 10
    fri,   // 11
    sat,  // 12
    sun   // 13
};
day d;
d = tue;
d = fri;
cout << d << endl;
```
## typedef
```
typedef int marks;
marks m1, m2 ;
m1 = 10;
m2 = 2;
```
# Looping
## For loop
```
int arr[] = {1, 2, 3, 4, 5, 6};
for(int element: arr) {
    cout << element << endl;
}

```
# Array
```
int A[5] = {0}; // all of the 5 items will be 0
```

## Tutorial currently following

- Learn C++ Programming -Beginner to Advance- Deep Dive in C++<br>
- Resume from: 05-64