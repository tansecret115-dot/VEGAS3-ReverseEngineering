/* Module: mpegin.dll
   Function: FUN_10013c85
   Address: 10013c85
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10013c85(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1001c560 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1001c560 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1001c560 != (FARPROC)0x0) {
        DAT_1001c564 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1001c568 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10013cd4;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10013cd4:
    if (DAT_1001c564 != (FARPROC)0x0) {
      iVar1 = (*DAT_1001c564)();
      if ((iVar1 != 0) && (DAT_1001c568 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1001c568)(iVar1);
      }
    }
    iVar1 = (*DAT_1001c560)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


