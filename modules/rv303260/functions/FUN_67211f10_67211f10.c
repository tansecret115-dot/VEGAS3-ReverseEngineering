/* Module: rv303260.dll
   Function: FUN_67211f10
   Address: 67211f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_67211f10(_onexit_t param_1)

{
  if (DAT_672168b4 == -1) {
    _onexit(param_1);
    return;
  }
  __dllonexit(param_1,&DAT_672168b4,&DAT_672168b0);
  return;
}


