#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
#include <algorithm> // Added this header for sort function
using namespace std;

struct Process
{
    int id, arrivalTime, burstTime, remainingTime, waitingTime, turnaroundTime, completionTime;
};

void RoundRobin(vector<Process> &processes, int timeQuantum)
{
    int n = processes.size();
    int currentTime = 0, totalWT = 0, totalTAT = 0;
    queue<int> processQueue;
    vector<bool> inQueue(n, false); // To track if a process is already in the queue

    // Sort processes based on arrival time
    sort(processes.begin(), processes.end(), [](Process a, Process b)
         { return a.arrivalTime < b.arrivalTime; });

    // Initialize remaining burst times
    for (int i = 0; i < n; i++)
    {
        processes[i].remainingTime = processes[i].burstTime;
    }

    int index = 0; // To track next process that needs to enter the queue

    // Enqueue first process if it has arrived
    if (processes[index].arrivalTime <= currentTime)
    {
        processQueue.push(index);
        inQueue[index] = true;
        index++;
    }

    while (!processQueue.empty())
    {
        int i = processQueue.front();
        processQueue.pop();

        if (processes[i].remainingTime > timeQuantum)
        {
            currentTime += timeQuantum;
            processes[i].remainingTime -= timeQuantum;
        }
        else
        {
            currentTime += processes[i].remainingTime;
            processes[i].remainingTime = 0;
            processes[i].completionTime = currentTime;
        }

        // Check and enqueue processes that have arrived during execution
        while (index < n && processes[index].arrivalTime <= currentTime)
        {
            if (!inQueue[index])
            {
                processQueue.push(index);
                inQueue[index] = true;
            }
            index++;
        }

        // Re-enqueue the process if it's not completed
        if (processes[i].remainingTime > 0)
        {
            processQueue.push(i);
        }
    }

    // Calculate turnaround time and waiting time
    for (int i = 0; i < n; i++)
    {
        processes[i].turnaroundTime = processes[i].completionTime - processes[i].arrivalTime;
        processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;
        totalWT += processes[i].waitingTime;
        totalTAT += processes[i].turnaroundTime;
    }

    // Print results
    cout << "\nProcess  Arrival Time  Burst Time  Waiting Time  Turnaround Time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << setw(3) << processes[i].id
             << setw(14) << processes[i].arrivalTime
             << setw(12) << processes[i].burstTime
             << setw(14) << processes[i].waitingTime
             << setw(18) << processes[i].turnaroundTime << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << (double)totalWT / n << " ms\n";
    cout << "Average Turnaround Time: " << (double)totalTAT / n << " ms\n";
}

int main()
{
    int n, timeQuantum;
    cout << "Enter number of processes: ";
    cin >> n;
    vector<Process> processes(n);

    for (int i = 0; i < n; i++)
    {
        processes[i].id = i + 1;
        cout << "Enter Arrival Time and Burst Time for P" << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
    }

    cout << "Enter Time Quantum: ";
    cin >> timeQuantum;

    RoundRobin(processes, timeQuantum);

    return 0;
}
