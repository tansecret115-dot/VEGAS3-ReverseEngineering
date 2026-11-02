/* Module: aviplug.dll
   Function: FUN_5f9610d0
   Address: 5f9610d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9610d0(uint param_1,SIZE_T param_2,int param_3,uint param_4,int *param_5,int *param_6,
                uint param_7,uint *param_8,undefined4 *param_9)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_c;
  undefined4 local_8 [2];
  
  uVar1 = param_1;
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = 0;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = 0;
  }
  local_c = 1;
  iVar6 = 0;
  if (((*(int *)(*(int *)(param_1 + 0x25c) + 0xbc) != 0) ||
      (iVar6 = FUN_5f960ce0(param_1), -1 < iVar6)) &&
     ((piVar2 = param_6, *(int *)(*(int *)(param_1 + 0x25c) + 0xc4) == 0 ||
      (iVar6 = FUN_5f9616e0(param_1,param_2,param_3,param_3 >> 0x1f,param_4,param_5,(uint)param_6,
                            &local_c), -1 < iVar6)))) {
    iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x25c) + 4) + 8) + param_2 * 4);
    uVar3 = FUN_5f961f10(iVar4);
    param_1 = 0;
    iVar4 = FUN_5f961f20(iVar4);
    if (iVar4 == 0x73646976) {
      param_1 = param_7 >> 4 & 1;
    }
    piVar7 = *(int **)(uVar1 + 0x25c);
    if (piVar7[0x30] == 0) {
      iVar6 = FUN_5f93fc40(*piVar7,(int)piVar2,(int *)&param_6,(int *)0x0);
      if (iVar6 < 0) {
        return iVar6;
      }
      piVar7 = param_6;
      for (uVar5 = (uint)piVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar7 = *param_5;
        param_5 = param_5 + 1;
        piVar7 = piVar7 + 1;
      }
      for (uVar5 = (uint)piVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar7 = (char)*param_5;
        param_5 = (int *)((int)param_5 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      }
      iVar6 = FUN_5f9401b0(**(uint **)(uVar1 + 0x25c),uVar3,param_4,param_1,(int)param_6,
                           (uint)piVar2,local_8);
    }
    else if (local_c != 0) {
      iVar6 = FUN_5f940a90(*piVar7,(int *)piVar7[0x32],uVar3,param_4,param_1,param_5,(uint)piVar2);
      if (iVar6 < 0) {
        return iVar6;
      }
      piVar7 = (int *)(*(int *)(uVar1 + 0x25c) + 0xcc);
      *piVar7 = *piVar7 + 1;
    }
    if (-1 < iVar6) {
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = piVar2;
      }
      if (param_8 != (uint *)0x0) {
        *param_8 = param_4;
      }
      iVar6 = *(int *)(uVar1 + 0x25c);
      uVar1 = *(uint *)(iVar6 + 0xd0);
      *(uint *)(iVar6 + 0xd0) = uVar1 + param_4;
      *(uint *)(iVar6 + 0xd4) =
           *(int *)(iVar6 + 0xd4) + ((int)param_4 >> 0x1f) + (uint)CARRY4(uVar1,param_4);
      return 0;
    }
  }
  return iVar6;
}


