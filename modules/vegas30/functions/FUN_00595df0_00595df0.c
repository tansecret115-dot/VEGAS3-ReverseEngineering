/* Module: vegas30.exe
   Function: FUN_00595df0
   Address: 00595df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00595df0(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  iVar11 = 0;
  FUN_00595760(param_1,param_2);
  iVar8 = **(int **)(param_2 + 0x5d0);
  if ((iVar8 == 0) &&
     ((*(int **)(param_2 + 0x28) == (int *)0x0 || (**(int **)(param_2 + 0x28) < 1)))) {
    FUN_00595790(param_1,param_2);
    return 1;
  }
  iVar9 = 0;
  iVar6 = (int)param_5 >> 0x1f;
  if (0 < iVar8) {
    iVar1 = (*(int **)(param_2 + 0x5d0))[2];
    do {
      iVar11 = *(int *)(iVar1 + iVar9 * 4);
      piVar10 = (int *)(iVar1 + iVar9 * 4);
      iVar7 = *(int *)(iVar11 + 0x1c);
      uVar2 = *(uint *)(iVar11 + 0x18);
      if ((iVar7 <= param_4) && ((iVar7 < param_4 || (uVar2 <= param_3)))) {
        uVar3 = *(uint *)(iVar11 + 0x2c);
        uVar4 = uVar3 + uVar2;
        iVar7 = ((int)uVar3 >> 0x1f) + iVar7 + (uint)CARRY4(uVar3,uVar2);
        iVar5 = iVar7 - (uint)(uVar4 == 0);
        if ((param_4 <= iVar5) && ((param_4 < iVar5 || (param_3 <= uVar4 - 1)))) {
          if ((*(int *)(iVar11 + 0x30) < 1) || (*(int *)(iVar11 + 0x38) != 0)) goto LAB_00595fd8;
          for (; iVar9 < iVar8; iVar9 = iVar9 + 1) {
            iVar11 = (iVar7 - param_4) - (uint)(uVar4 < param_3);
            if ((iVar6 < iVar11) || ((iVar6 <= iVar11 && (param_5 <= uVar4 - param_3)))) {
              FUN_00595790(param_1,param_2);
              return 1;
            }
            iVar11 = *piVar10;
            if ((*(int *)(iVar11 + 0x30) < 1) || (*(int *)(iVar11 + 0x38) != 0)) goto LAB_00595fd8;
            uVar2 = *(uint *)(iVar11 + 0x2c);
            uVar4 = uVar2 + *(uint *)(iVar11 + 0x18);
            iVar7 = ((int)uVar2 >> 0x1f) + *(int *)(iVar11 + 0x1c) +
                    (uint)CARRY4(uVar2,*(uint *)(iVar11 + 0x18));
            piVar10 = piVar10 + 1;
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (iVar8 != 0) {
      iVar8 = **(int **)(*(int *)(param_2 + 0x5d0) + 8);
      iVar11 = *(int *)(iVar8 + 0x1c);
      if ((param_4 <= iVar11) && ((param_4 < iVar11 || (param_3 < *(uint *)(iVar8 + 0x18))))) {
        FUN_00595790(param_1,param_2);
        return 2;
      }
    }
  }
  else if (iVar11 != 0) {
    iVar8 = iVar6 + param_4 + (uint)CARRY4(param_5,param_3);
    if ((*(int *)(iVar11 + 0x1c) <= iVar8) && (iVar8 <= *(int *)(iVar11 + 0x1c))) {
      FUN_00595790(param_1,param_2);
      return 0;
    }
  }
LAB_00595fd8:
  FUN_00595790(param_1,param_2);
  return 0;
}


