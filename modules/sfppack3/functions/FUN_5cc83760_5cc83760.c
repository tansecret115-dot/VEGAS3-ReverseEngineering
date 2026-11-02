/* Module: sfppack3.dll
   Function: FUN_5cc83760
   Address: 5cc83760
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc83760(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5cc9eba0 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5cc9eba4 == (FARPROC)0x0) {
    DAT_5cc9eba4 = GetProcAddress(DAT_5cc9eba0,s_KALib_Validate_5cc97d80);
    if (DAT_5cc9eba4 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5cc9eba4)(param_1,param_2,param_3);
  return iVar1;
}


