/* Module: sfxpfx2.dll
   Function: FUN_5c8d9130
   Address: 5c8d9130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8d9130(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5c8efc98 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5c8efca0 == (FARPROC)0x0) {
    DAT_5c8efca0 = GetProcAddress(DAT_5c8efc98,s_KALib_Status_5c8e8e58);
    if (DAT_5c8efca0 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5c8efca0)(param_1);
  return iVar1;
}


