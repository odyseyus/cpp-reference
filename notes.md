# Declaring Variable 

- A declaration indroduces the name and the type of the vraiable to the complier  
- Not every **declaration** is a **definition** but all **definition is a **declaration**  
```cpp
int main(){
    extern int x;   
}
```






# Defining Variables

-

```cpp
int main()
{
    int x; // int ---> Type specifier, x ---> Identifier.
    int y, z; // int is commonly 4 bytes (32 bits) on modern systems, but the C++ standard doesn't require a specific size.
    // You can't redeclare a local variable with the same identifier in the same scope.
    // int x, y, z; // error.
    return 0;
}
```

### Further Reading

- For more context: https://www.usenix.org/legacy/publications/login/standards/10.data.html
- For Unix-based systems/platforms: https://archive.opengroup.org/public/tech/aspen/lp64_wp.htm
- For Windows: https://learn.microsoft.com/en-us/windows/win32/winprog64/abstract-data-models
- Why did the Win64 team choose the LLP64 model? Article: https://devblogs.microsoft.com/oldnewthing/20050131-00/?p=36563

## You can actually test this:

```cpp
#include <iostream>

int main()
{
    // sizeof returns the size of a type or object in bytes.
    std::cout << sizeof(int) << "\n";
    std::cout << sizeof(long) << "\n";
    std::cout << sizeof(long long) << "\n";
    std::cout << sizeof(void*) << "\n";
}
```

> [!NOTE]
>
> - `sizeof` returns the size of a type or object in bytes.
> - Output depends on the platform's data model.
> - Modern Unix-like 64-bit systems usually use **LP64**.
> - Windows 64-bit systems use **LLP64**.

## Variable assignment

- After a variable has been defined, you can assign a value to it. This process is called **assignment**, and the `=` operator is called the **assignment operator**.

- **Assignment** can be used whenever we want to change the value of a **variable**.

```cpp
#include <iostream>

int main()
{
    int age;  // defining a variable
    age = 30; // assigning a value

    std::cout << age;

    age = 50;
    std::cout << age;

    return 0;
}
```

## Variable initialization

- We can **define** a variable and then **assign** a value to it, but doing so requires two **statements**:

```cpp
#include <iostream>

int main()
{
    int price;   // first statement: define a variable
    price = 50;  // second statement: assign a value to the variable
    std::cout << price << "\n";
    return 0;
}
```

- Instead of using two steps, we can define a variable and immediately give it an initial value. This process is called **initialization**.

```cpp
#include <iostream>

int main()
{
    int price = 50;  // Initialization
    std::cout << price << "\n";

    return 0;
}
```

- A **statement** is an instruction that tells the program to perform an action. Most statements are executed sequentially unless control flow changes (for example, with `if`, `for`, or `while`).

- Wikipedia: Statement (computer science) (https://en.wikipedia.org/wiki/Statement_(computer_science))

- C++ reference: https://en.cppreference.com/cpp/language/statements