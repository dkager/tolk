@echo off
call build_jni
call build_dotnet_on_amd64
call build_python
call build_tolk_on_amd64
call build_doc
call build_zip
