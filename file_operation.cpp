#include <bits/stdc++.h>
using namespace std;

int main()
{
    int data_serial;
    std::string data_date;
    int data_time; // Change data_time to int
    int ok, ng, by_pass, cycle_time, idle_time, data_sync_status;
    std::string data_datetime;

    std::ofstream fp("demo.csv");

    if (!fp.is_open())
    {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::string str = "1,2023-01-01,1234,11,ok,2023-01-01 11:04:36";
    int index = 0;
    std::string token;

    std::istringstream ss(str);

    while (getline(ss, token, ','))
    {
        switch (index)
        {
        case 0:
            data_serial = atoi(token.c_str());
            std::cout << "data_serial: " << data_serial << std::endl;
            break;
        case 1:
            data_date = token;
            std::cout << "data_date: " << data_date << std::endl;
            break;
        case 2:
            data_time = atoi(token.c_str()); // Use atoi for data_time
            std::cout << "data_time: " << data_time << std::endl;
            break;
        case 3:
            ok = atoi(token.c_str());
            std::cout << "ok: " << ok << std::endl;
            break;
        case 4:
            ng = atoi(token.c_str());
            std::cout << "ng: " << ng << std::endl;
            break;
        case 5:
            by_pass = atoi(token.c_str());
            std::cout << "by_pass: " << by_pass << std::endl;
            break;
        case 6:
            cycle_time = atoi(token.c_str());
            std::cout << "cycle_time: " << cycle_time << std::endl;
            break;
        case 7:
            idle_time = atoi(token.c_str());
            std::cout << "idle_time: " << idle_time << std::endl;
            break;
        case 8:
            data_datetime = token;
            std::cout << "data_datetime: " << data_datetime << std::endl;
            break;
        case 9:
            data_sync_status = atoi(token.c_str());
            std::cout << "data_sync_status: " << data_sync_status << std::endl;
            break;
        default:
            std::cerr << "Error: Unexpected index value in switch-case." << std::endl;
            break;
        }

        index++;
    }

    return 0;
}