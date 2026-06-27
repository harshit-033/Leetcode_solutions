class box {
    double length;
    double breadth;

    box(double l, double b) {
        length = l;
        breadth = b;
    }

    double getArea() {
        return length * breadth;
    }
}

class box3d extends box {
    double height;

    box3d(double l, double b, double h) {
        super(l, b);
        height = h;
    }

    double getVolume() {
        return getArea() * height;
    }
}

public class TestBox {
    public static void main(String[] args) {
        box3d b = new box3d(10, 5, 3);
        System.out.println("Area: " + b.getArea());
        System.out.println("Volume: " + b.getVolume());
    }
}