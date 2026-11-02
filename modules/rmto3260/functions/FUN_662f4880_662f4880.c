/* Module: rmto3260.dll
   Function: FUN_662f4880
   Address: 662f4880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662f4880(int *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = param_1[4] + param_3 * 8;
  uVar1 = (uint)param_1[4] >> 3 & 0x3f;
  param_1[4] = uVar2;
  if (uVar2 < param_3 * 8) {
    param_1[5] = param_1[5] + 1;
  }
  uVar2 = -uVar1 + 0x40;
  param_1[5] = param_1[5] + (param_3 >> 0x1d);
  if (param_3 < uVar2) {
    uVar2 = 0;
  }
  else {
    puVar4 = param_2;
    puVar5 = (undefined4 *)(uVar1 + 0x18 + (int)param_1);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_662f4a10(param_1,(int)(param_1 + 6));
    for (uVar1 = -uVar1 + 0x7f; uVar1 < param_3; uVar1 = uVar1 + 0x40) {
      FUN_662f4a10(param_1,(int)param_2 + (uVar1 - 0x3f));
      uVar2 = uVar2 + 0x40;
    }
    uVar1 = 0;
  }
  puVar4 = (undefined4 *)(uVar2 + (int)param_2);
  puVar5 = (undefined4 *)(uVar1 + 0x18 + (int)param_1);
  for (uVar3 = param_3 - uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar2 = param_3 - uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}


