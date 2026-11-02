/* Module: sfmarket2.dll
   Function: FUN_0041f070
   Address: 0041f070
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f070(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_004aae34 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_004aae38 == (FARPROC)0x0) {
    DAT_004aae38 = GetProcAddress(DAT_004aae34,s_KALib_Validate_004a7468);
    if (DAT_004aae38 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_004aae38)(param_1,param_2,param_3);
  return iVar1;
}


