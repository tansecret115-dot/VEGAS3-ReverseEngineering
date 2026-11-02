/* Module: rmbe3260.dll
   Function: FUN_6600ff50
   Address: 6600ff50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6600ff50(int param_1)

{
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}


