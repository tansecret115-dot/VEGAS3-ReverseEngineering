/* Module: mcplugrw.dll
   Function: FUN_0041b1f0
   Address: 0041b1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041b1f0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_004a9664 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_004a966c == (FARPROC)0x0) {
    DAT_004a966c = GetProcAddress(DAT_004a9664,s_KALib_Status_004a5bf8);
    if (DAT_004a966c == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_004a966c)(param_1);
  return iVar1;
}


