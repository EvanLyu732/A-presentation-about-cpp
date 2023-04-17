For graph generation:

```shell
$ gprof ./build/gprof_examples/ros-calculator gmon.out | gprof2dot -s -w | dot -Gdpi=200 -Tpng -o output.png
```

Generate Temporary Report:
```shell
$ gprof ./build/gprof_examples/ros-calculator > analyze.txt
```