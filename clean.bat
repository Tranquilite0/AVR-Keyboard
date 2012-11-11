@echo off
    for /R "./" %%f in (*.cof,*.elf,*.map,*.sym,*.lss,*.o,*.lst,*.s,*.d,*.i) do (
    del %%f /F /Q
)
del *.hex,*.eep /F /Q
