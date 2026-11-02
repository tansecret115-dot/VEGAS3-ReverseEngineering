/* Module: sfxpfx1.dll
   Function: FUN_5c9877b0
   Address: 5c9877b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c9877b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5c99f040 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5c99f044 == (FARPROC)0x0) {
    DAT_5c99f044 = GetProcAddress(DAT_5c99f040,s_KALib_Validate_5c998210);
    if (DAT_5c99f044 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5c99f044)(param_1,param_2,param_3);
  return iVar1;
}


