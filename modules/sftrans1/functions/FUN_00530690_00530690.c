/* Module: sftrans1.dll
   Function: FUN_00530690
   Address: 00530690
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00530690(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  iVar5 = 0;
  iVar4 = -0x7fffbffb;
  if (*param_1 == 0) {
    uVar1 = 0x8004e12d;
  }
  else {
    FUN_005371a0(&local_10);
    iVar2 = FUN_005310c0();
    if ((iVar2 == 0) && (iVar2 = FUN_00530970(), iVar2 == 0)) {
      iVar5 = -1;
      uVar1 = 0x4e12d;
    }
    else {
      iVar2 = FUN_005310b0();
      if (iVar2 == 0) {
        FUN_005371a0(&local_10);
        if (*(int *)(*param_1 + 4) == 0) {
          iVar4 = FUN_00534360(param_1 + 1,&local_8);
          if (iVar4 < 0) {
            uVar1 = 0x8004e12e;
            iVar5 = 0;
            goto LAB_00530807;
          }
          iVar4 = FUN_005305a0(&local_c,*param_1);
          uVar1 = local_8;
          if (iVar4 < 0) {
            uVar1 = 0x8004e12e;
            iVar5 = 0;
            goto LAB_00530807;
          }
        }
        else {
          local_c = FUN_00538570();
          if (local_c < 0) {
            iVar5 = -1;
            uVar1 = 0;
            goto LAB_00530807;
          }
          uVar1 = *(uint *)(*param_1 + 0x10);
        }
        iVar5 = FUN_00530a60(&local_4);
        if (iVar5 < 0) {
          uVar1 = 0x8004e12f;
          iVar5 = 0;
        }
        else if (local_10 < local_4) {
          uVar1 = 0x8004e130;
          iVar5 = 0;
        }
        else {
          FUN_00530a00();
          uVar3 = uVar1;
          if ((local_10 < uVar1) && (uVar3 = local_10, uVar1 - local_10 != 1)) {
            uVar1 = 0x8004e131;
            iVar5 = 0;
          }
          else {
            iVar5 = (local_c - local_10) + uVar3;
            if ((iVar5 < 1) || (0x3fe < iVar5)) {
              iVar5 = 0;
              uVar1 = 0x8004e135 - (*(int *)(*param_1 + 4) != 0);
            }
            else {
              uVar1 = (iVar4 != 0x4e135) - 1 & 0x4e135;
            }
          }
        }
      }
      else {
        iVar4 = FUN_00534b70(param_1 + 1);
        if (iVar4 == 0) {
          uVar1 = 0x8004e136;
        }
        else {
          iVar5 = -1;
          uVar1 = 0x4e12c;
        }
      }
    }
  }
LAB_00530807:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  return uVar1;
}


