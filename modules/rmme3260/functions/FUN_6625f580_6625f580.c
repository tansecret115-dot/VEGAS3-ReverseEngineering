/* Module: rmme3260.dll
   Function: FUN_6625f580
   Address: 6625f580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6625f580(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


