alias javacheck='../checker-framework-2.3.1/checker/bin/javac'
javacheck -processor org.checkerframework.checker.nullness.NullnessChecker Test.java
