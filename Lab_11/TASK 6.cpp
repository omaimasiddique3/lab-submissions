#include <stdio.h>

#define TOLL_RATE 50 

void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static float totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("Vehicle Processed: %s | Fee Charged: %d PKR\n", vehicleType, TOLL_RATE);
    printf("-> Running Total Vehicles: %d | Total Daily Revenue: %.2f PKR\n\n", totalVehicles, totalRevenue);
}

int main() {
    printf("=== Automated Highway Toll Booth System ===\n\n");

    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Motorcycle");
    processVehicle("Bus");

    printf("All vehicle processing events completed successfully.\n");

    return 0;
}
