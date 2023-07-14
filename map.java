import java.util.HashMap;
import java.util.Map;

public class mape {
    public static void main(String[] args) {
        Map<String, String> mp = new HashMap<>();
        mp.put("a", "1");
        mp.put("b", "2");
        mp.put("c", "3");
        mp.put("d", "4");
        mp.remove("a");
        mp.replace("c", "3", "9");
        // mp.keySet().removeIf(f -> f.equals("a"));
        System.out.println(mp);
        // System.out.println(mp);
        // Map<String, String> m = new HashMap<>();
        // m.put("a", "1");
        // m.put("b", "2");
        // m.put("c", "3");
        // m.put("e", "4");
        // mp.putAll(m);
        // System.out.println(mp);
        // mp.putIfAbsent("a", "7");
        // mp.putIfAbsent("e", "5");
        // System.out.println(mp);
    }
}
