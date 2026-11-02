/* Module: rmto3260.dll
   Function: FUN_662cc0d0
   Address: 662cc0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662cc0d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *local_c;
  int *local_8;
  
  iVar1 = param_1;
  iVar3 = 0;
  iVar2 = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = -0x7ffbfff9;
  }
  if ((-1 < iVar2) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + -0x10) + 0x28))(param_1 + -0x10,&param_1), -1 < iVar2)
     ) {
    if (param_1 == 1) {
      iVar2 = FUN_662d1080(&local_c);
    }
    else if (param_1 == 2) {
      iVar2 = FUN_662d2d50(&local_c);
    }
    else {
      iVar2 = -0x7ffbfffb;
    }
    if (-1 < iVar2) {
      iVar2 = (**(code **)*local_c)(local_c,&DAT_66306a38,&local_8);
    }
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (((-1 < iVar2) &&
      (iVar2 = (**(code **)(*local_8 + 0x10))(local_8,*(undefined4 *)(iVar1 + 4)), -1 < iVar2)) &&
     (iVar2 = (**(code **)(*local_8 + 0x14))(local_8,*(undefined4 *)(iVar1 + 8)), -1 < iVar2)) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar2 = (**(code **)(*local_8 + 0x18))(local_8,*(int *)(iVar1 + 0xc));
    }
    if (-1 < iVar2) {
      if (*(int *)(iVar1 + 0x10) != 0) {
        iVar2 = (**(code **)(*local_8 + 0x1c))(local_8,*(int *)(iVar1 + 0x10));
      }
      if (-1 < iVar2) {
        if (*(int *)(iVar1 + 0x14) != 0) {
          iVar2 = (**(code **)(*local_8 + 0x20))(local_8,*(int *)(iVar1 + 0x14));
        }
        if ((-1 < iVar2) && (0 < *(int *)(iVar1 + 0x24))) {
          do {
            (**(code **)(*local_8 + 0x48))
                      (local_8,*(undefined4 *)(*(int *)(iVar1 + 0x20) + iVar3 * 4));
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar1 + 0x24));
        }
      }
    }
  }
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*local_8 + 0x44))(local_8);
  }
  if (local_8 != (int *)0x0) {
    iVar3 = 0;
    if (0 < *(int *)(iVar1 + 0x24)) {
      do {
        (**(code **)(*local_8 + 0x4c))(local_8,*(undefined4 *)(*(int *)(iVar1 + 0x20) + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar1 + 0x24));
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar2;
}


