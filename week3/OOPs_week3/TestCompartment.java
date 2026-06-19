import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "FIRST CLASS: AC compartment. Valid pass/ticket holders only.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "LADIES COMPARTMENT: Reserved for women passengers only.";
    }
}

class General extends Compartment {
    public String notice() {
        return "GENERAL COMPARTMENT: Open to all passengers. No reserved seating.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "LUGGAGE COMPARTMENT: For parcels and luggage only. No passengers allowed.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] comp = new Compartment[10];
        Random rand = new Random();

        for(int i=0; i<comp.length; i++) {
            int type = rand.nextInt(4)+1;

            if(type==1) comp[i] = new FirstClass();
            else if(type==2) comp[i] = new Ladies();
            else if(type==3) comp[i] = new General();
            else comp[i] = new Luggage();
        }

        System.out.println("Rail Coach Compartment Notices");
        System.out.println("--------------------------------");
        for(int i=0; i<comp.length; i++) {
            System.out.println("Compartment "+(i+1)+" ["+comp[i].getClass().getSimpleName()+"]: "+comp[i].notice());
        }
    }
}