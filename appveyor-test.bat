metaeditor /s /compile:. /inc:.. /log:appveyor-test.log
type appveyor-test.log
type appveyor-test.log | findstr /r /c:"Result [1-9][0-9]* error(s), [1-9][0-9]* warning(s)" > nul
if %errorlevel% neq 0 (exit /b 0) else (exit /b 1)
