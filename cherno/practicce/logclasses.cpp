#include <iostream>
using namespace std;
class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_Log_Level = LogLevelInfo;

public:
    void SetLevel1(int level)
    {
    }
    void Info(const char *message)
    {
        if (m_Log_Level >= LogLevelError)
            cout << "[INFO]" << message << endl;
    }

    void Warn(const char *message)
    {
        if (m_Log_Level >= LogLevelWarning)
            cout << "[warning]" << message << endl;
    }

    void Error(const char *message)
    {
        if (m_Log_Level >= LogLevelInfo)
            cout << "[ERROR]" << message << endl;
    }
};
int main()
{
    Log log;
    log.SetLevel1(log.LogLevelWarning);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    return 0;
}