@echo off
echo 请输入文件路径：
set /p xxx=>nul
adb shell cat /sdcard/%xxx%

pause