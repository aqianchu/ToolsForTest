@echo off
echo 请输入应用包名：
set/p xxx=>nul
adb shell am force-stop %xxx%
