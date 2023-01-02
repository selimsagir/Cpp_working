// ClassApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//#define LOG(x) std::cout << x << std:endl

//class Player {
//public:
//    int x, y;
//    int speed;
//
//    void Move( int xa, int ya) { // does not need Player& player, anymore
//        x += xa * speed;
//        y += ya * speed;
//    }
//
//};

//void Move(Player& player, int xa, int ya) {
//    player.x += xa * player.speed;
//    player.y += ya * player.speed;
//}

class Log
{
public:
    enum Level
    {
        LevelError = 0, 
        LevelWarning,
        LevelInfo
    };

    //const int LogLevelError = 0;
    //const int LogLevelWarning = 1;
    //const int LogLevelInfo = 2;

private:
    Level m_LogLevel = LevelInfo;
public:
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }
    
    void Warn(const char* msg)
    {
        if(m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]:  " << msg << std::endl;
    }
    void Info(const char* msg)
    {
        if (m_LogLevel >= LevelInfo)
        std::cout << "[INFO]:  " << msg << std::endl;
    }
    void Error(const char* msg)
    {
        if (m_LogLevel >= LevelError)
        std::cout << "[ERROR]:  " << msg << std::endl;
    }
};




int main()
{
    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello");
    log.Error("Hello");
    log.Info("Hello");
    std::cin.get();
}

