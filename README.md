#### Create header file:

```
javac -h src/main/resources src/main/java/org/example/MathLib.java
```

#### Create C / C++ lib:

```
g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux src/main/resources/org_example_MathLib.cpp -o src/main/resources/org_example_MathLib.o
```
```
g++ -shared -fPIC -o src/main/java/lib/MathLib.so src/main/resources/org_example_MathLib.o -lc
```
