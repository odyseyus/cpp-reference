# Definign a vriable.
```C++
int main()
{
    int x; // int ---> Type specifier, x ---> Identifier or part of declarator .
    int y, z; // int is usually 4 bytes(32) !Depending on the platform, C++ standart doesn't require this
    //You can't redeclare a Local variable with the same identifier in the same scope.
  //int x,y,z; //error.
    return 0;                  
}  
```

- For more context: https://www.usenix.org/legacy/publications/login/standards/10.data.html.
- For unix based systems/platforms: https://archive.opengroup.org/public/tech/aspen/lp64_wp.htm.
- For windwos:https://learn.microsoft.com/en-us/windows/win32/winprog64/abstract-data-models.
- Why did the Win64 team choose the LLP64 model?, Article: https://devblogs.microsoft.com/oldnewthing/20050131-00/?p=36563.

## You can actaully test this:
```C++ 
#include <iostream>

int main()
{
    std::cout << sizeof(int) << "\n";//sizeof() returns bytes, not bits.
    std::cout << sizeof(long) << "\n";
    std::cout << sizeof(long long) << "\n";
    std::cout << sizeof(void*) << "\n";
}
```
## sizeoff() returns bytes, not bits.
## Output depends on the platform's data model.
## Modern UNIX-like 64-bit systems usually use LP64.
## Windows 64-bit systems use LLP64.
