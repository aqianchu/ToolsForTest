@echo off
echo "ÇëÊäÈëtagÃû³Æ£º"
set/p xxx=>nul
adb logcat -s %xxx% > log.txt
