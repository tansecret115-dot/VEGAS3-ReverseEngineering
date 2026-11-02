/* Module: vegas30.exe
   Function: FUN_00498260
   Address: 00498260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00498260(int param_1,int *param_2,uint *param_3,uint *param_4,undefined4 *param_5,
                 double *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint local_20;
  uint local_1c;
  undefined8 local_18;
  uint local_10;
  
  iVar1 = param_1;
  iVar10 = *(int *)(param_1 + 0x218);
  local_18 = *(double *)(iVar10 + 0x98) * _DAT_006128c8;
  local_20 = *(uint *)(iVar10 + 0x80);
  local_1c = *(uint *)(iVar10 + 0x84);
  local_10 = *(uint *)(iVar10 + 0x90) + local_20;
  dVar4 = *(double *)(iVar10 + 0x98) * _DAT_006129c8;
  uVar9 = *(int *)(iVar10 + 0x94) + local_1c + (uint)CARRY4(*(uint *)(iVar10 + 0x90),local_20);
  iVar10 = 0;
  if (param_2 == (int *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = *param_2;
  }
  uVar6 = (param_7 & 1) << 9;
  *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0xfffffdff | uVar6;
  if (0 < param_1) {
    do {
      iVar1 = *(int *)(param_2[2] + iVar10 * 4);
      iVar2 = *(int *)(iVar1 + 0x218);
      uVar7 = *(uint *)(iVar2 + 0x84);
      uVar3 = *(uint *)(iVar2 + 0x80);
      if (((int)uVar7 <= (int)local_1c) && (((int)uVar7 < (int)local_1c || (uVar3 <= local_20)))) {
        local_20 = uVar3;
        local_1c = uVar7;
      }
      uVar8 = *(uint *)(iVar2 + 0x90) + uVar3;
      uVar7 = *(int *)(iVar2 + 0x94) + uVar7 + (uint)CARRY4(*(uint *)(iVar2 + 0x90),uVar3);
      if (((int)uVar9 <= (int)uVar7) && (((int)uVar9 < (int)uVar7 || (local_10 <= uVar8)))) {
        uVar9 = uVar7;
        local_10 = uVar8;
      }
      dVar5 = *(double *)(iVar2 + 0x98) * _DAT_006128c8;
      if (local_18 < dVar5) {
        local_18 = dVar5;
      }
      dVar5 = *(double *)(iVar2 + 0x98) * _DAT_006129c8;
      if (dVar5 < dVar4) {
        dVar4 = dVar5;
      }
      iVar10 = iVar10 + 1;
      *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & 0xfffffdff | uVar6;
    } while (iVar10 < param_1);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_20;
    param_3[1] = local_1c;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = local_10;
    param_4[1] = uVar9;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = (undefined4)local_18;
    param_5[1] = local_18._4_4_;
  }
  if (param_6 == (double *)0x0) {
    return;
  }
  *param_6 = dVar4;
  return;
}


