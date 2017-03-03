@echo off
echo "请输入文件地址"
@set/p xxx= >nul
@adb pull "/sdcard/%xxx%" "%cd%"