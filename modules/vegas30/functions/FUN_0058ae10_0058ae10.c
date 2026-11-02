/* Module: vegas30.exe
   Function: FUN_0058ae10
   Address: 0058ae10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058ae10(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if ((int)(iVar1 + param_3) < *(int *)(param_1 + 0x13c)) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 300 + *(int *)(param_1 + 0x138) * 4) + iVar1);
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + param_3;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x13c) - iVar1;
    uVar4 = param_3 - uVar2;
    puVar5 = param_2;
    puVar6 = (undefined4 *)(*(int *)(param_1 + 300 + *(int *)(param_1 + 0x138) * 4) + iVar1);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar1 = FUN_0058aa50(param_1);
    if (iVar1 < 0) {
      *(undefined4 *)(DAT_0065a068 + 0x748) = 1;
      return iVar1;
    }
    if (0 < (int)uVar4) {
      puVar5 = (undefined4 *)(uVar2 + (int)param_2);
      puVar6 = *(undefined4 **)(param_1 + 300 + *(int *)(param_1 + 0x138) * 4);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    *(uint *)(param_1 + 0x140) = uVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x148);
  *(uint *)(param_1 + 0x148) = uVar2 + param_3;
  *(uint *)(param_1 + 0x14c) =
       *(int *)(param_1 + 0x14c) + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar2,param_3);
  return 0;
}


