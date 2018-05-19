@echo off

pandoc -s --toc -M title=Tolk -M author="Davy Kager" -r markdown -w html5 -o README.html README.md
