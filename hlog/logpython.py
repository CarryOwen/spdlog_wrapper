import sys
# 生成的动态库路径
sys.path.append('hlog/build')
import log_wrapper


logger = log_wrapper.LogWrapper()


logger.AddColorConsole()
logger.AddRotatingFile("hardBridge", "log/hardBridge")

logger.Init()

logger.log_debug("This is a debug message")
logger.log_info("This is a info message")
