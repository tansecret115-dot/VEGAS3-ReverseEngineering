/* Module: rn5a3260.dll
   Function: FUN_628a4090
   Address: 628a4090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a4090(int param_1,undefined4 *param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (1 < *(int *)(param_1 + 4)) {
    return 0x80040009;
  }
  if (*(int *)(param_1 + 8) == param_1 + 0x18) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  pvVar1 = *(void **)(param_1 + 8);
  if ((pvVar1 != (void *)0x0) && (*(uint *)(param_1 + 0x10) < param_3)) {
    if ((DAT_628a7360 == (int *)0x0) || (*(int *)(param_1 + 0x14) != 0)) {
      operator_delete(pvVar1);
    }
    else {
      (**(code **)(*DAT_628a7360 + 0x14))(DAT_628a7360,pvVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 8) == 0) {
    if (param_3 < 0x11) {
      *(int *)(param_1 + 8) = param_1 + 0x18;
    }
    else {
      if (DAT_628a7360 == (int *)0x0) {
        pvVar1 = operator_new(param_3);
      }
      else {
        pvVar1 = (void *)(**(code **)(*DAT_628a7360 + 0xc))(DAT_628a7360,param_3);
      }
      *(void **)(param_1 + 8) = pvVar1;
    }
    *(uint *)(param_1 + 0x10) = param_3;
  }
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 0x8007000e;
  }
  puVar3 = *(undefined4 **)(param_1 + 8);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(uint *)(param_1 + 0xc) = param_3;
  return 0;
}


