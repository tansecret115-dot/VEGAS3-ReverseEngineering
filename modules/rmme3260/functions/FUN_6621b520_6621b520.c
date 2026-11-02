/* Module: rmme3260.dll
   Function: FUN_6621b520
   Address: 6621b520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6621b520(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(void **)(param_1 + 0x1a) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x1a));
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x26) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x26));
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  FUN_66268160();
  return;
}


