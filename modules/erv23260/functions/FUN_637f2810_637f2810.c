/* Module: erv23260.dll
   Function: FUN_637f2810
   Address: 637f2810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637f2810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 uint param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar2 = param_4;
  puVar1 = param_4;
  if (0 < param_6) {
    param_4 = (undefined4 *)param_6;
    do {
      puVar1 = (undefined4 *)((int)puVar2 + param_5);
      puVar5 = param_1;
      for (uVar3 = param_5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = param_5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + param_7);
      param_4 = (undefined4 *)((int)param_4 + -1);
      puVar2 = puVar1;
    } while (param_4 != (undefined4 *)0x0);
  }
  param_6 = param_6 >> 1;
  uVar3 = (int)param_5 >> 1;
  puVar2 = puVar1;
  param_4 = (undefined4 *)param_6;
  if (0 < param_6) {
    do {
      puVar1 = (undefined4 *)((int)puVar2 + uVar3);
      puVar5 = param_2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      param_2 = (undefined4 *)((int)param_2 + param_7);
      param_4 = (undefined4 *)((int)param_4 + -1);
      puVar2 = puVar1;
    } while (param_4 != (undefined4 *)0x0);
  }
  if (0 < param_6) {
    do {
      puVar2 = param_3;
      puVar5 = puVar1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      param_3 = (undefined4 *)((int)param_3 + param_7);
      param_6 = param_6 + -1;
      puVar1 = (undefined4 *)((int)puVar1 + uVar3);
    } while (param_6 != 0);
  }
  return;
}


