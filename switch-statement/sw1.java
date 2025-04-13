public class sw1 {
    public static void main(String[] args){
        final int x=10; //Using final makes variables constant, preventing changes and improving code safety and readability.
        final int y=10;

        switch (x+y){
            case 15:
                System.out.println("result is 15");
                break;
            case 20:
                System.out.println("result is 20");
                break;
            default:
                System.out.println("invalid");
        }
    }
}
