/* Module: aviplug.dll
   Function: FUN_5f947fd0
   Address: 5f947fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f947fd0(int param_1,undefined4 *param_2,uint param_3,uint *param_4,undefined4 *param_5,
            uint param_6,uint *param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = 0;
  }
  puVar4 = *(undefined4 **)(param_1 + 8);
  if (puVar4 != (undefined4 *)0x0) {
    if (*(undefined4 **)(param_1 + 0x30) == (undefined4 *)0x0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      puVar1 = (undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x34);
      puVar1 = (undefined4 *)(param_1 + 0x38);
      puVar4 = *(undefined4 **)(param_1 + 0x30);
    }
    if (param_2 == (undefined4 *)0x0) {
      if (param_4 != (uint *)0x0) {
        if (uVar3 < 0x13) {
          uVar3 = 0x12;
        }
        *param_4 = uVar3;
      }
    }
    else {
      if (uVar3 < param_3) {
        puVar5 = (undefined4 *)(uVar3 + (int)param_2);
        for (uVar2 = param_3 - uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (uVar2 = param_3 - uVar3 & 3; param_3 = uVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      }
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = param_3;
      }
    }
    if (param_5 == (undefined4 *)0x0) {
      if (param_7 != (uint *)0x0) {
        *param_7 = 0x20;
        return 0;
      }
    }
    else {
      if (0x1f < param_6) {
        param_6 = 0x20;
      }
      for (uVar3 = param_6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_5 = *puVar1;
        puVar1 = puVar1 + 1;
        param_5 = param_5 + 1;
      }
      for (uVar3 = param_6 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_5 = *(undefined1 *)puVar1;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
        param_5 = (undefined4 *)((int)param_5 + 1);
      }
      if (param_7 != (uint *)0x0) {
        *param_7 = param_6;
      }
    }
    return 0;
  }
  return 0x8000ffff;
}


