/* Module: mp3rw.dll
   Function: FUN_0041b1a0
   Address: 0041b1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041b1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_004a9664 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_004a9668 == (FARPROC)0x0) {
    DAT_004a9668 = GetProcAddress(DAT_004a9664,s_KALib_Validate_004a5be8);
    if (DAT_004a9668 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_004a9668)(param_1,param_2,param_3);
  return iVar1;
}


