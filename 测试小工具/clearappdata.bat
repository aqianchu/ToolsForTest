@echo off
echo 请输入待杀进程的包名：
set/p xxx=>nul
adb shell pm clear %xxx% 
