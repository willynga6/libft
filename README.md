#  📕  Libft:  

Libft is the first project of the common core at the 42 school.  
The goal is to recreate existing standard functions in **C** relating to:  
➡️  Memory manipulation.  
➡️  Strings.  
➡️  Chained lists.  

##  🚀  To begin:

### 📦  Installation:

How to install all the files necessary to create the library:  
➡️  In your terminal, move to the repository where you want to install  
the library.  
➡️  Enter the command:  
    For HTTPS:  **git clone https://github.com/willynga6/libft.git**  
    For SSH:    **git clone git@github.com:willynga6/libft.git**

###  📁  Create the library:

How to create the library with the installed files:  

1)  Move/Stay in your terminal in the repository where the files are  
installed.  
2)  Enter the command:
-  **make all**  
-  **make bonus**  
3)  A file named libft.a is now created.

###  🧠  Use the library with my program:

1)  Include the header name in your code:  
**#include "libft.h"**

2)  Compile your program with the library:
(Example with a program called main.c)

    **gcc main.c libft.a -o main**

3)  Run your program!

##  🎸  Commands of the Makefile

**make all**: Create the library and all the object files (all the files with  
the extension .o) necessary for it.  
**make clean**: Remove all the object files unnecessary because the library has  
been created.

##  📛  Author

Name:           Ngambi William  

GitHub profile:  https://github.com/willynga6  

###  ©️  License

Project completed as part of the 42 curriculum - free to use for learning
purposes.
Not commercial use permitted.
