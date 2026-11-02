/* Module: mp3plug.dll
   Function: FUN_5f7294a0
   Address: 5f7294a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f7294a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_5f75bbb4 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5f75bbb8 == (FARPROC)0x0) {
    DAT_5f75bbb8 = GetProcAddress(DAT_5f75bbb4,s_KALib_Validate_5f74d1c0);
    if (DAT_5f75bbb8 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5f75bbb8)(param_1,param_2,param_3);
  return iVar1;
}


