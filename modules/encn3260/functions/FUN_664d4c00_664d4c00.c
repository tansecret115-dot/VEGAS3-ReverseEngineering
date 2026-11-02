/* Module: encn3260.dll
   Function: FUN_664d4c00
   Address: 664d4c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664d4c00(int param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 local_c;
  
  uVar1 = **(uint **)(param_1 + 0x10);
  uVar3 = *(uint *)(uVar1 + 4);
  local_c = *(uint *)(*(uint *)(uVar1 + 4) + 4);
  while ((-(uint)(uVar3 != uVar1) & uVar3) != 0) {
    pvVar4 = (void *)(-(uint)(uVar3 != uVar1) & uVar3);
    pvVar2 = *(void **)((int)pvVar4 + 8);
    FUN_664d8100(*(void **)(param_1 + 0x10),(int)pvVar4);
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    uVar3 = local_c;
    local_c = *(uint *)(local_c + 4);
  }
  return 0;
}


