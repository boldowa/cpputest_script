# CppUTest Project template generator

This scripts is based on CppUTest scripts.


## NewProject

Generate project directory.

### Usage

`NewProject <ProjectName>`


## NewPackage

Generate package directory.

Use it in project directory.

### Usage

`NewPackage <PackageName>`

### gitinit.sh

This script does the following...

- git init
- add cpputest submodule
- build test


## NewClass

Generate C++ class tempate files.

### Usage

`NewClass <ClassName> <PackageName>`


## NewCClass

Generate C class template files.

### Usage

`NewCClass <ClassName> <PackageName>`


## NewFunction

Generate Function template.

### Usage

`NewFunction <FunctionName> <PackageName> (SourceName)`

If you don't specify a **SourceName**, generate it will the same file name as the **FunctionName**.

If the file already exists, it adds function to the file.

