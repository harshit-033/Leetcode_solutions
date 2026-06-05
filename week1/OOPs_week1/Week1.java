interface LibraryUser
{
    void registerAccount();
    void requestBook();
}

class KidUser implements LibraryUser
{
    int a;
    String bt;

    public void registerAccount()
    {
        if(a<12)
        {
            System.out.println("You have successfully registered under a Kids Account");
        }
        else
        {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    public void requestBook()
    {
        if(bt.equalsIgnoreCase("Kids"))
        {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else
        {
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser
{
    int a;
    String bt;

    public void registerAccount()
    {
        if(a>12)
        {
            System.out.println("You have successfully registered under an Adult Account");
        }
        else
        {
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    public void requestBook()
    {
        if(bt.equalsIgnoreCase("Fiction"))
        {
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else
        {
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class Week1
{
    public static void main(String[] args)
    {
        KidUser k=new KidUser();

        k.a=10;
        k.registerAccount();

        k.a=18;
        k.registerAccount();

        k.bt="Kids";
        k.requestBook();

        k.bt="Fiction";
        k.requestBook();

        System.out.println();

        AdultUser ad=new AdultUser();

        ad.a=5;
        ad.registerAccount();

        ad.a=23;
        ad.registerAccount();

        ad.bt="Kids";
        ad.requestBook();

        ad.bt="Fiction";
        ad.requestBook();
    }
}