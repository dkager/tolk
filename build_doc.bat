@echo off
pandoc -s --smart --toc -r markdown -w html5 -o README.html README.md
