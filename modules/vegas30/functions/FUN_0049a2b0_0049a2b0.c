/* Module: vegas30.exe
   Function: FUN_0049a2b0
   Address: 0049a2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049a2b0(int param_1,int *param_2,int param_3,uint *param_4,uint *param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_30;
  int local_2c;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  if (param_2 == (int *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = *param_2;
  }
  *param_4 = 0;
  param_4[1] = 0xc0000000;
  *param_5 = 0;
  param_5[1] = 0x20000000;
  local_2c = 0;
  if (local_30 != -1 && -1 < local_30 + 1) {
    do {
      iVar9 = param_3;
      if (local_2c != local_30) {
        iVar9 = *(int *)(param_2[2] + local_2c * 4);
      }
      if (((*(uint *)(iVar9 + 0x10) & 8) == 0) && ((*(uint *)(iVar9 + 0x10) & 0x100000) == 0)) {
        iVar2 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),iVar9);
        iVar11 = iVar2 + 1;
        piVar1 = *(int **)(*(int *)(iVar9 + 8) + 0x24);
        if (piVar1 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar1;
        }
        if ((iVar11 < 0) || (iVar8 + -1 < iVar11)) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(piVar1[2] + iVar11 * 4);
        }
        piVar1 = *(int **)(*(int *)(iVar9 + 8) + 0x24);
        iVar2 = iVar2 + -1;
        if (piVar1 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar1;
        }
        if ((iVar2 < 0) || (iVar8 + -1 < iVar2)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(piVar1[2] + iVar2 * 4);
        }
        if (iVar11 == 0) {
          uVar6 = 0;
          iVar11 = 0x20000000;
        }
        else {
          uVar6 = *(uint *)(iVar11 + 0x18);
          iVar11 = *(int *)(iVar11 + 0x1c);
        }
        if (iVar2 == 0) {
          uVar5 = 0;
          iVar2 = 0;
        }
        else {
          uVar5 = *(uint *)(iVar2 + 0x18);
          iVar2 = *(int *)(iVar2 + 0x1c);
        }
        if (param_6 == 0) {
          uVar3 = 1 - *(uint *)(iVar9 + 0x20);
          uVar5 = -(uint)(1 < *(uint *)(iVar9 + 0x20)) - *(int *)(iVar9 + 0x24);
          FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar9,0,&local_18,local_10,1);
          FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar9,0,&local_20,local_8,0);
          if ((((*(uint *)(iVar9 + 0x10) & 0x100) == 0) && (-1 < local_1c)) &&
             ((0 < local_14 || (-1 < local_14)))) {
            uVar4 = local_20 - local_18;
            uVar10 = (local_1c - local_14) - (uint)(local_20 < local_18);
          }
          else {
            uVar4 = 0;
            uVar10 = 0x20000000;
          }
        }
        else {
          uVar7 = *(uint *)(iVar9 + 0x18);
          uVar3 = uVar5 - uVar7;
          uVar5 = (iVar2 - *(int *)(iVar9 + 0x1c)) - (uint)(uVar5 < uVar7);
          uVar4 = *(int *)(iVar9 + 0x20) - 1;
          uVar10 = *(int *)(iVar9 + 0x24) - (uint)(*(int *)(iVar9 + 0x20) == 0);
          uVar12 = (iVar11 - *(int *)(iVar9 + 0x1c)) - (uint)(uVar6 < uVar7);
          if (((int)uVar12 <= (int)uVar10) &&
             (((int)uVar12 < (int)uVar10 || (uVar6 - uVar7 <= uVar4)))) {
            uVar4 = uVar6 - uVar7;
            uVar10 = uVar12;
          }
        }
        uVar6 = param_4[1];
        uVar7 = *param_4;
        if (((int)uVar6 <= (int)uVar5) && (((int)uVar6 < (int)uVar5 || (uVar7 < uVar3)))) {
          uVar6 = uVar5;
          uVar7 = uVar3;
        }
        *param_4 = uVar7;
        param_4[1] = uVar6;
        uVar6 = param_5[1];
        if (((int)uVar6 < (int)uVar10) || (((int)uVar6 <= (int)uVar10 && (*param_5 <= uVar4)))) {
          uVar4 = *param_5;
          uVar10 = uVar6;
        }
        *param_5 = uVar4;
        param_5[1] = uVar10;
      }
      local_2c = local_2c + 1;
    } while (local_2c < local_30 + 1);
  }
  return;
}


