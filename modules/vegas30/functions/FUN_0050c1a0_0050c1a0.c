/* Module: vegas30.exe
   Function: FUN_0050c1a0
   Address: 0050c1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050c1a0(int param_1)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar4 = DAT_0064b138;
  iVar9 = *(int *)(param_1 + 0x98);
  if ((iVar9 == 0) || ((*(uint *)(iVar9 + 4) & 0x1000) != 0)) {
    iVar9 = *(int *)(param_1 + 0x238);
    if (iVar9 == 0) goto LAB_0050c350;
  }
  else {
    piVar1 = (int *)(param_1 + 0x238);
    if (*(int *)(param_1 + 0x238) == 0) {
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      FUN_005a5ff0(iVar9 + 0x24);
      uVar5 = ftol(uVar14,uVar15,uVar16);
      FUN_005a5f80(iVar9 + 0x24);
      uVar6 = ftol(uVar5);
      iVar7 = _SfDibAlloc_28(piVar1,0x1c,uVar6,uVar5,uVar14,uVar15,uVar16);
      if (iVar7 < 0) {
        *piVar1 = 0;
      }
      else {
        piVar3 = (int *)*piVar1;
        if (piVar3[4] == 0) {
          if (((piVar3[8] != 0) || (uVar2 = *(ushort *)((int)piVar3 + 0xe), uVar2 == 0)) ||
             (8 < uVar2)) goto LAB_0050c257;
          *(int *)(param_1 + 0x23c) = *piVar3 + (1 << ((byte)uVar2 & 0x1f)) * 4 + (int)piVar3;
        }
        else if (piVar3[4] == 3) {
          *(int **)(param_1 + 0x23c) = piVar3 + 0xd;
        }
        else {
LAB_0050c257:
          *(int *)(param_1 + 0x23c) = *piVar3 + piVar3[8] * 4 + (int)piVar3;
        }
      }
      if (*piVar1 == 0) {
        return 1;
      }
    }
    iVar7 = *(int *)(iVar9 + 0x90);
    uVar11 = *(int *)(iVar7 + 0x20) - 1;
    iVar8 = *(int *)(iVar7 + 0x24) - (uint)(*(int *)(iVar7 + 0x20) == 0);
    uVar12 = *(uint *)(iVar9 + 0x88) + 1;
    iVar10 = *(int *)(iVar9 + 0x8c) + (uint)(0xfffffffe < *(uint *)(iVar9 + 0x88));
    if ((iVar10 <= iVar8) && ((iVar10 < iVar8 || (uVar12 < uVar11)))) {
      iVar8 = iVar10;
      uVar11 = uVar12;
    }
    if ((*(uint *)(param_1 + 0x230) == uVar11) && (*(int *)(param_1 + 0x234) == iVar8)) {
      return 0;
    }
    uVar13 = FUN_005ceab0(uVar4,iVar7,uVar11,iVar8,0,0,0,0);
    iVar9 = FUN_005a0d90(DAT_0064b138,*(undefined4 *)(iVar9 + 0x90),uVar13,
                         *(undefined4 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x23c),0,0,
                         0xffffffff,0x1000003,0);
    if (-1 < iVar9) {
      *(uint *)(param_1 + 0x230) = uVar11;
      *(int *)(param_1 + 0x234) = iVar8;
      return 1;
    }
    iVar9 = *(int *)(param_1 + 0x238);
  }
  _SfDibFree_8(iVar9,0);
LAB_0050c350:
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  return 0;
}


