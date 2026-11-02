/* Module: vidpcore.dll
   Function: FUN_5df14af0
   Address: 5df14af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5df14af0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5dff1acc == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5dff1ad4 == (FARPROC)0x0) {
    DAT_5dff1ad4 = GetProcAddress(DAT_5dff1acc,s_KALib_Status_5df426b8);
    if (DAT_5dff1ad4 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5dff1ad4)(param_1);
  return iVar1;
}


