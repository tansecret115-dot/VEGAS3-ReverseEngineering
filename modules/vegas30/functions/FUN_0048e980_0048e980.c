/* Module: vegas30.exe
   Function: FUN_0048e980
   Address: 0048e980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0048e980(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar4 = param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x130);
  local_20 = (int *)0x0;
  local_1c = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  iVar3 = _SfList_CreateExZ_32(&local_20,4,param_2[2],0x10,2,0,0,0);
  piVar6 = param_4;
  if (-1 < iVar3) {
    local_18 = 0;
    if (0 < piVar4[2]) {
      do {
        iVar3 = FUN_00469910(piVar6,uVar1,local_20,0xffffffff);
        if (iVar3 < 0) goto LAB_0048eda0;
        local_18 = local_18 + 1;
      } while (local_18 < piVar4[2]);
    }
    iVar3 = _SfList_CreateExZ_32(&local_1c,0xc,0x10,0x10,4,0,0,0);
    if (-1 < iVar3) {
      _SfList_Sort_12(local_1c,0,0);
      iVar8 = *local_20;
      piVar4 = local_20;
      piVar6 = local_1c;
      do {
        iVar8 = iVar8 + -1;
        local_20 = piVar4;
        local_1c = piVar6;
        if (iVar8 < 0) {
          iVar8 = 0;
          if (*piVar6 < 1) goto LAB_0048eb52;
          goto LAB_0048eaf3;
        }
        iVar3 = *(int *)(piVar4[2] + iVar8 * 4);
        local_8 = *(int *)(iVar3 + 4);
        local_c = *(int *)(iVar3 + 0x10);
        iVar3 = *(int *)(iVar3 + 0x10);
        piVar4 = (int *)FUN_005b87b0(uVar1);
        if ((*piVar4 <= iVar3) ||
           ((local_4 = iVar3, iVar3 != -1 &&
            (iVar5 = FUN_005b87b0(uVar1),
            *(int *)(*(int *)(*(int *)(iVar5 + 8) + iVar3 * 4) + 4) != local_8)))) {
          local_4 = -1;
        }
        iVar3 = _SfList_FindSortedInsertIndexRange_20(local_1c,&local_c,0,0xffffffff,&LAB_0048e960);
        piVar4 = local_20;
        piVar6 = local_1c;
      } while ((iVar3 == -1) ||
              (((iVar3 < *local_1c && (*(int *)(local_1c[1] * iVar3 + local_1c[2]) == local_c)) ||
               (iVar3 = _SfList_InsertList_16(local_1c,iVar3,&local_c,1), piVar4 = local_20,
               piVar6 = local_1c, -1 < iVar3))));
    }
  }
LAB_0048eda0:
  if (local_20 != (int *)0x0) {
    iVar8 = *local_20;
    while (iVar8 = iVar8 + -1, -1 < iVar8) {
      FUN_00469690();
    }
    _SfList_DeleteList_16(local_20,0,0xffffffff,1);
    _SfList_Destroy_4(local_20);
  }
  if (local_1c != (int *)0x0) {
    _SfList_Destroy_4(local_1c);
  }
  return iVar3;
LAB_0048eaf3:
  do {
    iVar5 = piVar6[1] * iVar8 + piVar6[2];
    if (*(int *)(piVar6[1] * iVar8 + 8 + piVar6[2]) == -1) {
      iVar3 = FUN_005ce780(&param_2,*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(iVar5 + 4),
                           0xffffffff,0);
      if (iVar3 < 0) goto LAB_0048eda0;
      *(int *)(iVar5 + 8) = param_2[6];
      FUN_004ea250(uVar1,param_2,0xb,0);
      piVar4 = local_20;
      piVar6 = local_1c;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < *piVar6);
LAB_0048eb52:
  local_18 = 0;
  if (0 < *piVar4) {
    do {
      iVar8 = *(int *)(piVar4[2] + local_18 * 4);
      local_c = *(int *)(iVar8 + 0x10);
      iVar3 = _SfList_FindSortedInsertIndexRange_20(piVar6,&local_c,0,0xffffffff,&LAB_0048e960);
      iVar3 = *(int *)(local_1c[1] * iVar3 + 8 + local_1c[2]);
      iVar5 = FUN_005b87b0(uVar1);
      uVar2 = *(undefined4 *)(*(int *)(iVar5 + 8) + iVar3 * 4);
      FUN_004ea250(uVar1,uVar2,1,0);
      iVar3 = FUN_005c9cc0(&param_2,uVar1,uVar2,*(undefined4 *)(iVar8 + 4),
                           *(undefined4 *)(iVar8 + 0x20),*(undefined4 *)(iVar8 + 0x24),
                           *(undefined4 *)(iVar8 + 0x8c),0,0);
      if (iVar3 < 0) goto LAB_0048eda0;
      param_4 = param_2;
      iVar3 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x134),param_3,&param_4,1);
      if (iVar3 < 0) goto LAB_0048eda0;
      param_2[8] = *(int *)(iVar8 + 0x28);
      param_2[9] = *(int *)(iVar8 + 0x2c);
      iVar5 = *(int *)(iVar8 + 0x84) + -1;
      if (-1 < iVar5) {
        param_4 = (int *)(iVar8 + 0x220 + iVar5 * 4);
        do {
          iVar3 = *param_4;
          iVar3 = FUN_005c70c0(uVar1,param_2,*(undefined4 *)(iVar3 + 0x18),iVar3,
                               *(undefined4 *)(iVar3 + 0x1c),0,*(int *)(iVar8 + 0x80) == iVar5);
          if (iVar3 < 0) goto LAB_0048eda0;
          iVar5 = iVar5 + -1;
          param_4 = param_4 + -1;
        } while (-1 < iVar5);
      }
      param_2[4] = *(int *)(iVar8 + 0x18);
      param_2[4] = param_2[4] & 0xfffffff7;
      param_2[4] = param_2[4] & 0xfff7ffff;
      param_2[4] = param_2[4] | 0x10;
      piVar4 = (int *)(iVar8 + 0x40);
      piVar6 = param_2 + 0x16;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      param_2[0x10] = *(int *)(iVar8 + 0x30);
      param_2[0x11] = *(int *)(iVar8 + 0x34);
      param_2[10] = *(int *)(iVar8 + 0x38);
      param_2[0xb] = *(int *)(iVar8 + 0x3c);
      iVar3 = FUN_0047de20(param_2 + 0x26,iVar8 + 0x90,param_2,0,0,0xffffffff);
      if (iVar3 < 0) goto LAB_0048eda0;
      uVar7 = param_2[8] + param_2[6];
      iVar3 = param_2[9] + param_2[7] + (uint)CARRY4(param_2[8],param_2[6]);
      if ((local_10 <= iVar3) && ((local_10 < iVar3 || (local_14 <= uVar7)))) {
        local_14 = uVar7;
        local_10 = iVar3;
      }
      local_18 = local_18 + 1;
      piVar4 = local_20;
      piVar6 = local_1c;
    } while (local_18 < *local_20);
  }
  iVar3 = *piVar4;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    FUN_00469690();
    piVar4 = local_20;
  }
  _SfList_DeleteList_16(piVar4,0,0xffffffff,1);
  _SfList_Destroy_4(local_20);
  _SfList_Destroy_4(local_1c);
  return 0;
}


