/* Module: rmto3260.dll
   Function: FUN_662c1e40
   Address: 662c1e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c1e40(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *local_8;
  
  piVar1 = param_1;
  iVar5 = 0;
  local_8 = (int *)0x0;
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
    iVar5 = -0x7ffbfff9;
  }
  if (-1 < iVar5) {
    param_1 = (int *)0x0;
    iVar5 = RMACreateRMFFCopy(&param_1);
    if ((-1 < iVar5) &&
       (iVar5 = (**(code **)*param_1)(param_1,&DAT_66306a08,&local_8), param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    if ((-1 < iVar5) && (iVar5 = (**(code **)(*local_8 + 0xc))(local_8,piVar1[5]), -1 < iVar5)) {
      iVar4 = piVar1[0x15];
      if (iVar4 != 0) {
        param_1 = *(int **)(iVar4 + 4);
        if ((short)*(uint *)(iVar4 + 0x10) != 0) {
          uVar3 = *(uint *)(iVar4 + 0x10) & 0xffff;
          do {
            piVar2 = (int *)FUN_662ed930((int *)&param_1);
            if (*piVar2 != 0) {
              (**(code **)(*local_8 + 0xc))(local_8,*piVar2);
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      if ((-1 < iVar5) && (iVar5 = (**(code **)(*local_8 + 0x10))(local_8,piVar1[6]), -1 < iVar5)) {
        if (piVar1[0x13] != 0) {
          iVar5 = (**(code **)(*local_8 + 0x24))(local_8,piVar1[0x13]);
        }
        if ((-1 < iVar5) && (iVar4 = 0, 0 < piVar1[0x1a])) {
          do {
            iVar5 = (**(code **)(*local_8 + 0x34))
                              (local_8,*(undefined4 *)(piVar1[0x19] + iVar4 * 4));
            iVar4 = iVar4 + 1;
          } while (iVar4 < piVar1[0x1a]);
        }
      }
    }
  }
  iVar4 = 0;
  if (-1 < iVar5) {
    if ((int *)piVar1[0x18] != (int *)0x0) {
      FUN_662de0a0((int *)piVar1[0x18],1);
      iVar5 = (**(code **)(*local_8 + 0x2c))(local_8,piVar1[0x18]);
    }
    if ((((-1 < iVar5) && (iVar5 = FUN_662c2060(piVar1 + -4,local_8), -1 < iVar5)) &&
        (iVar5 = FUN_662c2120(piVar1 + -4,local_8), -1 < iVar5)) &&
       ((iVar5 = (**(code **)(*local_8 + 0x14))(local_8,piVar1[0xb]), -1 < iVar5 &&
        (iVar5 = (**(code **)(*local_8 + 0x18))(local_8,piVar1[0xc]), -1 < iVar5)))) {
      if (piVar1[3] != 0) {
        param_1 = (int *)0x0;
        iVar5 = (**(code **)*local_8)(local_8,&DAT_66306af8,&param_1);
        if (-1 < iVar5) {
          iVar5 = (**(code **)(*param_1 + 0xc))(param_1,piVar1[4]);
        }
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
      if (-1 < iVar5) {
        iVar5 = (**(code **)(*local_8 + 0x30))(local_8);
      }
    }
  }
  if (0 < piVar1[0x1a]) {
    do {
      (**(code **)(*local_8 + 0x38))(local_8,*(undefined4 *)(piVar1[0x19] + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[0x1a]);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar5;
}


