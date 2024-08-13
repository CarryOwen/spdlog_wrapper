#include "hlog.h"
 
int main()
{
    //     //控制台（软件初始化）
	Hlog log;
	log.AddColorConsole("logger1");
	log.Init();
	LOG_DEBUG("logger1", "test data:{}");
	LOG_INFO("logger1", "test data:{}");
	LOG_WARN("logger1", "test data:{}");

	////控制台（配置文件初始化）
	//Hlog log;
	//log.InitConfig(".\\log_rotating_file.json");
	//LOG_DEBUG("logger1", "test data:{}");
	//LOG_INFO("logger1", "test data:{}");
	//LOG_WARN("logger1", "test data:{}");



	//控制台+旋转文件（软件初始化）
	// Hlog log;
	// log.AddColorConsole("logger1");
	// log.AddRotatingFile("logger1", "log/test.log");
	// log.Init();
	// LOG_DEBUG("logger1", "test data:{}");
	// LOG_INFO("logger1", "test data:{}");
	// LOG_WARN("logger1", "test data:{}");


    //cmake如何自动生成编译库的头文件

    return 0;
}