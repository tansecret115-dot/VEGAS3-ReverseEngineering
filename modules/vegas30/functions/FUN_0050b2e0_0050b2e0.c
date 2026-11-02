/* Module: vegas30.exe
   Function: FUN_0050b2e0
   Address: 0050b2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050b2e0(undefined4 param_1,uint param_2,uint param_3,uint *param_4,int *param_5,int param_6
                ,uint param_7,uint param_8,uint param_9,int param_10,int param_11)

{
  uint uVar1;
  uint *_Memory;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_4;
  
  uVar5 = param_9;
  if (param_5 == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *param_5;
  }
  if ((-1 < (int)param_3) && ((0 < (int)param_3 || (param_2 != 0)))) {
    if (((int)param_8 < 1) && ((int)param_8 < 0)) {
      param_7 = 0;
      param_8 = 0;
    }
    else if (((int)param_3 <= (int)param_8) &&
            (((int)param_3 < (int)param_8 || (param_2 < param_7)))) {
      param_7 = param_2;
      param_8 = param_3;
    }
  }
  if (param_6 < 1) {
    bVar8 = param_9 != 0;
    param_9 = -param_9;
    iVar6 = -(param_10 + (uint)bVar8);
  }
  else {
    iVar6 = param_5[1] * (param_6 + -1);
    param_9 = *(uint *)(iVar6 + 4 + param_5[2]);
    iVar6 = *(int *)(iVar6 + 8 + param_5[2]);
  }
  if (param_6 < local_4 + -1) {
    iVar3 = param_5[1] * (param_6 + 1);
    param_2 = *(uint *)(iVar3 + 4 + param_5[2]);
    param_3 = *(int *)(iVar3 + 8 + param_5[2]);
  }
  else {
    uVar1 = param_2 + uVar5;
    iVar3 = param_3 + param_10 + (uint)CARRY4(param_2,uVar5);
    param_2 = param_7 + uVar5;
    param_3 = param_8 + param_10 + (uint)CARRY4(param_7,uVar5);
    if (((int)param_3 <= iVar3) && (((int)param_3 < iVar3 || (param_2 < uVar1)))) {
      param_2 = uVar1;
      param_3 = iVar3;
    }
  }
  iVar3 = (iVar6 - param_10) - (uint)(param_9 < uVar5);
  if ((iVar3 <= (int)param_8) && ((iVar3 < (int)param_8 || (param_9 - uVar5 <= param_7)))) {
    iVar3 = param_3 + param_10 + (uint)CARRY4(param_2,uVar5);
    if (((int)param_8 <= iVar3) && (((int)param_8 < iVar3 || (param_7 <= param_2 + uVar5)))) {
      FUN_005b83b0(DAT_0064b138,1);
      uVar1 = param_9 + uVar5;
      uVar7 = iVar6 + param_10 + (uint)CARRY4(param_9,uVar5);
      if (((int)uVar7 < (int)param_8) || (((int)uVar7 <= (int)param_8 && (uVar1 <= param_7)))) {
        uVar4 = (param_3 - param_10) - (uint)(param_2 < uVar5);
        uVar1 = param_7;
        uVar7 = param_8;
        if (((int)uVar4 <= (int)param_8) &&
           (((int)uVar4 < (int)param_8 || (param_2 - uVar5 < param_7)))) {
          uVar1 = param_2 - uVar5;
          uVar7 = uVar4;
        }
      }
      param_4[1] = uVar1;
      param_4[2] = uVar7;
      goto LAB_0050b549;
    }
  }
  FUN_005b83b0(DAT_0064b138,1);
  _Memory = calloc(1,*param_4 + 8);
  if (_Memory != (uint *)0x0) {
    uVar5 = *param_4;
    puVar2 = _Memory;
    for (uVar1 = uVar5 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_4;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar2 = (char)*param_4;
      param_4 = (uint *)((int)param_4 + 1);
      puVar2 = (uint *)((int)puVar2 + 1);
    }
    _Memory[1] = param_7;
    _Memory[2] = param_8;
    _SfList_DeleteList_16(param_5,param_6,1,1);
    if (param_5 == (int *)0x0) {
      local_4 = 0;
    }
    else {
      local_4 = *param_5;
    }
    iVar6 = 0;
    if (0 < local_4) {
      puVar2 = (uint *)(param_5[2] + 4);
      do {
        if (((int)param_8 < (int)puVar2[1]) ||
           (((int)param_8 <= (int)puVar2[1] && (param_7 < *puVar2)))) {
          _SfList_InsertList_16(param_5,iVar6,_Memory,1);
          param_6 = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
        puVar2 = (uint *)((int)puVar2 + param_5[1]);
      } while (iVar6 < local_4);
    }
    if (iVar6 == local_4) {
      _SfList_InsertList_16(param_5,local_4,_Memory,1);
      param_6 = local_4;
    }
    free(_Memory);
  }
LAB_0050b549:
  FUN_005b84d0(DAT_0064b138,1);
  if (param_11 != 0) {
    DAT_0064767c = DAT_0064767c | 0x800;
  }
  FUN_00453250(DAT_00647630,0);
  return param_6;
}


