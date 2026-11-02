/* Module: vfplugs.dll
   Function: FUN_00480ab0
   Address: 00480ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00480ab0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0053b260 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_0053b268 == (FARPROC)0x0) {
    DAT_0053b268 = GetProcAddress(DAT_0053b260,s_KALib_Status_00494458);
    if (DAT_0053b268 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_0053b268)(param_1);
  return iVar1;
}


