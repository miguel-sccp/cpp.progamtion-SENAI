@echo 0f
color 1f
cls
echo digite 1=bom dia 2=boa tarde 3=boa noite
set /p nuumero=digite o numero:
if "%nuumero%"=="1" ( goto :opcao1 ) else if "%nuumero%"=="2" ( goto :opcao2 ) else if "%nuumero%"=="3" ( goto :opcao3 ) else ( goto :opcao4 )
:opcao1
echo Bom Dia 
goto :fim
:opcao2
echo Boa Tarde
goto :fim
:opcao3
echo Boa Noite
goto :fim
:opcao4
echo Numero Invalido
goto :fim
:fim    
pause
color 0f