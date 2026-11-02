/* Module: vegas30.exe
   Function: FUN_0049a0c0
   Address: 0049a0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049a0c0(int param_1,int *param_2,int param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int local_2c;
  int local_28;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [8];
  
  if (param_2 == (int *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = *param_2;
  }
  local_28 = 0;
  *param_4 = 0;
  param_4[1] = 0xc0000000;
  *param_5 = 0;
  param_5[1] = 0x20000000;
  if (local_2c != -1 && -1 < local_2c + 1) {
    do {
      iVar10 = param_3;
      if (local_28 != local_2c) {
        iVar10 = *(int *)(param_2[2] + local_28 * 4);
      }
      if (((*(uint *)(iVar10 + 0x10) & 8) == 0) && ((*(uint *)(iVar10 + 0x10) & 0x100000) == 0)) {
        FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar10,0,&local_18,local_8,1);
        FUN_005c71f0(*(undefined4 *)(param_1 + 0xbc8),iVar10,0,&local_20,&local_10,0);
        iVar3 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),iVar10);
        piVar1 = *(int **)(*(int *)(iVar10 + 8) + 0x24);
        iVar3 = iVar3 + -1;
        if (piVar1 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar1;
        }
        if ((iVar3 < 0) || (iVar6 + -1 < iVar3)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(piVar1[2] + iVar3 * 4);
        }
        if (iVar3 == 0) {
          uVar11 = 0;
          iVar3 = 0;
        }
        else {
          uVar11 = *(uint *)(iVar3 + 0x18);
          iVar3 = *(int *)(iVar3 + 0x1c);
        }
        if ((((*(uint *)(iVar10 + 0x10) & 0x100) == 0) && (-1 < local_1c)) && (-1 < local_14)) {
          bVar2 = false;
          uVar5 = local_18 - local_20;
          uVar4 = (local_14 - local_1c) - (uint)(local_18 < local_20);
        }
        else {
          bVar2 = true;
          uVar5 = 0;
          uVar4 = 0xc0000000;
        }
        uVar7 = uVar11 - *(uint *)(iVar10 + 0x18);
        uVar11 = (iVar3 - *(int *)(iVar10 + 0x1c)) - (uint)(uVar11 < *(uint *)(iVar10 + 0x18));
        if (bVar2) {
          uVar9 = 0;
          uVar8 = 0x20000000;
        }
        else {
          uVar9 = local_10 - 1;
          uVar8 = local_c - (uint)(local_10 == 0);
        }
        if (((int)uVar4 <= (int)uVar11) && (((int)uVar4 < (int)uVar11 || (uVar5 <= uVar7)))) {
          uVar4 = uVar11;
          uVar5 = uVar7;
        }
        uVar11 = param_4[1];
        if (((int)uVar4 < (int)uVar11) || (((int)uVar4 <= (int)uVar11 && (uVar5 <= *param_4)))) {
          uVar4 = uVar11;
          uVar5 = *param_4;
        }
        *param_4 = uVar5;
        param_4[1] = uVar4;
        uVar11 = param_5[1];
        uVar4 = *param_5;
        if (((int)uVar8 <= (int)uVar11) && (((int)uVar8 < (int)uVar11 || (uVar9 < uVar4)))) {
          uVar11 = uVar8;
          uVar4 = uVar9;
        }
        *param_5 = uVar4;
        param_5[1] = uVar11;
      }
      local_28 = local_28 + 1;
    } while (local_28 < local_2c + 1);
  }
  return;
}


