/* Module: sfxpfx2.dll
   Function: FUN_5c8d90e0
   Address: 5c8d90e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8d90e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5c8efc98 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5c8efc9c == (FARPROC)0x0) {
    DAT_5c8efc9c = GetProcAddress(DAT_5c8efc98,s_KALib_Validate_5c8e8e48);
    if (DAT_5c8efc9c == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5c8efc9c)(param_1,param_2,param_3);
  return iVar1;
}


