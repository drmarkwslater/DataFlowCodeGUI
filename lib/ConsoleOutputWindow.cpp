#include "ConsoleOutputWindow.hpp"

ConsoleOutputWindow::ConsoleOutputWindow()
{

}

std::string ConsoleOutputWindow::GetTextBuffer(int /*num_cols*/, int /*num_rows*/) const
{
    // loop over the current buffer and send back the last required number of rows
    std::string text;
    for (auto const& ln : buffer_)
    {
        text += (ln + "\n");
    }

    return text;
}

void ConsoleOutputWindow::Message(const std::string &msg)
{
    // add this message to the buffer
    buffer_.push_back(msg);
}