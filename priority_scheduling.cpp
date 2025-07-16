#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Process
{
    int id, arrivalTime, burstTime, priority, waitingTime, turnaroundTime;
};

bool comparePriority(Process a, Process b)
{
    return a.priority < b.priority;
}

bool compareArrivalTime(Process a, Process b)
{
    return a.arrivalTime < b.arrivalTime;
}

void PriorityScheduling(vector<Process>& processes)
{
    int n = processes.size();
    int totalWT = 0, totalTAT = 0;
    
    // Sort processes by arrival time
    sort(processes.begin(), processes.end(), compareArrivalTime);

    // Sort processes by priority
    sort(processes.begin(), processes.end(), comparePriority);

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

    cout << "\nProcess  Arrival Time  Burst Time  Priority  Waiting Time  Turnaround Time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << setw(3) << processes[i].id
             << setw(14) << processes[i].arrivalTime
             << setw(12) << processes[i].burstTime
             << setw(10) << processes[i].priority
             << setw(14) << processes[i].waitingTime
             << setw(18) << processes[i].turnaroundTime << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << (double)totalWT / n << " ms\n";
    cout << "Average Turnaround Time: " << (double)totalTAT / n << " ms\n";
}

int main()
{
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    vector<Process> processes(n);

    for (int i = 0; i < n; i++)
    {
        processes[i].id = i + 1;
        cout << "Enter Arrival Time, Burst Time, and Priority for P" << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime >> processes[i].priority;
    }

    PriorityScheduling(processes);

    return 0;
}
