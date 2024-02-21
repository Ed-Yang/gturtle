# Google GMock Sample

## Reference

* [GMock for Dummies](https://github.com/google/googletest/blob/master/googlemock/docs/ForDummies.md)
* [Google Mock Turtle-Painter example](http://paul.grozav.info/2016/06/24/google-mock-turtle-painter-example/)
* [Building GoogleTest and GoogleMock directly in a CMake project](https://crascit.com/2015/07/25/cmake-gtest/)

# Build

Windows
```
mkdir build
cd build
cmake -G "NMake Makefiles" ..
nmake
```

# Linux/macOS
```
mkdir build
cd build
# clear last build, do this only on needs
rm -rf *
cmake ..
make
```

# Run
```
cd tests
test_turtle

[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from PainterTest
[ RUN      ] PainterTest.CanDrawSomething
[       OK ] PainterTest.CanDrawSomething (0 ms)
[----------] 1 test from PainterTest (1 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (2 ms total)
[  PASSED  ] 1 test.
```

# Comment

There is one problem while building the Googletest in the same repository.  If the source code of Googletest is changed and got problems, then you have to "fix" it and then can run the tests.

Maybe, it is needed to consider to put the Googletest in a external folder and update it by needs.


