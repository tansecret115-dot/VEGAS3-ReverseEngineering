/* Module: mp3plug.dll
   Function: FUN_5f7294f0
   Address: 5f7294f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f7294f0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5f75bbb4 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5f75bbbc == (FARPROC)0x0) {
    DAT_5f75bbbc = GetProcAddress(DAT_5f75bbb4,s_KALib_Status_5f74d1d0);
    if (DAT_5f75bbbc == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5f75bbbc)(param_1);
  return iVar1;
}


