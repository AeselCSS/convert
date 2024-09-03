# Unit converter

## Compilation Instructions

To compile the project, use the following command:

```sh
gcc -Wall -I./include -I./src/ui -o ./build/convert ./src/*.c ./src/ui/*.c
```

## Running the Program

On unix-based systems, run the compiled program by using the following command:

```sh
./build/convert
```

On Windows-based systems, run the compiled program by using the following command:

```sh
./build/convert.exe
```

### Development Environment
- **Machine**: Intel-based MacBook Pro
- **Operating System**: macOS Sonoma (14.6.1)
- **Compiler**: gcc-14 (Homebrew GCC 14.2.0)

