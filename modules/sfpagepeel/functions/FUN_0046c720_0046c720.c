/* Module: sfpagepeel.dll
   Function: FUN_0046c720
   Address: 0046c720
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046c720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_004a41c8 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_004a41cc == (FARPROC)0x0) {
    DAT_004a41cc = GetProcAddress(DAT_004a41c8,s_KALib_Validate_0047d3d0);
    if (DAT_004a41cc == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_004a41cc)(param_1,param_2,param_3);
  return iVar1;
}


