@echo off

mkdir ..\build
pushd ..\build
cl -Zi ..\source\win32_Game.cpp
popd