# A presentation about cpp for ros1 programmer

Slides: [Presentation](doc/Presentation.pdf)  
Status: Not Finished Yet.

<br>

##  For Running Examples Code
```shell
$ docker build -t dummy_img . # build img
$ docker run --rm -it -v $(pwd):/home/demo dummy_img # mount folder
$ cd build && rm -rf * && cmake .. && make # build code
```

