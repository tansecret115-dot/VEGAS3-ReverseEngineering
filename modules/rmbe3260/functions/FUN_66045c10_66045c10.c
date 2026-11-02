/* Module: rmbe3260.dll
   Function: FUN_66045c10
   Address: 66045c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66045c10(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_c;
  uint local_8;
  
  if ((*(int *)((int)this + 0x52) != 0) && (*(int **)((int)this + 4) != (int *)0x0)) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)((int)this + 4) + 0x20))(&local_c,param_2);
    puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 4) + 0x28))(&local_8);
    if (local_8 != 0) {
      puVar4 = puVar2;
      puVar5 = param_1;
      for (uVar3 = local_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = local_8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    puVar4 = puVar1;
    puVar5 = (undefined4 *)((int)param_1 + local_8);
    for (uVar3 = (local_c & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (local_c = local_c & 3; local_c != 0; local_c = local_c - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    if (puVar1 != (undefined4 *)0x0) {
      operator_delete(puVar1);
    }
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete(puVar2);
    }
    return 0;
  }
  *(undefined4 *)((int)this + 0x487) = 0x80040007;
  return 0x80040007;
}


