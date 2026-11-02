/* Module: sfppack2.dll
   Function: FUN_5cd4cc50
   Address: 5cd4cc50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd4cc50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5cd764e0 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5cd764e4 == (FARPROC)0x0) {
    DAT_5cd764e4 = GetProcAddress(DAT_5cd764e0,s_KALib_Validate_5cd674a8);
    if (DAT_5cd764e4 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5cd764e4)(param_1,param_2,param_3);
  return iVar1;
}


