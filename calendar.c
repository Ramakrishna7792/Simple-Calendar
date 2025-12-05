#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cal {
    int date;
    char day[20];
    char activity[100];
};

struct cal *calendar;
int n;

void create();
void read_entries();
void display();

int main() {
    create();
    read_entries();
    display();

    free(calendar);
    return 0;
}

void create() {
    printf("Enter number of days to record: ");
    scanf("%d", &n);

    calendar = malloc(n * sizeof(struct cal));
    if (!calendar) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Calendar created for %d days.\n", n);
}

void read_entries() {
    for (int i = 0; i < n; i++) {
        printf("\n--- Entry %d ---\n", i + 1);

        printf("Enter date: ");
        scanf("%d", &calendar[i].date);

        printf("Enter day: ");
        scanf("%s", calendar[i].day);

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {}

        printf("Enter activity: ");
        fgets(calendar[i].activity, sizeof(calendar[i].activity), stdin);

        size_t len = strlen(calendar[i].activity);
        if (len > 0 && calendar[i].activity[len - 1] == '\n')
            calendar[i].activity[len - 1] = '\0';
    }
}

void display() {
    printf("\nDate\tDay\tActivity\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%s\n",
               calendar[i].date,
               calendar[i].day,
               calendar[i].activity);
    }
}
