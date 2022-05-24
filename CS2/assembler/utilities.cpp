#include "utilities.hpp"

String infixToPostfix(std::ifstream& input, std::ostream& output) {
    char token[400];
    String currentToken, right, oper, left;
    stack<String> holder; 

    while(!input.eof()) {
        
        input >> token;
        currentToken = token;

        
        output << currentToken << " ";
        
        
        if(input.eof()) break;

        if (currentToken == ";") {
            return holder.top();
            
        } else if (currentToken == ")") {
            right = holder.pop();
            oper = holder.pop();
            left = holder.pop();
            holder.push(left + right + oper);

        } else {
            if (currentToken != "(") {
                holder.push(currentToken + ' ');
            }
        }
        
    }
    return ""; // used to get rid of error
}

String toAssembly(String expr) {
    
    if (expr == "") return "String is empty. ";
    
    stack<String> holder;
    String left, right, oper, result;
    String currentEval;
    int tmpCounter = 1;

    std::vector<String> exprHolder = expr.split(' ');

    for (size_t i = 0; i < exprHolder.size(); ++i) {
        String currentToken = exprHolder[i];
        if (currentToken != "+" && currentToken != "-" && currentToken != "*" && currentToken != "/") {
            holder.push(currentToken);
        } else {
            right = holder.pop();
            left = holder.pop(); 
            currentEval += evaluate(left, right, exprHolder[i], tmpCounter);
            holder.push("TMP" + intToString(tmpCounter));
            tmpCounter++;
        }
        //std::cout << holder.top() << std::endl;
    }
    return currentEval;
}

String opcodes(String oper) {
    if (oper == "+") {
        return "AD";
    } else if (oper == "*") {
        return "MU";
    } else if (oper == "-") {
        return "SB";
    } else if (oper == "/") {
        return "DV";
    } else {
        return "Invalid input " + oper;
    }

}

String evaluate(String& left, String& right, String& oper, int temp) {
    String NUM = intToString(temp);
    return "    LD     " + left + "\n" 
    + "    " + opcodes(oper) + "     " + right + "\n"
    + "    ST     " + "TMP" + NUM + "\n";
}

String intToString(int num) {
    if (!num) {
        return "0";
    }

    String result;

    do {
        result += (num % 10 + 48);
        num /= 10;
    } while (num > 0);

    return result;
}

