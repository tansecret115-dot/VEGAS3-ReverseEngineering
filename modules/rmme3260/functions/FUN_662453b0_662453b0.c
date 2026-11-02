/* Module: rmme3260.dll
   Function: FUN_662453b0
   Address: 662453b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_662453b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_6627d068 == 0) {
    DAT_6627d068 = 1;
    _DAT_6627d060 = LoadLibraryA(s_ddraw_dll_6626fdd8);
    if (_DAT_6627d060 != (HMODULE)0x0) {
      DAT_6627d064 = GetProcAddress(_DAT_6627d060,s_DirectDrawCreate_6626fdc4);
    }
  }
  if (DAT_6627d064 == (FARPROC)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = (*DAT_6627d064)(param_1,param_2,param_3);
  return iVar1;
}


