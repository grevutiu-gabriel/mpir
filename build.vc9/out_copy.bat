if not exist %2 ( echo creating directory %2 && md %2 > nul)
if exist %1     ( echo copying %1 to %2 && copy %1 %2 > nul) else ( echo %1 not found )
