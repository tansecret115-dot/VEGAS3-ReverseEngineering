/* Module: vidcap30.exe
   Function: FUN_00578f00
   Address: 00578f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00578f00(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00663560 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_00663568 == (FARPROC)0x0) {
    DAT_00663568 = GetProcAddress(DAT_00663560,s_KALib_Status_005ba1a0);
    if (DAT_00663568 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_00663568)(param_1);
  return iVar1;
}


