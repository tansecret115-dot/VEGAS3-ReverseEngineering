/* Module: sfxpfx1.dll
   Function: FUN_5c987800
   Address: 5c987800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c987800(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5c99f040 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5c99f048 == (FARPROC)0x0) {
    DAT_5c99f048 = GetProcAddress(DAT_5c99f040,s_KALib_Status_5c998220);
    if (DAT_5c99f048 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5c99f048)(param_1);
  return iVar1;
}


