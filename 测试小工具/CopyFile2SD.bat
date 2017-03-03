@echo off
echo 输入文件地址：
set /p xxx=>nul
@adb push %xxx% /sdcard/