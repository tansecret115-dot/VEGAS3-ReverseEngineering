/* Module: rmto3260.dll
   Function: FUN_662d3020
   Address: 662d3020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662d3020(int param_1)

{
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_662d08d0((undefined4 *)(param_1 + 0x28));
  FUN_662d08d0((undefined4 *)(param_1 + 0x24));
  FUN_662d08d0((undefined4 *)(param_1 + 0x20));
  FUN_662d08d0((undefined4 *)(param_1 + 0x1c));
  FUN_662d08d0((undefined4 *)(param_1 + 0x14));
  FUN_662d08d0((undefined4 *)(param_1 + 0x18));
  return;
}


