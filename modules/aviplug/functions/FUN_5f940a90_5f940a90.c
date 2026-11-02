/* Module: aviplug.dll
   Function: FUN_5f940a90
   Address: 5f940a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f940a90(int param_1,int *param_2,uint param_3,undefined4 param_4,int param_5,
                undefined4 *param_6,uint param_7)

{
  int *piVar1;
  SIZE_T SVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint local_18;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = param_7;
  local_18 = param_3;
  piVar3 = param_2;
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_6 == (undefined4 *)0x0)) {
    return -0x7fffbffd;
  }
  if (((int)param_3 < 0) || (*(uint *)(*(int *)(param_1 + 0x1c) + 0x20) < param_3)) {
    return -0x7ff8ffa9;
  }
  if (*(int *)(param_1 + 8) != 0) {
    return -0x7fff0001;
  }
  if (param_2[2] == 0) {
    iVar5 = 0xc;
  }
  else {
    iVar5 = *(int *)(param_2[2] + 4) + 8;
  }
  SVar2 = iVar5 + 8 + param_7;
  if (param_2[1] < (int)SVar2) {
    piVar6 = FUN_5f943000((undefined4 *)*param_2,SVar2,0,1,(SIZE_T *)&param_2,(SIZE_T *)0x0);
    if (piVar6 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    piVar3[2] = (int)piVar6;
    if (*piVar6 == 0) {
      *piVar6 = 0x5453494c;
      *(undefined4 *)(piVar3[2] + 4) = 4;
      *(undefined4 *)(piVar3[2] + 8) = 0x20636572;
    }
    piVar3[1] = (int)param_2;
    if (piVar6 != (int *)*piVar3) {
      iVar5 = *(int *)piVar3[3];
      iVar9 = 0;
      if (0 < iVar5) {
        do {
          piVar1 = (int *)(*(int *)(piVar3[3] + 4) * iVar9 + *(int *)(piVar3[3] + 8) + 0xc);
          *piVar1 = (int)piVar6 + (*piVar1 - *piVar3);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar5);
      }
      *piVar3 = (int)piVar6;
      local_18 = param_3;
    }
  }
  local_14 = param_4;
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 4) * local_18 + *(int *)(*(int *)(param_1 + 0x40) + 8)
  ;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_10 = param_5;
  uVar8 = *(uint *)(piVar3[2] + 4);
  local_c = (undefined4 *)((uVar8 & 1) + uVar8 + 8 + piVar3[2]);
  if (param_5 == 0) {
    uVar7 = *(undefined4 *)(iVar5 + 0x38);
  }
  else {
    uVar7 = *(undefined4 *)(iVar5 + 0x34);
  }
  *local_c = uVar7;
  local_c[1] = uVar4;
  puVar10 = param_6;
  puVar11 = local_c + 2;
  for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  iVar5 = FUN_5f978180((int *)piVar3[3],-1,(int *)&local_18,1);
  if (iVar5 < 0) {
    return iVar5;
  }
  *(int *)(piVar3[2] + 4) = *(int *)(piVar3[2] + 4) + 8;
  *(uint *)(piVar3[2] + 4) = *(int *)(piVar3[2] + 4) + (uVar4 & 1) + uVar4;
  return 0;
}


