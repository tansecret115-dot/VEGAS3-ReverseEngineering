/* Module: vegas30.exe
   Function: FUN_004fb3e0
   Address: 004fb3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004fb3e0(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_4;
  
  iVar7 = 0;
  if (param_4 == 0) goto LAB_004fb517;
  iVar7 = _SfDibAlloc_28((int *)(param_3 + 0x150),0x1c,*(undefined4 *)(param_1 + 0x160),
                         *(undefined4 *)(param_1 + 0x164),0,0,0);
  if (iVar7 < 0) {
    return iVar7;
  }
  iVar7 = _SfDibAlloc_28((int *)(param_3 + 0x154),0x1c,*(undefined4 *)(param_1 + 0x160),
                         *(undefined4 *)(param_1 + 0x164),0,0,0);
  if (iVar7 < 0) {
    return iVar7;
  }
  piVar2 = *(int **)(param_3 + 0x150);
  if (piVar2[4] == 0) {
    if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_004fb48e;
    iVar4 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fb491:
    piVar5 = (int *)(*piVar2 + iVar4 * 4 + (int)piVar2);
  }
  else {
    if (piVar2[4] != 3) {
LAB_004fb48e:
      iVar4 = piVar2[8];
      goto LAB_004fb491;
    }
    piVar5 = piVar2 + 0xd;
  }
  _SfDibSet_36(piVar2,piVar5,0,0,0x3f000000,0x3f000000,0x3e800000,0x3f800000,3);
  piVar2 = *(int **)(param_3 + 0x154);
  if (piVar2[4] == 0) {
    if (((piVar2[8] != 0) || (uVar1 = *(ushort *)((int)piVar2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_004fb4ec;
    iVar4 = 1 << ((byte)uVar1 & 0x1f);
LAB_004fb4ef:
    piVar5 = (int *)(*piVar2 + iVar4 * 4 + (int)piVar2);
  }
  else {
    if (piVar2[4] != 3) {
LAB_004fb4ec:
      iVar4 = piVar2[8];
      goto LAB_004fb4ef;
    }
    piVar5 = piVar2 + 0xd;
  }
  _SfDibSet_36(piVar2,piVar5,0,0,0x3e800000,0x3e800000,0x3f000000,0x3f800000,3);
LAB_004fb517:
  iVar4 = FUN_004fa060(param_2 + 0x20,*(undefined4 *)(param_2 + 0x30),
                       *(undefined4 *)(param_3 + 0x118),&param_4);
  if (iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 400);
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x188);
    }
    if (iVar3 == 2) {
      local_4 = 0x3fe00000;
    }
    else {
      local_4 = 0x3fe00000;
      if (iVar3 != 0) {
        local_4 = 0x3ff00000;
      }
    }
    FUN_004fa220(iVar4,*(undefined4 *)(param_3 + 0x150),uVar6,*(undefined4 *)(param_1 + 0x18c),0,
                 local_4);
    FUN_004fa200(iVar4);
  }
  return iVar7;
}


