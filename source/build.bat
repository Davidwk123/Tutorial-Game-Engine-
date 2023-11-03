@echo off

mkdir ..\build
pushd ..\build
cl -Zi ..\source\Game.cpp user32.lib
popd