# Testing is important
- I honestly wish I had learned about this stuff before haha. 

GoogleTest is cool. The tutorial I followed can be found [here](https://google.github.io/googletest/primer.html)

### Commands to build an run the test in this folder


```
cmake -S . -B build
```

```
cmake --build build
```


```
cd build && ctest
```

The output should be: 
```
Test project ../first_tests/build
    Start 1: HelloTest.BasicAssertions
1/1 Test #1: HelloTest.BasicAssertions ........   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

```