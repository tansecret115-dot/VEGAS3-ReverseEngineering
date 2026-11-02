/* Module: vidpcore.dll
   Function: FUN_5df0ae50
   Address: 5df0ae50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5df0ae50(int *param_1,int *param_2)

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
    FUN_5df11990(&local_10);
    iVar2 = FUN_5df0b880();
    if ((iVar2 == 0) && (iVar2 = FUN_5df0b130(), iVar2 == 0)) {
      iVar5 = -1;
      uVar1 = 0x4e12d;
    }
    else {
      iVar2 = FUN_5df0b870();
      if (iVar2 == 0) {
        FUN_5df11990(&local_10);
        if (*(int *)(*param_1 + 4) == 0) {
          iVar4 = FUN_5df0eb20(param_1 + 1,&local_8);
          if (iVar4 < 0) {
            uVar1 = 0x8004e12e;
            iVar5 = 0;
            goto LAB_5df0afc7;
          }
          iVar4 = FUN_5df0ad60(&local_c,*param_1);
          uVar1 = local_8;
          if (iVar4 < 0) {
            uVar1 = 0x8004e12e;
            iVar5 = 0;
            goto LAB_5df0afc7;
          }
        }
        else {
          local_c = FUN_5df12d60();
          if (local_c < 0) {
            iVar5 = -1;
            uVar1 = 0;
            goto LAB_5df0afc7;
          }
          uVar1 = *(uint *)(*param_1 + 0x10);
        }
        iVar5 = FUN_5df0b220(&local_4);
        if (iVar5 < 0) {
          uVar1 = 0x8004e12f;
          iVar5 = 0;
        }
        else if (local_10 < local_4) {
          uVar1 = 0x8004e130;
          iVar5 = 0;
        }
        else {
          FUN_5df0b1c0();
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
        iVar4 = FUN_5df0f330(param_1 + 1);
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
LAB_5df0afc7:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  return uVar1;
}


