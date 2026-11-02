/* Module: rmto3260.dll
   Function: FUN_662e2a30
   Address: 662e2a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662e2a30(int param_1)

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


