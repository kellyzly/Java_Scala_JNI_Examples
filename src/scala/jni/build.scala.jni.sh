rm -rf target;
mkdir -p target/obj
gcc -fPIC -c -O -o target/obj/HelloWorldJNIwithRegisterNatives.o -I/usr/java/jdk1.7.0_51/include \
-I/usr/java/jdk1.7.0_51/include/linux src/c/HelloWorldJNIwithRegisterNatives.c
gcc -fPIC -c -O -o target/obj/HelloWorldJNIwithRegisterNatives1.o -I/usr/java/jdk1.7.0_51/include \
-I/usr/java/jdk1.7.0_51/include/linux src/c/HelloWorldJNIwithRegisterNatives1.c
gcc -fPIC -c -O -o target/obj/JNI_Load.o -I/usr/java/jdk1.7.0_51/include \
-I/usr/java/jdk1.7.0_51/include/linux src/c/JNI_Load.c

mkdir -p target/so
gcc -fPIC -shared -o target/so/libHelloWorldJNIwithRegisterNatives.so \
target/obj/HelloWorldJNIwithRegisterNatives.o \target/obj/HelloWorldJNIwithRegisterNatives1.o \
target/obj/JNI_Load.o
rm -rf scala/jni/*.class
scalac src/scala/Main.scala
scala -Djava.library.path=./target/so/  scala.jni.Main


