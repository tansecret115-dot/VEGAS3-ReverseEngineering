/* Module: vegas30.exe
   Function: FUN_005a5bd0
   Address: 005a5bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a5bd0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  piVar2 = param_1;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  if (((*(byte *)(param_1 + 0x34) & 1) == 0) || ((uint)param_1[6] <= (uint)param_1[7])) {
    iVar3 = FUN_005a5860(param_1,param_2);
  }
  else {
    iVar3 = FUN_005a5860(param_1,param_2);
  }
  if (iVar3 != 0) {
    return iVar3;
  }
  piVar7 = (int *)param_1[1];
  iVar3 = 0;
  if (piVar7 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar7;
  }
  if (0 < iVar4) {
    piVar7 = (int *)piVar7[2];
    do {
      if (((*(byte *)(*piVar7 + 0x434) & 8) == 0) && (*(int *)(*piVar7 + 0x438) != 0)) {
        iVar3 = iVar3 + 1;
      }
      piVar7 = piVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (*param_1 * 3 < iVar3) goto LAB_005a5d6a;
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    FUN_005a5270(param_1[3],param_1[4],param_1[2]);
  }
  iVar3 = _SfList_AllocItem_12(param_1[1],0x460,&local_10);
  if (-1 < iVar3) {
    if ((0 < param_1[3]) && (0 < param_1[4])) {
      iVar3 = _SfDibAlloc_28(&local_8,param_1[2],param_1[3],param_1[4],0,0xffffffff,0);
      if (iVar3 < 0) {
        _SfList_DeleteList_16(param_1[1],0xffffffff,0xffffffff,0);
        goto LAB_005a5d57;
      }
      if (local_8[4] == 0) {
        if (((local_8[8] != 0) || (uVar1 = *(ushort *)((int)local_8 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_005a5cf2;
        iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_005a5cf5:
        local_c = (int *)(*local_8 + iVar3 * 4 + (int)local_8);
      }
      else {
        if (local_8[4] != 3) {
LAB_005a5cf2:
          iVar3 = local_8[8];
          goto LAB_005a5cf5;
        }
        local_c = local_8 + 0xd;
      }
      iVar3 = FUN_005a5270(param_1[3],param_1[4],param_1[2]);
      param_1[7] = param_1[7] + iVar3;
    }
    iVar3 = param_1[5];
    puVar6 = local_10;
    for (iVar4 = 0x118; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_10[0x114] = iVar3;
    *local_10 = local_8;
    local_10[0x10b] = local_c;
    _SfList_InsertList_16(param_1[1],0xffffffff,0,0xffffffff);
  }
LAB_005a5d57:
  iVar4 = FUN_005a5860(param_1,param_2,1);
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_005a5d6a:
  param_1 = (int *)iVar4;
  puVar6 = (undefined4 *)&stack0xffffffe4;
  *param_3 = 0x8007000e;
  BVar5 = IsBadReadPtr(&stack0xffffffe4,0x80);
  if (BVar5 == 0) {
    iVar3 = 0x20;
    puVar8 = param_3;
    do {
      puVar8 = puVar8 + 1;
      uVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar8 = uVar9;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_3[0x21] = piVar2[3];
  param_3[0x22] = piVar2[4];
  uVar9 = 0;
  if ((undefined4 *)piVar2[1] != (undefined4 *)0x0) {
    uVar9 = *(undefined4 *)piVar2[1];
  }
  param_3[0x23] = uVar9;
  DAT_00000000 = 0;
  return (int)param_1;
}


