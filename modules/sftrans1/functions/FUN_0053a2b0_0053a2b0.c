/* Module: sftrans1.dll
   Function: FUN_0053a2b0
   Address: 0053a2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0053a2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_00622464 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_00622468 == (FARPROC)0x0) {
    DAT_00622468 = GetProcAddress(DAT_00622464,s_KALib_Validate_005768a8);
    if (DAT_00622468 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_00622468)(param_1,param_2,param_3);
  return iVar1;
}


