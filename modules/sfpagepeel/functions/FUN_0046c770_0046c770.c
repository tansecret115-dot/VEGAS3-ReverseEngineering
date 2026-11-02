/* Module: sfpagepeel.dll
   Function: FUN_0046c770
   Address: 0046c770
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046c770(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_004a41c8 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_004a41d0 == (FARPROC)0x0) {
    DAT_004a41d0 = GetProcAddress(DAT_004a41c8,s_KALib_Status_0047d3e0);
    if (DAT_004a41d0 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_004a41d0)(param_1);
  return iVar1;
}


