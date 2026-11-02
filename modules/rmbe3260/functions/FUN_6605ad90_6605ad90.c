/* Module: rmbe3260.dll
   Function: FUN_6605ad90
   Address: 6605ad90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605ad90(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x54) != 0) {
    param_1 = *(int *)(param_1 + 0x48);
    while (param_1 != 0) {
      puVar3 = (undefined4 *)FUN_6605c5e0(&param_1);
      pvVar1 = (void *)*puVar3;
      if (pvVar1 != (void *)0x0) {
        FUN_6605b280((int)pvVar1);
        operator_delete(pvVar1);
      }
    }
    (**(code **)(*(int *)(iVar2 + 0x44) + 8))();
  }
  return 0;
}


