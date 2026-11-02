/* Module: vegas30.exe
   Function: FUN_00495490
   Address: 00495490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00495490(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  
  uVar1 = *param_3;
  uVar2 = *(uint *)(param_1 + 400);
  iVar11 = (param_3[1] - *(int *)(param_1 + 0x194)) - (uint)(uVar1 < uVar2);
  iVar9 = *(int *)(param_1 + 0x194) + param_3[1] + (uint)CARRY4(uVar2,uVar1);
  iVar5 = FUN_00497960(param_1,*(undefined4 *)(param_2 + 4));
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (piVar6 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8)), piVar6 == (int *)0x0)) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar6;
  }
  if ((iVar5 < 0) || (iVar7 + -1 < iVar5)) {
    iVar5 = 0;
  }
  else if (*(int *)(param_1 + 0xbc8) == 0) {
    iVar5 = *(int *)(_DAT_00000008 + iVar5 * 4);
  }
  else {
    iVar7 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    iVar5 = *(int *)(*(int *)(iVar7 + 8) + iVar5 * 4);
  }
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x650) != 0)) &&
     (*(int *)(iVar5 + 0x664) - *(int *)(iVar5 + 0x65c) != 2)) {
    iVar7 = *(int *)(iVar5 + 0x678);
    piVar6 = *(int **)(iVar5 + 0x650);
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6;
    }
    if ((iVar7 < 0) || (iVar5 + -1 < iVar7)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(piVar6[2] + iVar7 * 4);
    }
    if ((iVar5 != 0) && (iVar7 = FUN_0052bc70(*(undefined4 *)(iVar5 + 0x10)), iVar7 != 0)) {
      uVar3 = **(uint **)(iVar5 + 0x30);
      puVar4 = (uint *)(*(uint **)(iVar5 + 0x30))[2];
      uVar8 = 0;
      puVar10 = puVar4;
      if (uVar3 != 0) {
        do {
          if ((iVar11 < (int)puVar10[1]) ||
             ((iVar11 <= (int)puVar10[1] && (uVar1 - uVar2 <= *puVar10)))) {
            uVar3 = puVar4[uVar8 * 4 + 1];
            if (iVar9 < (int)uVar3) {
              return 0;
            }
            if ((iVar9 <= (int)uVar3) && (uVar2 + uVar1 < puVar4[uVar8 * 4])) {
              return 0;
            }
            *param_3 = puVar4[uVar8 * 4];
            param_3[1] = uVar3;
            return 1;
          }
          uVar8 = uVar8 + 1;
          puVar10 = puVar10 + 4;
        } while (uVar8 < uVar3);
      }
    }
  }
  return 0;
}


