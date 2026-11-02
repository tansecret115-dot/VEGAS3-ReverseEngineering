/* Module: sfppack2.dll
   Function: FUN_5cd4cca0
   Address: 5cd4cca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd4cca0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5cd764e0 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5cd764e8 == (FARPROC)0x0) {
    DAT_5cd764e8 = GetProcAddress(DAT_5cd764e0,s_KALib_Status_5cd674b8);
    if (DAT_5cd764e8 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5cd764e8)(param_1);
  return iVar1;
}


