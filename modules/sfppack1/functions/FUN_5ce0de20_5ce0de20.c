/* Module: sfppack1.dll
   Function: FUN_5ce0de20
   Address: 5ce0de20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ce0de20(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5ce2a0c8 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5ce2a0d0 == (FARPROC)0x0) {
    DAT_5ce2a0d0 = GetProcAddress(DAT_5ce2a0c8,s_KALib_Status_5ce232b0);
    if (DAT_5ce2a0d0 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5ce2a0d0)(param_1);
  return iVar1;
}


