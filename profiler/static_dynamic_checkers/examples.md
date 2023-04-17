### Use valgrind

```shell
$ valgrind --leak-check=full --track-origins=yes ./xxx
```

<br>

### Use Clang

Clang static analyzer.

```shell
$ clang --analyze ./xxx.cpp # report in txt format.
```

```shell
$ clang --analyze -Xclang -analyzer-output=html -o html xxx.c # report in html format.
```

<br>

### Using Clang-tidy
```shell
$clang-tidy -list-checks
```
```shell
$$ clang-tidy xxx.cpp -checks=-*,clang-analyzer-*,-clang-analyzer-cplusplus*
```

<br>

### Using CppCheck
```shell
$ cppcheck --enable-all xxx.cpp
```

