/* Module: wavplug.dll
   Function: FUN_5f3c6780
   Address: 5f3c6780
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f3c6780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5f3e18cc == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5f3e18d0 == (FARPROC)0x0) {
    DAT_5f3e18d0 = GetProcAddress(DAT_5f3e18cc,s_KALib_Validate_5f3daf60);
    if (DAT_5f3e18d0 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5f3e18d0)(param_1,param_2,param_3);
  return iVar1;
}


