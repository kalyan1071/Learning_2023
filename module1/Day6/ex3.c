#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 256

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[9];
} LogEntry;

LogEntry logEntries[MAX_ENTRIES];
int numEntries = 0;

void readDataFromFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];
    fgets(line, sizeof(line), file);  // Skip the header line

    while (fgets(line, sizeof(line), file) != NULL) {
        LogEntry entry;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &entry.entryNo, entry.sensorNo, &entry.temperature,
            &entry.humidity, &entry.light, entry.time);
        logEntries[numEntries++] = entry;
    }

    fclose(file);
}

void displayLogEntries() {
    if (numEntries == 0) {
        printf("No log entries found.\n");
        return;
    }

    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    for (int i = 0; i < numEntries; i++) {
        LogEntry entry = logEntries[i];
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", entry.entryNo, entry.sensorNo, entry.temperature,
            entry.humidity, entry.light, entry.time);
    }
}

int main() {
    const char* filename = "data.csv";
    readDataFromFile(filename);
    displayLogEntries();

    return 0;
}
