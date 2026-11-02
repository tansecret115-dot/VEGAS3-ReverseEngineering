/* Module: mpgmux.dll
   Function: FUN_1001355d
   Address: 1001355d
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1001355d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1001b160 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1001b160 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1001b160 != (FARPROC)0x0) {
        DAT_1001b164 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1001b168 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100135ac;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100135ac:
    if (DAT_1001b164 != (FARPROC)0x0) {
      iVar1 = (*DAT_1001b164)();
      if ((iVar1 != 0) && (DAT_1001b168 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1001b168)(iVar1);
      }
    }
    iVar1 = (*DAT_1001b160)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


