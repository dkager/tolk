@echo off
python -m compileall src\python\Tolk.py
move src\python\__pycache__\Tolk*.pyc bin\Tolk.pyc
rmdir src\python\__pycache__
