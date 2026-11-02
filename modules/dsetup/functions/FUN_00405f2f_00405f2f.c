/* Module: dsetup.dll
   Function: FUN_00405f2f
   Address: 00405f2f
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00405f2f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0040ac6c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_0040ac6c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_0040ac6c != (FARPROC)0x0) {
        DAT_0040ac70 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_0040ac74 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_00405f7e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_00405f7e:
    if (DAT_0040ac70 != (FARPROC)0x0) {
      iVar1 = (*DAT_0040ac70)();
      if ((iVar1 != 0) && (DAT_0040ac74 != (FARPROC)0x0)) {
        iVar1 = (*DAT_0040ac74)(iVar1);
      }
    }
    iVar1 = (*DAT_0040ac6c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


