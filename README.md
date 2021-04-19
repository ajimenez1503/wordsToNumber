# wordsToNumber
Simple application with received text and converts written numbers, in words, to digits in the middle of a paragraph.

### Example:
1.
- Input: "one hundred and one"
- Output: "101"
2.
- Input: "I have one hundred apples"
- Output: "I have 100 apples"

### Restriction

Numbers can only be positive integers up to one billion (10^9)


# Run an example:

## Clone the repository

```bash
    git clone https://github.com/softwarejimenez/wordsToNumber.git
    cd wordsToNumber
```

## Compile applications with CMake

```bash
    mkdir -p build && cd build
    cmake -DCMAKE_BUILD_TYPE=Release|Debug  ..
    cmake --build . --config Release|Debug
```

## Execute the application
```bash
    cd bin
    ./wordsToNumber
```

