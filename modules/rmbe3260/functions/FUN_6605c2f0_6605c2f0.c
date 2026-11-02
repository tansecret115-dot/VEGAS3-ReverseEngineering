/* Module: rmbe3260.dll
   Function: FUN_6605c2f0
   Address: 6605c2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605c2f0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (1 < *(int *)(param_1 + 4)) {
    return 0x80040009;
  }
  if (*(uint *)(param_1 + 0x10) < param_2) {
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (param_2 < 0x11) {
      puVar2 = (undefined4 *)(param_1 + 0x18);
    }
    else if (DAT_660756d4 == (int *)0x0) {
      puVar2 = operator_new(param_2);
    }
    else {
      puVar2 = (undefined4 *)(**(code **)(*DAT_660756d4 + 0xc))(DAT_660756d4,param_2);
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 8) = puVar1;
      return 0x8007000e;
    }
    if (puVar1 != (undefined4 *)0x0) {
      uVar4 = *(uint *)(param_1 + 0xc);
      puVar5 = puVar1;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      if (puVar1 != (undefined4 *)(param_1 + 0x18)) {
        if ((DAT_660756d4 != (int *)0x0) && (*(int *)(param_1 + 0x14) == 0)) {
          (**(code **)(*DAT_660756d4 + 0x14))(DAT_660756d4,puVar1);
          *(undefined4 *)(param_1 + 0x14) = 0;
          *(uint *)(param_1 + 0x10) = param_2;
          *(uint *)(param_1 + 0xc) = param_2;
          return 0;
        }
        operator_delete(puVar1);
      }
    }
    *(uint *)(param_1 + 0x10) = param_2;
  }
  *(uint *)(param_1 + 0xc) = param_2;
  return 0;
}


