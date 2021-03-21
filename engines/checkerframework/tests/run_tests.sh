alias javacheck='../checker-framework-3.11.0/checker/bin/javac'
javacheck -processor org.checkerframework.checker.nullness.NullnessChecker Test.java
