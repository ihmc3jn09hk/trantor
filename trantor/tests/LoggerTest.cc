#include <trantor/utils/Logger.h>
#include <stdlib.h>
#include <thread>
int main()
{
    LOG_DEBUG<<"debug log!"<<1;
    LOG_TRACE<<"trace log!"<<2;
    LOG_INFO<<"info log!"<<3;
    LOG_WARN<<"warning log!"<<4;
    if(1)
        LOG_ERROR<<"error log!"<<5;
    std::thread thread_([](){
        LOG_FATAL<<"fatal log!"<<6;
    });

    FILE *fp=fopen("/notexistfile","rb");
    if(fp==NULL)
    {
        LOG_SYSERR<<"syserr log!"<<7;
    }
    thread_.join();
}