#include <stdio.h>
#include <string.h>

int main() {
    // Array of person names
    char *persons[] = {
        "Reeta", "Alok", "Manish",
        "Reena", "Suresh", "Divya",
        "Deepali", "Saumya", "Kriti"
    };

    // Corresponding array of cities
    char *cities[] = {
        "Kanpur", "Rampur", "Lucknow",
        "Rampur", "Lucknow", "Kanpur",
        "Lucknow", "Rampur", "Renusagar"
    };

    int n = 9;
    char input[50];
    int found = 0;

    printf("Enter a person name or city name: ");
    scanf("%s", input);

    /* Check if input is a person name */
    for (int i = 0; i < n; i++) {
        if (strcmp(input, persons[i]) == 0) {
            printf("%s lives in %s\n", persons[i], cities[i]);
            found = 1;
            break;
        }
    }

    /* If not a person, check if input is a city */
    if (!found) {
        printf("People living in %s:\n", input);
        for (int i = 0; i < n; i++) {
            if (strcmp(input, cities[i]) == 0) {
                printf("%s\n", persons[i]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No matching person or city found.\n");
    }

    return 0;
}

