@echo off
color 1e
cls
echo Cadastro
set /p nome=Digite o nome:
echo Digite a letra para genero H ou M:
set /p sexo=Digite o genero:
if /i "%sexo%"=="H" (
    echo O nome digitado foi %nome%
    echo O genero Masculino
) else if /i "%sexo%"=="M" (
    echo O nome digitado foi %nome%
    echo O genero Feminino
) else (
    echo O genero é invalido nesse sistema
)
pause
color 0f
cls
