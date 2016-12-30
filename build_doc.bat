@echo off

pandoc -s --smart -r markdown -w html5 -o README.html README.md
