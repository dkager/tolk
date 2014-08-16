@echo off
call vcvars32
call build_tolk_x86
call vcvarsx86_amd64
call build_tolk_x64
