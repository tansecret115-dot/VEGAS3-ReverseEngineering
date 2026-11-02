/* Module: pncrt.dll
   Function: FUN_7800cdc0
   Address: 7800cdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_7800cdc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_78042418 != (FARPROC)0x0) {
LAB_7800ce10:
    if (DAT_7804241c != (FARPROC)0x0) {
      iVar1 = (*DAT_7804241c)();
    }
    if ((iVar1 != 0) && (DAT_78042420 != (FARPROC)0x0)) {
      iVar1 = (*DAT_78042420)(iVar1);
    }
    iVar1 = (*DAT_78042418)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_78042418 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_78042418 != (FARPROC)0x0) {
      DAT_7804241c = GetProcAddress(hModule,"GetActiveWindow");
      DAT_78042420 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_7800ce10;
    }
  }
  return 0;
}


