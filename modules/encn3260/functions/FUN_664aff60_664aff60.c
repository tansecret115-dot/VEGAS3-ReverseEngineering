/* Module: encn3260.dll
   Function: FUN_664aff60
   Address: 664aff60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_664aff60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_664f0860 == 0) {
    DAT_664f0860 = 1;
    _DAT_664f0858 = LoadLibraryA(s_ddraw_dll_664e32f8);
    if (_DAT_664f0858 != (HMODULE)0x0) {
      DAT_664f085c = GetProcAddress(_DAT_664f0858,s_DirectDrawCreate_664e32e4);
    }
  }
  if (DAT_664f085c == (FARPROC)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = (*DAT_664f085c)(param_1,param_2,param_3);
  return iVar1;
}


