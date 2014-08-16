@echo off
python -m compileall ConsoleApp.py
move __pycache__\*.pyc ConsoleApp.pyc
rmdir __pycache__
