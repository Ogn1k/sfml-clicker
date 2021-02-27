g++ main.cpp res\Resource.res -o test.exe -lwinmm
if errorlevel 1 goto fail
 
::a.out
goto success
 
:fail
pause
exit
 
:success
timeout /t 2