@echo off
echo "请输入待卸载apk的包名："
set/p xxx=>nul
adb uninstall %xxx%