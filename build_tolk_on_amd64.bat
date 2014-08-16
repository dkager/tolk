@echo off
call vcvars32
call build_tolk_x86
call vcvars64
call build_tolk_x64
