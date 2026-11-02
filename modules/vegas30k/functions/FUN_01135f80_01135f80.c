/* Module: vegas30k.dll
   Function: FUN_01135f80
   Address: 01135f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01135f80(int param_1)

{
  uint uVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  void *pvVar5;
  LPVOID pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  undefined4 *puVar12;
  int local_14;
  int local_c;
  
  uVar10 = *(int *)(param_1 + 0x18) + 0x58 + *(int *)(param_1 + 0x20);
  uVar1 = *(int *)(param_1 + 0x1c) - 1;
  if ((uVar10 & uVar1) != 0) {
    uVar10 = *(int *)(param_1 + 0x1c) + uVar10 & ~uVar1;
  }
  pvVar3 = GlobalAlloc(2,uVar10 * 2);
  pvVar4 = GlobalLock(pvVar3);
  if (pvVar4 == (LPVOID)0x0) {
    return 0;
  }
  pvVar5 = calloc(1,0x18);
  local_14 = 0;
  local_c = 2;
  pvVar11 = pvVar5;
  do {
    pvVar3 = GlobalAlloc(0x40,0x34);
    pvVar6 = GlobalLock(pvVar3);
    if (pvVar6 == (LPVOID)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_01163730(0,0x10,0,0);
    }
    puVar12 = (undefined4 *)((int)pvVar4 + *(int *)(param_1 + 0x20) + local_14);
    puVar8 = puVar12;
    for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    FUN_011638e0(puVar12,0x10,*(undefined4 *)(param_1 + 0x18),0);
    puVar12[2] = 0;
    *(undefined4 *)((int)pvVar11 + 8) = uVar7;
    FUN_01163970(param_1 + 4);
    puVar12[2] = pvVar11;
    _SfQueueInsert_8(param_1 + 0x24,pvVar11);
    local_14 = local_14 + uVar10;
    pvVar11 = (void *)((int)pvVar11 + 0xc);
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar8 = calloc(1,0xc);
  *puVar8 = pvVar4;
  puVar8[1] = pvVar5;
  puVar8[2] = 0;
  iVar9 = *(int *)(param_1 + 0xd4);
  if (iVar9 == 0) {
    *(undefined4 **)(param_1 + 0xd4) = puVar8;
  }
  else {
    for (iVar2 = *(int *)(iVar9 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      iVar9 = iVar2;
    }
    *(undefined4 **)(iVar9 + 8) = puVar8;
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  return 1;
}


