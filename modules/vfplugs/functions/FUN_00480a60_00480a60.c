/* Module: vfplugs.dll
   Function: FUN_00480a60
   Address: 00480a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00480a60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_0053b260 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_0053b264 == (FARPROC)0x0) {
    DAT_0053b264 = GetProcAddress(DAT_0053b260,s_KALib_Validate_00494448);
    if (DAT_0053b264 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_0053b264)(param_1,param_2,param_3);
  return iVar1;
}


