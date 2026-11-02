/* Module: vegas30.exe
   Function: FUN_005be080
   Address: 005be080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005be080(int *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piStack_74;
  int *piStack_70;
  int iStack_6c;
  int *piStack_68;
  int *piStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int **ppiStack_54;
  int local_44 [6];
  int local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined1 *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = (undefined1 *)0x0;
  local_14 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != 0) {
    iStack_58 = *(int *)(*(int *)(*(int *)(param_3 + 0x1dc) + 8) + param_5 * 4);
    if (iStack_58 == 0) {
      return -0x7fffbffd;
    }
    ppiStack_54 = (int **)0x0;
    iStack_5c = param_3;
    uStack_60 = 0x5be0cc;
    local_8 = iStack_58;
    FUN_005cb690();
  }
  piVar1 = param_1;
  local_18 = 0;
  ppiStack_54 = &local_20;
  iStack_58 = 1;
  iStack_5c = 0;
  uStack_60 = 0;
  piStack_64 = param_1;
  iVar4 = -0x7ffb1f7d;
  piStack_68 = (int *)0x5be0e9;
  iVar2 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar2) {
    piStack_68 = (int *)&param_1;
    piStack_70 = &local_18;
    iStack_6c = 4;
    piStack_74 = piVar1;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (-1 < iVar2) {
      if (param_1 != (int *)0x4) {
        local_18 = 0;
      }
      piStack_68 = (int *)0x0;
      iStack_6c = 0;
      piStack_70 = (int *)local_1c;
      piStack_74 = local_20;
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar2 < 0) {
        return -0x7ffb1f7d;
      }
    }
  }
  iStack_6c = local_18;
  if ((local_18 == 0x24) || (local_18 == 0x20)) {
    piVar5 = local_44;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    piStack_68 = &local_c;
    piStack_70 = local_44;
    piStack_74 = piVar1;
    iVar4 = (**(code **)(*piVar1 + 0xc))();
    if ((-1 < iVar4) && (iVar4 = -0x7ffb1ff8, local_18 == local_c)) {
      iVar4 = 0;
      if (local_44[4] != 0) {
        FUN_0060ac30();
        local_10 = (undefined1 *)&piStack_74;
        iVar4 = FUN_005be000(piVar1,&piStack_74,local_44[4]);
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      if (param_6 == 0) {
        if (local_2c == 1) {
          local_2c = 0;
          iVar2 = -1;
        }
        else {
          iVar2 = param_5;
          if (local_2c != 0) {
            return -0x7fff0001;
          }
        }
        iVar4 = FUN_005cb940(&local_8,param_3,local_44[3],iVar2,local_10);
        if (iVar4 < 0) {
          return iVar4;
        }
        if (local_44[3] == 2) {
          FUN_005cba40(local_8);
        }
        *(int *)(local_8 + 0x10) = local_44[1];
        *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) | 0x200000;
        *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) & 0xfffffdff;
        *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) & 0xfffffffb;
        *(int *)(local_8 + 0x694) = local_44[2];
      }
      else {
        FUN_005cb690(param_3,local_8,local_10);
      }
      iVar2 = param_2;
      if (-1 < iVar4) {
        *(int *)(local_8 + 0x690) = local_44[5];
        *(undefined4 *)(local_8 + 0x1c) = local_28;
        iVar3 = local_24;
        if (local_24 == 0) {
          iVar3 = 1;
        }
        *(int *)(local_8 + 0x20) = iVar3;
        if (param_4 != (int *)0x0) {
          *param_4 = local_8;
        }
        if (((param_2 != 0) &&
            (iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_14,4,&local_c), -1 < iVar4)) &&
           (iVar4 = -0x7ffb1ff8, local_c == 4)) {
          param_6 = 0;
          if (0 < local_14) {
            do {
              iVar4 = FUN_005c0e90(piVar1,iVar2,param_3,local_8,param_6,0,0);
              if (iVar4 < 0) {
                return iVar4;
              }
              param_6 = param_6 + 1;
            } while (param_6 < local_14);
            if (iVar4 < 0) {
              return iVar4;
            }
          }
          iVar4 = FUN_005c22f0(piVar1,iVar2,param_3,local_8 + 0x638,local_8);
          if (-1 < iVar4) {
            switch(*(undefined4 *)(local_8 + 4)) {
            case 2:
              iVar4 = FUN_005c0460(piVar1,iVar2,local_8 + 0x38);
              if (-1 < iVar4) {
                iVar2 = FUN_005d2690(param_3,local_8);
                return iVar2;
              }
              break;
            case 3:
switchD_005be31b_caseD_3:
              iVar2 = FUN_005c0a90(piVar1,iVar2,local_8 + 0x38,local_8);
              return iVar2;
            case 4:
switchD_005be31b_caseD_4:
              iVar2 = FUN_005c0e70(piVar1,iVar2,local_8 + 0x38);
              return iVar2;
            case 5:
switchD_005be31b_caseD_5:
              iVar4 = FUN_005c0e80(piVar1,iVar2,local_8 + 0x38);
            }
          }
        }
      }
    }
  }
  else if (local_18 == 0x1c) {
    piVar5 = local_44 + 2;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    piStack_68 = &local_c;
    piStack_70 = local_44 + 2;
    piStack_74 = piVar1;
    iVar4 = (**(code **)(*piVar1 + 0xc))();
    iVar2 = local_2c;
    if ((-1 < iVar4) && (iVar4 = -0x7ffb1ff8, local_c == 0x1c)) {
      iVar4 = 0;
      if (local_2c != 0) {
        FUN_0060ac30();
        local_10 = (undefined1 *)&piStack_74;
        iVar4 = FUN_005be000(piVar1,&piStack_74,iVar2);
        if (iVar4 < 0) {
          return iVar4;
        }
      }
      if (param_6 == 0) {
        if (local_24 == 1) {
          local_24 = 0;
          iVar2 = -1;
        }
        else {
          iVar2 = param_5;
          if (local_24 != 0) {
            return -0x7fff0001;
          }
        }
        iVar4 = FUN_005cb940(&local_8,param_3,local_44[5],iVar2,local_10);
        if (iVar4 < 0) {
          return iVar4;
        }
        if (local_44[5] == 2) {
          FUN_005cba40(local_8);
        }
        *(int *)(local_8 + 0x10) = local_44[3];
        *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) | 0x200000;
        *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) & 0xfffffdff;
        *(uint *)(local_8 + 0x10) = *(uint *)(local_8 + 0x10) & 0xfffffffb;
        *(int *)(local_8 + 0x694) = local_44[4];
      }
      else {
        FUN_005cb690(param_3,local_8,local_10);
      }
      iVar2 = param_2;
      if (-1 < iVar4) {
        *(undefined4 *)(local_8 + 0x690) = local_28;
        if (param_4 != (int *)0x0) {
          *param_4 = local_8;
        }
        if (((param_2 != 0) &&
            (iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_14,4,&local_c), -1 < iVar4)) &&
           (iVar4 = -0x7ffb1ff8, local_c == 4)) {
          param_6 = 0;
          if (0 < local_14) {
            do {
              iVar4 = FUN_005c0e90(piVar1,iVar2,param_3,local_8,param_6,0,0);
              if (iVar4 < 0) {
                return iVar4;
              }
              param_6 = param_6 + 1;
            } while (param_6 < local_14);
            if (iVar4 < 0) {
              return iVar4;
            }
          }
          iVar4 = FUN_005c22f0(piVar1,iVar2,param_3,local_8 + 0x638,local_8);
          if (-1 < iVar4) {
            switch(*(undefined4 *)(local_8 + 4)) {
            case 2:
              iVar2 = FUN_005c0460(piVar1,iVar2,local_8 + 0x38);
              return iVar2;
            case 3:
              goto switchD_005be31b_caseD_3;
            case 4:
              goto switchD_005be31b_caseD_4;
            case 5:
              goto switchD_005be31b_caseD_5;
            default:
              break;
            }
          }
        }
      }
    }
  }
  return iVar4;
}


