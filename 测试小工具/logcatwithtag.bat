@echo off
echo "������tag���ƣ�"
set/p xxx=>nul
adb logcat -s %xxx% > log.txt
