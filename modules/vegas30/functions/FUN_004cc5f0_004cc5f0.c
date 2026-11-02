/* Module: vegas30.exe
   Function: FUN_004cc5f0
   Address: 004cc5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cc5f0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = FUN_00497960(param_1,param_3);
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar1 = *piVar5;
  uVar2 = *(undefined4 *)(param_1 + 0x38c);
  iVar6 = *(int *)(param_1 + 0x390);
  uVar3 = *(undefined4 *)(param_1 + 0x394);
  iVar7 = *(int *)(param_1 + 0x398);
  if ((iVar4 < 0) || (iVar1 <= iVar4)) {
    if (iVar4 != -0x80000000) {
      if (iVar4 == -3) {
        if (0 < iVar1) {
          iVar7 = *(int *)(*(int *)(*(int *)(piVar5[2] + *(int *)(param_1 + 0xbc0) * 4) + 0x69c) +
                          0x1c);
          iVar6 = iVar7 + -2;
        }
      }
      else if (iVar4 == -2) {
        iVar7 = *(int *)(*(int *)(*(int *)(piVar5[2] + -4 + iVar1 * 4) + 0x69c) + 0x24);
        iVar6 = iVar7 + -2;
      }
      else if (iVar4 == -4) {
        iVar4 = FUN_00497960(param_1,*(int *)(param_1 + 0xacc) + -1);
        if (iVar4 < 0) {
          iVar4 = iVar1 + -1;
        }
        iVar7 = *(int *)(*(int *)(*(int *)(piVar5[2] + iVar4 * 4) + 0x69c) + 0x24);
        iVar6 = iVar7 + -2;
      }
      else if (iVar4 == -1) {
        iVar7 = DAT_006477b0 + iVar6;
      }
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(piVar5[2] + iVar4 * 4) + 0x69c);
    iVar1 = *(int *)(iVar4 + 0x1c);
    iVar7 = *(int *)(iVar4 + 0x24);
    if ((param_3 < iVar1) || ((iVar7 - iVar1) / 2 + iVar1 < param_3)) {
      iVar6 = iVar7 + -2;
    }
    else {
      iVar6 = iVar1 + -2;
      iVar7 = iVar1;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
    param_4[1] = iVar6;
    param_4[2] = uVar3;
    param_4[3] = iVar7;
  }
  return;
}


