/* Module: sftrkfx1.dll
   Function: FUN_5cc01290
   Address: 5cc01290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc01290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5cc17da0 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5cc17da4 == (FARPROC)0x0) {
    DAT_5cc17da4 = GetProcAddress(DAT_5cc17da0,s_KALib_Validate_5cc113d4);
    if (DAT_5cc17da4 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5cc17da4)(param_1,param_2,param_3);
  return iVar1;
}


