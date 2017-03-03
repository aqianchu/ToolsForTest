@echo off
echo 请输入应用的包名：
set/p xxx=>nul
adb shell dumpsys meminfo %xxx%
pause