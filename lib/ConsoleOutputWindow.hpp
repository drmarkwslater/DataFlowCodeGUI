#ifndef CONSOLEOUTPUTWINDOW_HPP
#define CONSOLEOUTPUTWINDOW_HPP

#include <string>
#include <vector>
#include <mutex>

class ConsoleOutputWindow 
{
private:
    std::mutex mtx_;
    std::vector<std::string> buffer_;

public:
    ConsoleOutputWindow();

    std::string GetTextBuffer(int num_cols, int num_rows) const;
    void Message(const std::string &msg);
};

#endif
