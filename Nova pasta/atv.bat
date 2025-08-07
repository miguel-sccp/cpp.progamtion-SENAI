echo off
color 0e
echo dias da semana
echo. 
:inicio
set/p dia=digite o dia da semana (1-7):
if "%dia%"=="1" ( goto :domingo ) else if "%dia%"=="2" ( goto :segunda ) else if "%dia%"=="3" ( goto :terca ) 
else if "%dia%"=="4" ( goto :quarta ) else if "%dia%"=="5" ( goto :quinta ) else if "%dia%"=="6" ( goto :sexta )
else if "%dia%"=="7" ( goto :sabado ) else( goto :dia_nao_existente )
echo.
:domingo
echo Domingo
pause
goto :inicio
:segunda
echo Segunda-feira
goto :inicio
:terca
echo Terça-feira
goto :inicio
:quarta
echo Quarta-feira
pause
goto :inicio
:quinta
echo Quinta-feira
goto :inicio
:sexta
echo Sexta-feira
goto :inicio
:sabado
echo Sábado
goto :inicio
:dia_nao_existente
echo Dia não existente
goto :inicio
pause
color 0f
cls


