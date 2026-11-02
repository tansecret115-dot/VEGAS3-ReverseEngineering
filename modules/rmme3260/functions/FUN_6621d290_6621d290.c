/* Module: rmme3260.dll
   Function: FUN_6621d290
   Address: 6621d290
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6621d290(int param_1)

{
  if (*(void **)(param_1 + 0x5e) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x5e));
    *(undefined4 *)(param_1 + 0x5e) = 0;
  }
  if (*(void **)(param_1 + 0x62) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x62));
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  return;
}


