
# apple-build-issue

Developing an iOS framework project that other apps can use. This repository demonstrates different behaviour being observed while symbolicating crash log for the framework project.

## Steps
* Open CrashTest xcodeprojet.
* Build and install app on physical device in release mode (config aready setup). 
* Remove debugger or exit app from xcode and open again manually directly from the device.
* UI has 2 buttons. Both lead to crash in the framework project (CPP code).
* Crash the app by pressing any one button.
* Get the .ips crash file from the device at this location "Settings -> Privacy And Security -> Analytics And Improvements -> Analytics Data -> CrashTest...ips". Airdrop it to your Mac.
* Get the "CrashTestSDK.framework.dSYM" file from "~/Library/Developer/Xcode/DerivedData/CrashTest-<uid>/Build/Products/Release-iphoneos/CrashTestSDK.framework.dSYM. 
* Symbolicate crash stack trace either using atos command [Atos](https://developer.apple.com/documentation/xcode/adding-identifiable-symbol-names-to-a-crash-report/) or [Mac Symbolicator](https://github.com/inket/MacSymbolicator/releases/tag/2.6)
* The topmost symbol (Framework function) in case of crash caused by "abort()" function will be different from actual function. In case of "bad access" correct function is shown.

## Build Setup/Settings.
* Framework is using few build options to strip off internal symbols.
    * Build PostProcessing - Yes
    * Strip Style - Non-Global Symbols
    * Other Cpp flags - $(OTHER_CFLAGS) -fvisibility-inlines-hidden -fvisibility=hidden
