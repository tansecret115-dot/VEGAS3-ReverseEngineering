/* Module: enlv3260.dll
   Function: FUN_661d4120
   Address: 661d4120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_661d4120(_onexit_t param_1)

{
  if (DAT_661d63a0 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_661d63a0,&DAT_661d639c);
  return;
}


