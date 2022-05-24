//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector> 

#include "string.hpp" 
#include "logentry.hpp"

Date::Date(String tempDate) {
    day = tempDate.substr(1,2);
    month = tempDate.substr(4,6);
    String tempYear = tempDate.substr(8,11);
    year = convertInt(tempYear);
}


Time::Time(String tempTime) {
    String sec = tempTime.substr(19,20);
    second = convertInt(sec);
    String min = tempTime.substr(16,17);
    minute = convertInt(min);
    String hours = tempTime.substr(13,14);
    hour = convertInt(hours);
}


////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES:
//
LogEntry::LogEntry(String s) {
    std::vector<String> vec = s.split(' ');

    if (vec.size() != 10) {
        host = ""; 
        date = Date();
        time = Time();
        request = "";
        status = "";
        number_of_bytes = 0;
    }
    else {   
    host = vec[0];
    date = vec[3];
    time = vec[3];
    request = vec[5].substr(1,vec[5].length());
    status = vec[8];

    String bytes = vec[9];
    number_of_bytes = convertInt(bytes);

    if (vec[9] == "-") {
        number_of_bytes = 0;
    }

    }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    while (!in.eof()) {
		String tempInfo;
        char ch;
        in.get(ch);
        while (ch != '\n') {
            tempInfo = tempInfo + ch;
            in.get(ch);
        }
        result.push_back(tempInfo);
	}	
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> &rhs) {
    int rhsSize = rhs.size();
    for (int i = 0; i < rhsSize - 1; ++i) {
        //out << "Host " << "| " << "Date " << "| " << "Time " << "| " << "Request " << "| " << "Status " << "| " << "Number of Bytes " << std::endl;
        out << rhs[i].getHost() << "| " << rhs[i].getDate().getDay() << " " << rhs[i].getDate().getMonth() << " " << rhs[i].getDate().getYear() << "| " << rhs[i].getTime().getHour() << ":" << rhs[i].getTime().getMinute() << ":" << rhs[i].getTime().getSecond() << "| " << rhs[i].getRequest() << "| " << rhs[i].getStatus() << "| " << rhs[i].getNumberOfBytes() << std::endl;
        //out << "Date: " << rhs[i].getDate().getDay() << " " << rhs[i].getDate().getMonth() << " " << rhs[i].getDate().getYear() << std::endl;
        //out << "Time: " << rhs[i].getTime().getHour() << ":" << rhs[i].getTime().getMinute() << ":" << rhs[i].getTime().getSecond() << std::endl;
        //out << "Request: " << rhs[i].getRequest() << std::endl;
        //out << "Status: " << rhs[i].getStatus() << std::endl;
        //out << "Number of Bytes: " << rhs[i].getNumberOfBytes() << std::endl;
    }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry> &rhs) {
    int rhsSize = rhs.size();
    for (int i = 0; i < rhsSize - 1; ++i) {
        out << rhs[i].getHost();
    }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &rhs) {
    int rhsSize = rhs.size();
    int result = 0;
    for (int i = 0; i < rhsSize - 1; ++i) {
        result = result + rhs[i].getNumberOfBytes();
    }
    return result;
}

int convertInt(String x) {
    int result = 0;
    int multiply = 10;
    int stringLen = x.length();

    for (int i = 0; i < stringLen; ++i) {
        result *= multiply;
        result += x[i] - '0';
    }
        
    return result;
}

 
