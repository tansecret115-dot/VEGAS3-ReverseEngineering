/* Module: mpgvout.004
   Function: FUN_1000e304
   Address: 1000e304
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1000e304(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            uint param_7,uint param_8,int *param_9,int *param_10,undefined4 *param_11,int *param_12)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  int local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0x590) == 1) {
    local_10 = param_2;
    local_14 = param_3;
  }
  else {
    local_10 = param_3;
    local_14 = param_2;
  }
  iVar4 = param_7 + param_5 * -2;
  iVar5 = param_8 + param_6 * -2;
  if (0 < iVar4) {
    iVar4 = iVar4 + 1;
  }
  if (0 < iVar5) {
    iVar5 = iVar5 + 1;
  }
  if (*(int *)(param_1 + 0x590) == 1) {
    iVar5 = (iVar5 >> 1) + -1;
  }
  else {
    iVar5 = (iVar5 >> 1) + 1;
  }
  local_30 = 0x40000000;
  iVar7 = -1;
  do {
    iVar1 = iVar7 + 1;
    iVar9 = -1;
    uVar8 = iVar5 + param_6 * 2 + iVar7;
    uVar6 = ((iVar4 >> 1) + param_5 * 2) - 1;
    do {
      if ((((-1 < (int)uVar6) && ((int)uVar6 <= (*(int *)(param_1 + 0x550) + -0x10) * 2)) &&
          (-1 < (int)uVar8)) && ((int)uVar8 <= (*(int *)(param_1 + 0x56c) + -0x10) * 2)) {
        iVar2 = *(int *)(param_1 + 0x568);
        iVar2 = (**(code **)(param_1 + 0x514))
                          (local_10 + ((int)param_7 >> 1) + iVar2 * ((int)param_8 >> 1),
                           ((int)uVar6 >> 1) + local_14 + ((int)uVar8 >> 1) * iVar2,param_4,iVar2,
                           param_7 & 1,param_8 & 1,uVar6 & 1,uVar8 & 1,0x10);
        if (iVar2 < local_30) {
          local_30 = iVar2;
          iStack_2c = iVar7;
          iStack_28 = iVar9;
          uStack_24 = uVar8;
          uStack_20 = uVar6;
        }
      }
      uVar6 = uVar6 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    iVar7 = iVar1;
  } while (iVar1 < 2);
  iVar4 = *(int *)(param_1 + 0x568);
  uVar3 = (**(code **)(param_1 + 0x510))
                    (local_10 + ((int)param_7 >> 1) + iVar4 * ((int)param_8 >> 1),
                     local_14 + ((int)uStack_20 >> 1) + iVar4 * ((int)uStack_24 >> 1),param_4,iVar4,
                     param_7 & 1,param_8 & 1,uStack_20 & 1,uStack_24 & 1,0x10);
  *param_11 = uVar3;
  *param_9 = iStack_28;
  *param_10 = iStack_2c;
  *param_12 = local_30;
  return;
}


