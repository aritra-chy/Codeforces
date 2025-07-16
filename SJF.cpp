#include <bits/stdc++.h> 
using namespace std; 
 
struct Process 
{ 
    int id, burstTime, waitingTime, turnaroundTime; 
}; 
 
bool compare(Process a, Process b) 
{ 
    return a.burstTime < b.burstTime; 
} 
 
int main() 
{ 
    int n; 
    cout << "Enter number of processes: "; 
    cin >> n; 
 
    vector<Process> processes(n); 
    int totalWT = 0, totalTAT = 0; 
 
    cout << "Enter burst time for each process:\n"; 
    for (int i = 0; i < n; i++) 
    { 
        cout << "P" << i + 1 << ": "; 
        cin >> processes[i].burstTime; 
        processes[i].id = i + 1; 
    } 
 
    sort(processes.begin(), processes.end(), compare); 
 
    processes[0].waitingTime = 0; 
    for (int i = 1; i < n; i++) 
    { 
        processes[i].waitingTime = processes[i - 1].waitingTime +  
        processes[i - 1].burstTime; 
        totalWT += processes[i].waitingTime; 
    } 
 
    for (int i = 0; i < n; i++) 
    { 
        processes[i].turnaroundTime = processes[i].waitingTime +  
        processes[i].burstTime; 
        totalTAT += processes[i].turnaroundTime; 
    } 
 
    cout << "\nProcess  BT  WT  TAT\n"; 
    for (int i = 0; i < n; i++) 
    { 
        cout << "P" << processes[i].id << "      " <<  
             processes[i].burstTime << "   " 
             << processes[i].waitingTime << "   " <<  
             processes[i].turnaroundTime << endl; 
    } 
 
    cout << "Average Waiting Time: " << (double)totalWT / n <<  
             endl; 
    cout << "Average Turnaround Time: " << (double)totalTAT / n  
    << endl; 
    return 0; 
} 
