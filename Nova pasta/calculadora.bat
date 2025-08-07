@echo off
:inicio
cls
color 1e
echo  Calculadora 
set /p n1=Digite o primeiro numero:
set /p n2=Digite o segundo numero:
set /a soma=%n1%+%n2%
echo A soma é: %soma%
set /a sub=%n1%-%n2%
echo A subtração é: %sub%
set /a mult=%n1%*%n2%
echo A multiplicação é: %mult%
set /a div=%n1%/%n2%
echo A divisão é: %div%
echo.
set/p escolha =Deseja fazer outra operação? (s/n):
if /i "%escolha%"=="s" goto :inicio
if /i "%escolha%"=="n" goto :fim
pause
:fim
color 0f
cls