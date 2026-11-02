/* Module: rmto3260.dll
   Function: FUN_662c5f40
   Address: 662c5f40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c5f40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_10;
  int *local_c;
  int *local_8;
  
  iVar1 = param_1;
  iVar4 = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  if ((param_2 == (int *)0x1) || (param_2 == (int *)0x2)) {
    iVar5 = FUN_662c7d80(&local_c);
  }
  else {
    iVar5 = -0x7ffbfffb;
  }
  if (-1 < iVar5) {
    iVar5 = (**(code **)*local_c)(local_c,&DAT_66306a08,&local_8);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if ((-1 < iVar5) && (*(int *)(param_1 + 0x42) != 0)) {
    iVar5 = (**(code **)(*local_8 + 0x24))(local_8,*(int *)(param_1 + 0x42));
  }
  if (-1 < iVar5) {
    if (*(int *)(param_1 + 0x4e) != 0) {
      iVar5 = (**(code **)(*local_8 + 0x2c))(local_8,*(int *)(param_1 + 0x4e));
    }
    if ((-1 < iVar5) && (0 < *(int *)(param_1 + 0x56))) {
      do {
        iVar5 = (**(code **)(*local_8 + 0x34))
                          (local_8,*(undefined4 *)(*(int *)(param_1 + 0x52) + iVar4 * 4));
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x56));
    }
  }
  if ((-1 < iVar5) && (iVar4 = *(int *)(param_1 + 0x46), iVar4 != 0)) {
    param_1 = *(int *)(iVar4 + 0x10);
    local_10 = *(int *)(iVar4 + 4);
    param_2 = (int *)0x0;
    if ((ushort)param_1 != 0) {
      do {
        if (iVar5 < 0) break;
        piVar2 = (int *)FUN_662ed930(&local_10);
        if (*piVar2 != 0) {
          iVar5 = (**(code **)(*local_8 + 0xc))(local_8,*piVar2);
        }
        param_2 = (int *)((int)param_2 + 1);
      } while ((ushort)param_2 < (ushort)param_1);
    }
  }
  iVar4 = 0;
  if ((-1 < iVar5) &&
     (iVar5 = (**(code **)(*local_8 + 0x10))(local_8,*(undefined4 *)(iVar1 + 0x20)), -1 < iVar5)) {
    if ((short)param_1 == 1) {
      uVar6 = *(undefined4 *)(iVar1 + 0x24);
    }
    else {
      uVar6 = 0;
    }
    iVar5 = (**(code **)(*local_8 + 0x14))(local_8,uVar6);
    if (-1 < iVar5) {
      if ((short)param_1 == 1) {
        uVar6 = *(undefined4 *)(iVar1 + 0x28);
      }
      else {
        uVar6 = 0;
      }
      iVar5 = (**(code **)(*local_8 + 0x18))(local_8,uVar6);
      if (-1 < iVar5) {
        uVar3 = extraout_var;
        if (*(int *)(iVar1 + 0x3e) != 0) {
          if (*(int *)(iVar1 + 0x34) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(iVar1 + 0x34) + 8;
          }
          iVar5 = (**(code **)(*local_8 + 0x1c))(local_8,iVar5);
          uVar3 = extraout_var_00;
        }
        if (-1 < iVar5) {
          if (*(int *)(iVar1 + 0x3a) != 0) {
            iVar5 = (**(code **)(*local_8 + 0x20))
                              (local_8,CONCAT22(uVar3,*(undefined2 *)(iVar1 + 0x38)));
          }
          if (-1 < iVar5) {
            if (*(int *)(iVar1 + 0x18) != 0) {
              param_2 = (int *)0x0;
              iVar5 = (**(code **)*local_8)(local_8,&DAT_66306af8,&param_2);
              if (-1 < iVar5) {
                iVar5 = (**(code **)(*param_2 + 0xc))(param_2,*(undefined4 *)(iVar1 + 0x1c));
              }
              if (param_2 != (int *)0x0) {
                (**(code **)(*param_2 + 8))(param_2);
              }
            }
            if (-1 < iVar5) {
              iVar5 = (**(code **)(*local_8 + 0x30))(local_8);
            }
          }
        }
      }
    }
  }
  if (0 < *(int *)(iVar1 + 0x56)) {
    do {
      (**(code **)(*local_8 + 0x38))(local_8,*(undefined4 *)(*(int *)(iVar1 + 0x52) + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x56));
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar5;
}


