@echo off
echo ������Ӧ�õİ�����
set/p xxx=>nul
adb shell dumpsys meminfo %xxx%
pause