/* Module: rv303260.dll
   Function: FUN_672080f0
   Address: 672080f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_672080f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(code **)((int)param_1 + 0x7a) != (code *)0x0) {
    uVar2 = (**(code **)((int)param_1 + 0x7a))(*(undefined4 *)((int)param_1 + 0x9a));
  }
  if (*(void **)((int)param_1 + 0x12a) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x12a));
  }
  if (*(void **)((int)param_1 + 0x12e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x12e));
  }
  FUN_6720c3e0((int)param_1);
  puVar1 = (undefined4 *)param_1[8];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_6720e700(puVar1);
    operator_delete(puVar1);
    param_1[8] = 0;
  }
  (**(code **)(*param_1 + 8))();
  return uVar2;
}


