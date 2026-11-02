/* Module: mcmpgdec.dll
   Function: FUN_100051dc
   Address: 100051dc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_100051dc(int *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,uint param_10,uint param_11,uint param_12,int param_13)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = (int)param_11 >> 1;
  iVar4 = (int)param_10 >> 1;
  iVar10 = param_3 >> 1;
  iVar2 = param_2 >> 1;
  iVar9 = param_6 >> 1;
  if (param_13 == 2) {
    iVar6 = param_4[1] - *param_4;
    uVar7 = (param_11 & 1) * 2;
    uVar8 = (param_10 & 1) * 4 | (uint)(param_12 != 0) | uVar7;
    iVar4 = iVar4 + param_6 * (param_9 + iVar5) + param_8 + param_5;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar1 = param_6 + -0x10 + (iVar6 - param_6 * param_7);
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    (**(code **)(PTR_PTR_10030b40 + uVar8 * 4))
              (iVar4 + *param_4,param_2 + *param_1,8,param_7,param_6,param_3);
    (**(code **)(PTR_PTR_10030b40 + uVar8 * 4))
              (iVar4 + *param_4 + 8,param_2 + *param_1 + 8,8,param_7,param_6,param_3);
    iVar4 = param_10 - ((int)param_10 >> 0x1f);
    uVar7 = iVar4 * 2 & 4U | (uint)(param_12 != 0) | uVar7;
    iVar4 = (param_8 + param_5 >> 1) + (iVar4 >> 2) + (param_9 + iVar5) * iVar9;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar5 = iVar9 + -8 + ((iVar6 >> 1) - iVar9 * param_7);
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    (**(code **)(PTR_PTR_10030b40 + uVar7 * 4))
              (iVar4 + param_4[1],iVar2 + param_1[1],8,param_7,iVar9,iVar10);
    iVar2 = iVar2 + param_1[2];
    iVar4 = iVar4 + param_4[2];
    pcVar3 = *(code **)(PTR_PTR_10030b40 + uVar7 * 4);
  }
  else if (param_13 < 3) {
    if (param_13 != 1) {
      return;
    }
    iVar6 = param_4[1] - *param_4;
    uVar7 = (param_10 & 1) * 4 | param_12 | (param_11 & 1) * 2;
    iVar4 = iVar4 + (iVar5 + param_9) * param_6 + param_8 + param_5;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar5 = param_6 + -0x10 + (iVar6 - param_6 * param_7);
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    (**(code **)(PTR_PTR_10030b40 + uVar7 * 4))
              (iVar4 + *param_4,param_2 + *param_1,8,param_7,param_6,param_3);
    (**(code **)(PTR_PTR_10030b40 + uVar7 * 4))
              (iVar4 + *param_4 + 8,param_2 + *param_1 + 8,8,param_7,param_6,param_3);
    uVar7 = param_11 - ((int)param_11 >> 0x1f);
    param_7 = param_7 >> 1;
    iVar4 = param_10 - ((int)param_10 >> 0x1f);
    uVar8 = iVar4 * 2 & 4U | param_12 | uVar7 & 2;
    iVar4 = (param_8 + param_5 >> 1) + (((int)uVar7 >> 2) + (param_9 >> 1)) * iVar9 + (iVar4 >> 2);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar5 = iVar9 + -8 + ((iVar6 >> 2) - iVar9 * param_7);
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    (**(code **)(PTR_PTR_10030b40 + uVar8 * 4))
              (iVar4 + param_4[1],iVar2 + param_1[1],8,param_7,iVar9,iVar10);
    iVar2 = iVar2 + param_1[2];
    iVar4 = iVar4 + param_4[2];
    pcVar3 = *(code **)(PTR_PTR_10030b40 + uVar8 * 4);
  }
  else {
    if (param_13 != 3) {
      return;
    }
    uVar7 = (param_10 & 1) * 4 | (uint)(param_12 != 0) | (param_11 & 1) * 2;
    iVar4 = param_8 + param_5 + (param_9 + iVar5) * param_6 + iVar4;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar2 = param_6 + -0x10 + ((param_4[1] - *param_4) - param_6 * param_7);
    if (iVar2 < iVar4) {
      iVar4 = iVar2;
    }
    (**(code **)(PTR_PTR_10030b40 + uVar7 * 4))
              (iVar4 + *param_4,param_2 + *param_1,8,param_7,param_6,param_3);
    (**(code **)(PTR_PTR_10030b40 + uVar7 * 4))
              (iVar4 + *param_4 + 8,param_2 + *param_1 + 8,8,param_7,param_6,param_3);
    (**(code **)(PTR_PTR_10030b40 + uVar7 * 4))
              (iVar4 + param_4[1],param_2 + param_1[1],8,param_7,param_6,param_3);
    (**(code **)(PTR_PTR_10030b40 + uVar7 * 4))
              (iVar4 + param_4[1] + 8,param_2 + param_1[1] + 8,8,param_7,param_6,param_3);
    (**(code **)(PTR_PTR_10030b40 + uVar7 * 4))
              (iVar4 + param_4[2],param_2 + param_1[2],8,param_7,param_6,param_3);
    iVar2 = param_2 + param_1[2] + 8;
    iVar4 = iVar4 + param_4[2] + 8;
    pcVar3 = *(code **)(PTR_PTR_10030b40 + uVar7 * 4);
    iVar9 = param_6;
    iVar10 = param_3;
  }
  (*pcVar3)(iVar4,iVar2,8,param_7,iVar9,iVar10);
  return;
}


