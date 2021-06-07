import java.util.List;
import java.util.ArrayList;

public class Primo {
    public static void main(final String[] args) {
        List<Integer> primos = new ArrayList<>();

        for (int n = 2; true; n++) {
            boolean add = true;

            for (int p : primos) {
                if (p > Math.sqrt(n)) {
                    break;
                }

                if (n % p == 0) {
                    add = false;
                    break;
                }
            }

            if (add == true) {
                System.out.println(n);
                primos.add(n);
            }
        }
    }
}
