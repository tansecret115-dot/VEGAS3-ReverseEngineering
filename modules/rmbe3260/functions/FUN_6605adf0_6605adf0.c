/* Module: rmbe3260.dll
   Function: FUN_6605adf0
   Address: 6605adf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605adf0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    param_1 = *(int *)(param_1 + 0x34);
    while (param_1 != 0) {
      puVar1 = (undefined4 *)FUN_6605c5e0(&param_1);
      if ((void *)*puVar1 != (void *)0x0) {
        operator_delete((void *)*puVar1);
      }
    }
  }
  return 0;
}


