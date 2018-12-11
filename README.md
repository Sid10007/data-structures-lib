# data-structures-lib
This contains header-only libraries for conventional data structures like stacks, queues, lists, trees and graphs with their different implementations in c++.

main.cpp file in each of the libraries is a test driver program.

**HOW TO USE -** 

Clone the repository - 
```git
git clone "(url)"
```

*Linux :*

1. Open the library in the terminal and run setup file as root - 
```bash
chmod 755 setup.sh
sudo ./setup.sh
```
2. Include the header file in your c++ program -
```c++
#include<lib_name.h>
```

*Windows or MacOS :*

1. Copy the header files in your local project directory.

2. In the header file "lib_name.h" change - 
```c++ 
#include<lib_name_func_def.h> /*to*/ 
#include"lib_name_func_def.h" 
```

3. Include the header file in your c++ program -
```c++
#include"lib_name.h"
```
