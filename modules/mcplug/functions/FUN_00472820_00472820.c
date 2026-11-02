/* Module: mcplug.dll
   Function: FUN_00472820
   Address: 00472820
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00472820(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_004ae464 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_004ae46c == (FARPROC)0x0) {
    DAT_004ae46c = GetProcAddress(DAT_004ae464,s_KALib_Status_00487948);
    if (DAT_004ae46c == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_004ae46c)(param_1);
  return iVar1;
}


