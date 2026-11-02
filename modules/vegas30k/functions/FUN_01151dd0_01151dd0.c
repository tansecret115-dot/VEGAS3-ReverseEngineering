/* Module: vegas30k.dll
   Function: FUN_01151dd0
   Address: 01151dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01151dd0(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = param_2;
  if (param_4 <= param_2) {
    uVar2 = param_4;
  }
  puVar3 = param_3;
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  if (param_2 < param_4) {
    puVar3 = (undefined4 *)(param_2 + (int)param_3);
    for (uVar2 = param_4 - param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_4 - param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return;
}


