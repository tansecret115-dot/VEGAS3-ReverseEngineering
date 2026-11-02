/* Module: vegas30.exe
   Function: FUN_00609ce0
   Address: 00609ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00609ce0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0065f618 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_0065f620 == (FARPROC)0x0) {
    DAT_0065f620 = GetProcAddress(DAT_0065f618,s_KALib_Status_006470c8);
    if (DAT_0065f620 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_0065f620)(param_1);
  return iVar1;
}


