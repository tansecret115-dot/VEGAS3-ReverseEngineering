/* Module: rv303260.dll
   Function: FUN_67208d30
   Address: 67208d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67208d30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_672132d8;
  if (param_1 != (undefined4 *)0x0) {
    FUN_672081c0();
    FUN_67205d30(param_1);
    return;
  }
  FUN_672081c0();
  FUN_67205d30((undefined4 *)0x0);
  return;
}


