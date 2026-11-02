/* Module: vidpcore.dll
   Function: FUN_5df14aa0
   Address: 5df14aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5df14aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5dff1acc == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5dff1ad0 == (FARPROC)0x0) {
    DAT_5dff1ad0 = GetProcAddress(DAT_5dff1acc,s_KALib_Validate_5df426a8);
    if (DAT_5dff1ad0 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5dff1ad0)(param_1,param_2,param_3);
  return iVar1;
}


