/* Module: sfppack3.dll
   Function: FUN_5cc837b0
   Address: 5cc837b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc837b0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5cc9eba0 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5cc9eba8 == (FARPROC)0x0) {
    DAT_5cc9eba8 = GetProcAddress(DAT_5cc9eba0,s_KALib_Status_5cc97d90);
    if (DAT_5cc9eba8 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5cc9eba8)(param_1);
  return iVar1;
}


