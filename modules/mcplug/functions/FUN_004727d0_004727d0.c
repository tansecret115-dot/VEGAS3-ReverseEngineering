/* Module: mcplug.dll
   Function: FUN_004727d0
   Address: 004727d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004727d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_004ae464 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_004ae468 == (FARPROC)0x0) {
    DAT_004ae468 = GetProcAddress(DAT_004ae464,s_KALib_Validate_00487938);
    if (DAT_004ae468 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_004ae468)(param_1,param_2,param_3);
  return iVar1;
}


