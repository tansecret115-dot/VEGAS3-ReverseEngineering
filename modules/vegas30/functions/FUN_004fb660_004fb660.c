/* Module: vegas30.exe
   Function: FUN_004fb660
   Address: 004fb660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004fb660(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint local_11c;
  undefined4 local_118;
  undefined1 local_114 [260];
  undefined1 local_10 [8];
  uint local_8;
  
  if (param_2 == 0) {
    iVar4 = *(int *)(param_1 + 0x180);
    if (iVar4 < 0) {
      return 0;
    }
    if (**(int **)(param_1 + 0x178) <= iVar4) {
      return 0;
    }
    if (iVar4 < 0) {
      return 0;
    }
    param_2 = *(int *)((*(int **)(param_1 + 0x178))[2] + iVar4 * 4);
  }
  piVar1 = *(int **)(param_1 + 0x17c);
  iVar4 = *(int *)(param_2 + 0x150);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  if ((iVar4 < 0) || (iVar5 + -1 < iVar4)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(piVar1[2] + iVar4 * 4);
  }
  local_11c = 0;
  if (iVar4 != 0) {
    local_11c = *(uint *)(iVar4 + 0x118);
  }
  puVar2 = calloc(1,0x114);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *puVar2 | 1;
    puVar2[1] = param_2 + 0x20U;
    puVar2[3] = local_11c;
    puVar3 = (uint *)_SfGetString_8(DAT_00647204,0x4f80);
    uVar6 = 8;
    if ((param_2 + 0x20U != 0) && (*(int *)(param_2 + 0x30) == 0xb)) {
      puVar7 = &local_118;
      for (iVar4 = 0x46; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_118 = 1;
      local_8 = local_11c;
      iVar4 = FUN_004fb5c0(puVar2,0x104,local_114,local_10);
      if (iVar4 != 0) {
        puVar3 = puVar2 + 4;
        FUN_005f0420(&local_118,0x104,puVar3);
        uVar6 = 0;
      }
    }
    iVar4 = FUN_004ec280(param_1 + 0x78,puVar3,0,0,0,0xffffffff,0xffffffff,0,puVar2,uVar6,0,0);
    if (iVar4 < 0) {
      FUN_004fb380(param_1);
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    return 0;
  }
  uVar6 = FUN_0040c3e0(DAT_0064762c,*(int *)(param_1 + 0x78),7);
  return uVar6;
}


