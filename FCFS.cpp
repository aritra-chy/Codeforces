#include <iostream> 
#include <vector> 
#include <iomanip> 
using namespace std; 
 
void FCFS() { 
    int n; 
    cout << "Enter number of processes: "; 
    cin >> n; 
    vector<int> BT(n), WT(n), TAT(n); 
    int totalWT = 0, totalTAT = 0; 
 
    cout << "Enter burst time for each process:\n"; 
    for (int i = 0; i < n; i++) { 
        cout << "P" << i + 1 << ": "; 
        cin >> BT[i]; 
    } 
 
    WT[0] = 0; 
    for (int i = 1; i < n; i++) { 
        WT[i] = WT[i - 1] + BT[i - 1]; 
        totalWT += WT[i]; 
    } 
    for (int i = 0; i < n; i++) { 
        TAT[i] = WT[i] + BT[i]; 
        totalTAT += TAT[i]; 
    } 
 
    cout << "\nProcess  Burst Time  Waiting Time  Turnaround Time\n"; 
    for (int i = 0; i < n; i++) { 
        cout << "P" << setw(3) << i + 1 << setw(10) << BT[i] << setw(13) << 
WT[i] << setw(17) << TAT[i] << endl; 
    } 
    cout << fixed << setprecision(2); 
    cout << "\nAverage Waiting Time: " << (double)totalWT / n << " ms\n"; 
    cout << "Average Turnaround Time: " << (double)totalTAT / n << " ms\n"; 
} 
 
int main() { 
    FCFS(); 
    return 0; 
} 