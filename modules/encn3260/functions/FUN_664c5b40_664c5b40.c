/* Module: encn3260.dll
   Function: FUN_664c5b40
   Address: 664c5b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_664c5b40(short param_1)

{
  undefined4 *puVar1;
  
  if (DAT_664f2a28 != 0) {
    if (param_1 == 1) {
      puVar1 = operator_new(0x7c);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_664c59c0(puVar1);
        *puVar1 = &PTR_FUN_664dfb00;
        return puVar1;
      }
    }
    else if ((param_1 == 2) && (puVar1 = operator_new(0x7c), puVar1 != (undefined4 *)0x0)) {
      FUN_664c59c0(puVar1);
      *puVar1 = &PTR_FUN_664dfb88;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}


