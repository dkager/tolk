@echo off
python -O -m py_compile src\python\Tolk.py
move src\python\Tolk.pyo bin\Tolk.pyo
