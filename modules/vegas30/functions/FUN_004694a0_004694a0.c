/* Module: vegas30.exe
   Function: FUN_004694a0
   Address: 004694a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004694a0(int *param_1,uint *param_2,int *param_3,int *param_4,uint *param_5,int *param_6,
                 int *param_7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  iVar4 = 0;
  local_14 = *param_1;
  iVar7 = 0;
  iVar9 = 0;
  iVar8 = 0;
  uVar6 = 0;
  local_8 = 0;
  local_4 = 0;
  if (0 < local_14) {
    local_24 = (int *)param_1[2];
    local_28 = (int *)*local_24;
    if (*local_28 == 0x30) {
      local_4 = local_28[7];
      local_8 = local_28[6];
      iVar8 = local_28[3];
      iVar7 = local_28[8];
      iVar9 = local_28[9];
      uVar6 = local_28[4];
      iVar4 = local_28[1];
      goto LAB_0046962f;
    }
    uVar6 = 0;
    uVar10 = 0;
    local_10 = 0;
    local_c = 0x20000000;
    local_20 = 0x7fffffff;
    param_1 = (int *)0x0;
    local_18 = 0;
    local_1c = 0;
    iVar4 = 0;
    uVar3 = 0x20000000;
    local_8 = uVar6;
    local_4 = uVar10;
    if (0 < local_14) {
      do {
        piVar1 = (int *)*local_24;
        if (*piVar1 == 0x31) {
          local_18 = local_18 + 1;
        }
        if (*piVar1 == 0x32) {
          local_1c = local_1c + 1;
        }
        uVar3 = piVar1[9];
        uVar2 = piVar1[8];
        if (((int)uVar3 <= (int)local_c) && (((int)uVar3 < (int)local_c || (uVar2 <= local_10)))) {
          local_10 = uVar2;
          local_c = uVar3;
        }
        iVar8 = piVar1[4];
        if (iVar8 <= local_20) {
          local_20 = iVar8;
        }
        if ((int)param_1 <= iVar8) {
          param_1 = (int *)iVar8;
        }
        uVar5 = piVar1[10] + uVar2;
        uVar3 = piVar1[0xb] + uVar3 + (uint)CARRY4(piVar1[10],uVar2);
        if (((int)uVar10 <= (int)uVar3) && (((int)uVar10 < (int)uVar3 || (uVar6 <= uVar5)))) {
          uVar6 = uVar5;
          uVar10 = uVar3;
        }
        local_24 = local_24 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      iVar4 = (int)param_1;
      uVar3 = local_c;
      local_8 = uVar6;
      local_4 = uVar10;
      if (((int)local_c <= (int)uVar10) && (((int)local_c < (int)uVar10 || (local_10 < uVar6)))) {
        local_8 = local_10;
        local_4 = local_c;
      }
    }
    iVar7 = uVar6 - local_10;
    iVar9 = (uVar10 - uVar3) - (uint)(uVar6 < local_10);
    if ((iVar9 < 1) && (iVar9 < 0)) {
      iVar7 = 0;
      iVar9 = 0;
    }
    iVar8 = local_20;
    if (iVar4 <= local_20) {
      iVar8 = iVar4;
    }
    uVar6 = (iVar4 - local_20) + 1;
    iVar4 = 0x31;
    uVar6 = ((int)uVar6 < 0) - 1 & uVar6;
    if ((local_1c == 1) && (local_18 == 0)) {
      iVar4 = 0x32;
    }
  }
  local_28 = (int *)0x0;
LAB_0046962f:
  if (param_2 != (uint *)0x0) {
    *param_2 = local_8;
    param_2[1] = local_4;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar8;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar7;
    param_4[1] = iVar9;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar6;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar4;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = (int)local_28;
  }
  return;
}


