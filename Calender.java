import java.util.Scanner;

class CalendarEntry {
    int date;
    String day;
    String activity;
}

public class Calender{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of days to record: ");
        int n = sc.nextInt();
        sc.nextLine();

        CalendarEntry[] entries = new CalendarEntry[n];

        for (int i = 0; i < n; i++) {
            entries[i] = new CalendarEntry();
            System.out.println("\n--- Entry " + (i + 1) + " ---");

            System.out.print("Enter date: ");
            entries[i].date = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter day: ");
            entries[i].day = sc.nextLine().trim();

            System.out.print("Enter activity: ");
            entries[i].activity = sc.nextLine().trim();
        }

        System.out.println("\nDate\tDay\tActivity");
        for (int i = 0; i < n; i++) {
            System.out.printf("%d\t%s\t%s\n",
                    entries[i].date,
                    entries[i].day,
                    entries[i].activity);
        }

        sc.close();
    }
}
