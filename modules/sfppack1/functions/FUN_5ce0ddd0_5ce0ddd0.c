/* Module: sfppack1.dll
   Function: FUN_5ce0ddd0
   Address: 5ce0ddd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ce0ddd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5ce2a0c8 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5ce2a0cc == (FARPROC)0x0) {
    DAT_5ce2a0cc = GetProcAddress(DAT_5ce2a0c8,s_KALib_Validate_5ce232a0);
    if (DAT_5ce2a0cc == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5ce2a0cc)(param_1,param_2,param_3);
  return iVar1;
}


