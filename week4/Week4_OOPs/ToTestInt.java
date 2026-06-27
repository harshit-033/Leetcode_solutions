interface test {
    int square(int num);
}

class arithmetic implements test {
    @Override
    public int square(int num) {
        return num * num;
    }
}

public class ToTestInt {
    public static void main(String[] args) {
        arithmetic a = new arithmetic();
        System.out.println(a.square(5));
    }
}