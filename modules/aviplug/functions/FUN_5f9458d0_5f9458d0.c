/* Module: aviplug.dll
   Function: FUN_5f9458d0
   Address: 5f9458d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f9458d0(int param_1,undefined4 *param_2,uint param_3,uint *param_4,undefined4 *param_5,
            uint param_6,uint *param_7)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (puVar3 != (undefined4 *)0x0) {
    if (*(undefined4 **)(param_1 + 0x60) == (undefined4 *)0x0) {
      if (*(undefined4 **)(param_1 + 0x5c) == (undefined4 *)0x0) {
        uVar1 = *(uint *)(param_1 + 0x18);
        puVar2 = (undefined4 *)(param_1 + 0x1c);
      }
      else {
        uVar1 = *(uint *)(param_1 + 100);
        puVar2 = (undefined4 *)(param_1 + 0x6c);
        puVar3 = *(undefined4 **)(param_1 + 0x5c);
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 100);
      puVar2 = (undefined4 *)(param_1 + 0x6c);
      puVar3 = *(undefined4 **)(param_1 + 0x60);
    }
    if (param_2 == (undefined4 *)0x0) {
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar1;
      }
    }
    else {
      if (uVar1 <= param_3) {
        param_3 = uVar1;
      }
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = param_3;
      }
    }
    if (param_5 == (undefined4 *)0x0) {
      if (param_7 != (uint *)0x0) {
        *param_7 = 0x40;
        return 0;
      }
    }
    else {
      if (0x3f < param_6) {
        param_6 = 0x40;
      }
      for (uVar1 = param_6 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_5 = *puVar2;
        puVar2 = puVar2 + 1;
        param_5 = param_5 + 1;
      }
      for (uVar1 = param_6 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)param_5 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
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


