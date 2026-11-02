/* Module: rmbe3260.dll
   Function: FUN_66059a40
   Address: 66059a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66059a40(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
    puVar1 = *(undefined4 **)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_66056360(puVar1);
      operator_delete(puVar1);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return 0;
}


