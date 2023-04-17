### Using gprof

for graph generation:

```shell
$ gprof ./build/gprof_examples/ros-calculator gmon.out | gprof2dot -s -w | dot -Gdpi=200 -Tpng -o output.png
```

generate Temporary Report:
```shell
$ gprof ./build/gprof_examples/ros-calculator > analyze.txt
```

<br>

### Using valgrind

Valgrind callgrind running executable file.

```shell
$ valgrind --tool=callgrind xxx 
```

Callgrind_control to dump file.

```shell
$ callgrind_control -d
```

For more information, check this [link](https://cs.swan.ac.uk/~csoliver/ok-sat-library/internet_html/doc/doc/Valgrind/3.8.1/html/cl-manual.html)
