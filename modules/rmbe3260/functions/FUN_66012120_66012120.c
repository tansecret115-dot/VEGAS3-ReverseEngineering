/* Module: rmbe3260.dll
   Function: FUN_66012120
   Address: 66012120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66012120(int *param_1)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  piVar2 = param_1;
  (**(code **)(*param_1 + 0x80))(param_1);
  local_8 = (int *)0x0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  iVar4 = (*(code *)**(undefined4 **)piVar2[8])((undefined4 *)piVar2[8],&DAT_66065a28,&local_8);
  if (((-1 < iVar4) && (iVar4 = (**(code **)(*local_8 + 0xc))(local_8,&local_20), -1 < iVar4)) &&
     (iVar4 = (**(code **)(*local_8 + 0x1c))(local_8,&local_1c), -1 < iVar4)) {
    iVar4 = (**(code **)(*local_8 + 0x14))(local_8,&local_18);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  iVar1 = piVar2[0x16];
  param_1 = (int *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  uVar3 = 0;
  if ((ushort)iVar1 == 0) {
    return iVar4;
  }
  do {
    iVar4 = *(int *)(piVar2[0x15] + (uint)uVar3 * 4);
    if (iVar4 == 0) {
      iVar4 = -0x7ffbfff7;
    }
    else {
      iVar5 = (**(code **)(*piVar2 + 0x8c))(piVar2,iVar4,&local_14,&local_10,&local_c);
      if (iVar5 < 0) {
        return iVar5;
      }
      param_1 = (int *)0x0;
      iVar5 = (**(code **)(*piVar2 + 0x88))
                        (piVar2,local_20,local_1c,local_18,local_14,local_10,local_c,&param_1);
      if ((iVar5 == 0x40012) && (iVar5 = FUN_66058e20(&param_1), -1 < iVar5)) {
        iVar5 = (**(code **)(*param_1 + 0xc))
                          (param_1,local_20,local_1c,local_18,local_14,local_10,local_c);
        if (iVar5 < 0) {
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
            param_1 = (int *)0x0;
          }
        }
        else {
          (**(code **)(*param_1 + 4))(param_1);
          FUN_6605cf30(piVar2 + 0x24,piVar2[0x25],param_1);
        }
      }
      if (iVar5 < 0) {
        return iVar5;
      }
      *(int **)(iVar4 + 0x40) = param_1;
      iVar4 = (**(code **)(*param_1 + 0x2c))(param_1,*(undefined4 *)(iVar4 + 4));
    }
    if (iVar4 < 0) {
      return iVar4;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < (ushort)iVar1);
  return iVar4;
}


