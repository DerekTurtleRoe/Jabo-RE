# Jabo-RE
Trying to understand Jabo's plugins

## What is this?
This is a repository where I try to understand how Jabo's plugins work, and also an excercise in getting back into general reverse-engineering (PE info, compiler and EXE packing/compression, general RE tools, etc)

## How is this useful to me?
It may not be useful to you, to be honest. This is mostly for me. But if you want to know how plugins for Nintendo 64 emulators work, or are interested in reverse-engineering projects, it may interest you. How useful or not this is to you is sort of relative.

## What is done so far?
Well, so far we know that Jabo's 1.7 graphics plugin was compressed using UPX (specifically version 3.03 if my research is accurate). I have included the decompressed version in this repo. We would assume that Jabo's DirectSound audio plugin was also compressed using UPX, but every version of UPX I have tried gives an error message saying it's been modified. This means either the plugin is encrypted, compressed with another compression algorithm on top of UPX, or modified in some way to prevent tampering. This is somewhat bothersome, as I don't know if it is possible to eventually find out if that version can be decompressed or unencrypted/unpacked/unprotected. So the DirectSound audio plugin may be a lost cause, but I haven't looked into it a whole lot to be fair. I also haven't looked into other earlier/newer versions of the plugin.

As for the 1.6.1 plugins, these seem to be packed and protected by ASProtect and ASPack (specifically ASPack 2.12). This means we have to manually unpack and unprotect them first, then reverse them. Not impossible, but difficult to say the least.

As for the graphics plugin, that is much more interesting. I know that after UPX decompression, it is completely uncompressed and free of encryption/tamper protection. This is good because the raw compiled file can be analyzed. It was compiled using Visual Studio 2003 (.NET) SP1 build 6030 (or possibly build 3052, Visual Studio compiler build numbers are confusing and inaccurate). Other than that, you can take a look at the files in the repo for more information about that plugin.

## Disclaimer
This is purely for educational and informational purposes, and nothing in the repository should be considered fact without proper research and vetting. Basically, have common sense and do your own research, and I very well may be wrong about anything and everything in this repo. :D

## License
I am releasing everything in this repo that is mine to the public domain, take the information as you will and do what you want with it.
