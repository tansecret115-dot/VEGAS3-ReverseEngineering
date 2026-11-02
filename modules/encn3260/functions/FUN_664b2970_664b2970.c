/* Module: encn3260.dll
   Function: FUN_664b2970
   Address: 664b2970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664b2970(int param_1)

{
  FUN_664b1460(param_1);
  if (*(void **)(param_1 + 0x42) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x42));
    *(undefined4 *)(param_1 + 0x42) = 0;
  }
  return 0;
}


