/* Module: sfmarket2.dll
   Function: FUN_0041f0c0
   Address: 0041f0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f0c0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_004aae34 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_004aae3c == (FARPROC)0x0) {
    DAT_004aae3c = GetProcAddress(DAT_004aae34,s_KALib_Status_004a7478);
    if (DAT_004aae3c == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_004aae3c)(param_1);
  return iVar1;
}


