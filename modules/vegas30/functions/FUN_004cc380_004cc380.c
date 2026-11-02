/* Module: vegas30.exe
   Function: FUN_004cc380
   Address: 004cc380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004cc380(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puVar1 = *(undefined4 **)(param_1 + 0xbc8);
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_005b87b0(puVar1);
  }
  iVar6 = param_3;
  iVar7 = *piVar4;
  iVar5 = FUN_00497960(param_1,param_3);
  if ((iVar5 < 0) || (iVar7 <= iVar5)) {
    if ((iVar5 == -0x80000000) || (iVar5 == -3)) {
      iVar5 = *(int *)(param_1 + 0xbc0);
    }
    else if (((iVar5 == -4) || (iVar5 == -2)) &&
            (iVar5 = FUN_00497960(param_1,*(int *)(param_1 + 0xacc) + -1), iVar5 < 0)) {
      iVar5 = -1;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(piVar4[2] + iVar5 * 4) + 0x69c);
    local_10 = *(undefined4 *)(iVar2 + 0x18);
    iVar3 = *(int *)(iVar2 + 0x1c);
    local_8 = *(undefined4 *)(iVar2 + 0x20);
    if (((iVar6 < iVar3) || ((*(int *)(iVar2 + 0x24) - iVar3) / 2 + iVar3 < iVar6)) &&
       (iVar5 = iVar5 + 1, iVar5 == iVar7)) {
      iVar5 = -1;
    }
    if (iVar5 == *(int *)(param_1 + 0xcc0)) {
      return 0;
    }
  }
  param_2 = 0;
  if (0 < iVar5) {
    param_2 = *(int *)(piVar4[2] + iVar5 * 4);
    if ((*(byte *)(param_2 + 0x10) & 0x10) != 0) {
      if (iVar5 + 1 < iVar7) {
        param_2 = *(int *)(piVar4[2] + (iVar5 + 1) * 4);
      }
      else {
        param_2 = 0;
        iVar5 = -1;
      }
    }
  }
  iVar6 = _SfList_CreateExZ_32(&local_18,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (-1 < iVar6) {
    FUN_005b83b0(puVar1,1);
    iVar6 = 0;
    FUN_004e9f70(puVar1,0x13,0);
    FUN_004ea450(puVar1,0x10);
    FUN_004eb2b0(puVar1);
    FUN_004ea040(puVar1,0);
    local_1c = 0;
    DAT_0064cbd0 = *(int *)(piVar4[2] + *(int *)(param_1 + 0xcbc) * 4);
    if (0 < iVar7) {
      do {
        iVar2 = *(int *)(piVar4[2] + iVar6 * 4);
        if ((*(byte *)(iVar2 + 0x10) & 0x10) != 0) {
          local_14 = iVar2;
          _SfList_InsertList_16(local_18,0xffffffff,&local_14,1);
          local_1c = local_1c + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      if ((*(byte *)(*(int *)(piVar4[2] + iVar7 * 4) + 0x10) & 0x10) != 0) {
        _SfList_DeleteList_16(piVar4,iVar7,1,0);
      }
    }
    FUN_005b9000(puVar1);
    if ((0 < iVar5) && (param_2 != 0)) {
      iVar5 = *(int *)(param_2 + 0x18);
    }
    iVar7 = 0;
    if (0 < local_1c) {
      do {
        param_2 = *(int *)(*(int *)(local_18 + 8) + iVar7 * 4);
        _SfList_InsertList_16(piVar4,iVar5,&param_2,1);
        if (iVar5 != -1) {
          iVar5 = iVar5 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_1c);
    }
    FUN_005b9000(puVar1);
    *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(DAT_0064cbd0 + 0x18);
    FUN_005b84d0(puVar1,1);
    iVar6 = _SfList_Destroy_4(local_18);
    *(uint *)*puVar1 = *(uint *)*puVar1 | 4;
    DAT_0064767c = DAT_0064767c | 0x20;
    FUN_00456c20(param_1);
  }
  return iVar6;
}


