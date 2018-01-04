import org.checkerframework.checker.nullness.qual.*;

public class Test {
    void sample() {
        @NonNull Object ref = new Object();
        @NonNull String s = null;
    }
}
