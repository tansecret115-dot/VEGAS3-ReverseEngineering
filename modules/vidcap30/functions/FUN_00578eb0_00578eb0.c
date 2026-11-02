/* Module: vidcap30.exe
   Function: FUN_00578eb0
   Address: 00578eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00578eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_00663560 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_00663564 == (FARPROC)0x0) {
    DAT_00663564 = GetProcAddress(DAT_00663560,s_KALib_Validate_005ba190);
    if (DAT_00663564 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_00663564)(param_1,param_2,param_3);
  return iVar1;
}


