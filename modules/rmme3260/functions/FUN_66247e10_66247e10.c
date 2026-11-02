/* Module: rmme3260.dll
   Function: FUN_66247e10
   Address: 66247e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66247e10(int param_1)

{
  FUN_662468c0(param_1);
  if (*(void **)(param_1 + 0x42) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x42));
    *(undefined4 *)(param_1 + 0x42) = 0;
  }
  return 0;
}


