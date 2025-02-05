#include <stdio.h>

// Function to calculate the peak output
int solve(int N, int workload[]) {
    int max_peak = 0;
    int current_peak = 0;

    for (int i = 0; i < N; i++) {
        if (workload[i] > 6) {
            current_peak++;
            if (current_peak > max_peak) {
                max_peak = current_peak;
            }
        } else {
            current_peak = 0;
        }
    }

    return max_peak;
}

int main() {
    int N;
    
    // Read the number of working days
    scanf("%d", &N);
    
    int workload[N];
    
    // Read the workload for each day
    for (int i = 0; i < N; i++) {
        scanf("%d", &workload[i]);
    }
    
    // Calculate and print the peak output
    printf("%d\n", solve(N, workload));
    
    return 0;
}
