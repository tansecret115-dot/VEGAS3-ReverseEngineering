/* Module: vegas30.exe
   Function: FUN_0050b930
   Address: 0050b930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050b930(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar6 = 0;
  local_8 = 0;
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
     ((*(byte *)(param_2 + 1) & 1) == 0)) {
    return -0x7ff8ffa9;
  }
  FUN_00522050(param_1,0);
  param_1[0x27] = param_2[0x27];
  param_1[1] = ((int)(param_2[1] << 0xb) >> 0xb ^ param_1[1]) & 0x1e0000U ^ param_1[1];
  *param_1 = *param_2;
  puVar7 = param_2 + 2;
  puVar8 = param_1 + 2;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar7 = param_2 + 9;
  puVar8 = param_1 + 9;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[1] = param_2[1];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[0x24] = param_2[0x24];
  param_1[0x27] = param_2[0x27];
  if ((int *)param_2[0x25] == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)param_2[0x25];
  }
  local_10 = 0;
  if (0 < local_c) {
    piVar3 = param_1 + 0x25;
    do {
      iVar6 = *(int *)(param_2[0x25] + 4);
      iVar5 = *(int *)(param_2[0x25] + 8);
      if ((*piVar3 == 0) &&
         (iVar2 = _SfList_CreateExZ_32(piVar3,8,0xffffffff,0xffffffff,0x40000004,0,0,0), iVar2 < 0))
      {
        return iVar2;
      }
      iVar6 = _SfList_InsertList_16(*piVar3,0xffffffff,iVar6 * local_10 + iVar5,1);
      if (iVar6 < 0) {
        return iVar6;
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_c);
  }
  if ((int *)param_2[0x26] == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)param_2[0x26];
  }
  local_10 = 0;
  if (0 < local_c) {
    piVar3 = param_1 + 0x26;
    do {
      iVar6 = *(int *)(param_2[0x26] + 4);
      iVar5 = *(int *)(param_2[0x26] + 8);
      if ((*piVar3 == 0) &&
         (iVar2 = _SfList_CreateExZ_32(piVar3,8,0xffffffff,0xffffffff,0x40000004,0,0,0), iVar2 < 0))
      {
        return iVar2;
      }
      iVar6 = _SfList_InsertList_16(*piVar3,0xffffffff,iVar6 * local_10 + iVar5,1);
      if (iVar6 < 0) {
        return iVar6;
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_c);
  }
  if (((int *)param_2[0x29] != (int *)0x0) && (iVar5 = *(int *)param_2[0x29], iVar5 != 0)) {
    piVar3 = param_1 + 0x29;
    local_4 = iVar5;
    if (((param_1[0x29] == 0) &&
        (iVar6 = _SfList_CreateExZ_32(piVar3,4,0xffffffff,0xffffffff,0x40000004,0,0,0), iVar6 < 0))
       || (local_c = 0, iVar5 < 1)) {
      return iVar6;
    }
    do {
      piVar4 = (int *)FUN_00522a00(local_c);
      if (piVar4 == (int *)0x0) {
        param_1 = (undefined4 *)0x0;
      }
      else {
        param_1 = (undefined4 *)*piVar4;
      }
      piVar1 = (int *)*piVar3;
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if (((local_c < 0) || (iVar5 + -1 < local_c)) ||
         (puVar7 = (undefined4 *)(piVar1[1] * local_c + piVar1[2]), puVar7 == (undefined4 *)0x0)) {
        local_8 = 0;
        if (local_c == 0) {
          iVar6 = 0x7c;
        }
        else if ((local_c < 1) || (2 < local_c)) {
          iVar6 = 0;
        }
        else {
          iVar6 = 0x84;
        }
        iVar6 = _SfList_CreateExZ_32(&local_8,iVar6 + 8,0xffffffff,0xffffffff,0x40000004,0,0,0);
        if (iVar6 < 0) {
          return iVar6;
        }
        iVar6 = _SfList_InsertList_16(*piVar3,0xffffffff,&local_8,1);
        if (iVar6 < 0) {
          return iVar6;
        }
        puVar7 = &local_8;
      }
      iVar5 = 0;
      if (0 < (int)param_1) {
        do {
          iVar6 = _SfList_InsertList_16(*puVar7,0xffffffff,piVar4[1] * iVar5 + piVar4[2],1);
          if (iVar6 < 0) {
            return iVar6;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_1);
      }
      local_c = local_c + 1;
    } while (local_c < local_4);
    return iVar6;
  }
  return iVar6;
}


