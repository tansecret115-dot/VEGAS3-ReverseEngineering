/* Module: pngu3266.dll
   Function: FUN_6061f6a0
   Address: 6061f6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061f6a0(int param_1)

{
  if (*(void **)(param_1 + 0x1002c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x1002c));
    *(undefined4 *)(param_1 + 0x1002c) = 0;
  }
  return;
}


