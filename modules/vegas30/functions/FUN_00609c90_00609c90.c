/* Module: vegas30.exe
   Function: FUN_00609c90
   Address: 00609c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00609c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_0065f618 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_0065f61c == (FARPROC)0x0) {
    DAT_0065f61c = GetProcAddress(DAT_0065f618,s_KALib_Validate_006470b8);
    if (DAT_0065f61c == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_0065f61c)(param_1,param_2,param_3);
  return iVar1;
}


