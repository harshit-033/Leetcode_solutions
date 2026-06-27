class Outer {
    void display() {
        System.out.println("Outer display");
    }

    class Inner {
        void display() {
            System.out.println("Inner display");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Outer outer = new Outer();
        outer.display();

        Outer.Inner inner = outer.new Inner();
        inner.display();
    }
}