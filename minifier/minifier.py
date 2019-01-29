# -*- coding: utf-8 -*-
import sys, os, requests

try:
    sourceFileFullName = os.path.abspath(sys.argv[1])
    sourceFileName = sourceFileFullName.replace("/","\\").split("\\")[-1]
except:
    print("Missing input file")
    sys.exit()

try:
    sourceFileType = sys.argv[2].lower()
    if sourceFileType != 'js' or sourceFileType != 'css':
        print("Invalid source file type! The only valid ones are js and css.")
        sys.exit()
except:
    if sourceFileName.find(".js") != -1:
        sourceFileType = 'js'
    elif sourceFileName.find(".css") != -1:
        sourceFileType = 'css'
    else:
        print("Couldn't determine source file type. PLEASE SPECIFY IT!")
        sys.exit()

# Grab the file contents
with open(sourceFileFullName, 'r') as sourceFile:
    source = sourceFile.read()

# Pack it, ship it    
urlJS = 'https://javascript-minifier.com/raw'
urlCSS = "https://cssminifier.com/raw"
payload = {'input': source}

if sourceFileType == 'js':
    print(f"Requesting JavaScript minification of {sourceFile.name} ...")
    request = requests.post(urlJS, payload)
else:       # sourceFileType == 'css'
    print(f"Requesting CSS minification of {sourceFile.name} ...")
    request = requests.post(urlCSS, payload)


# Write out minified version
dotIndexInFileName = sourceFileName.rfind('.')
if dotIndexInFileName != -1:
    sourceFileNameLength = len(sourceFileName)
    sourceFileNamePrefixLength = len(sourceFileFullName) - sourceFileNameLength
    dotIndexinFullFileName = sourceFileNamePrefixLength + dotIndexInFileName
    minifiedFileFullName = sourceFileFullName[:dotIndexinFullFileName] + '.min' + sourceFileFullName[dotIndexinFullFileName:]
else:
    minifiedFileFullName = sourceFileFullName + '.min'

with open(minifiedFileFullName, 'w') as minifiedFile:
    minifiedFile.write(request.text)

print(f"Minification complete. See {minifiedFile.name}")
