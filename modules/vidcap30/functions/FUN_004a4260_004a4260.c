/* Module: vidcap30.exe
   Function: FUN_004a4260
   Address: 004a4260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004a4260(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_50 [19];
  
  iVar1 = setjmp3(*(undefined4 *)(param_1 + 4),0);
  if (iVar1 != 0) {
    FUN_004a3b20(param_1);
    return -0x7fffbffb;
  }
  FUN_00524df0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  piVar3 = local_50;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[1] = 0xffffffff;
  local_50[3] = 0xffffffff;
  local_50[2] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xe] = 0;
  piVar3 = (int *)(param_1 + 0x18);
  local_50[0xf] = 0;
  local_50[0] = 0x40;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0x3ff00000;
  local_50[8] = 0;
  local_50[9] = 0;
  FUN_00525ee0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1 + 0x10,
               param_1 + 0x14,piVar3,param_1 + 0x1c,param_1 + 0x20,0,0);
  *(undefined4 *)(param_1 + 0x24) = 1;
  iVar1 = FUN_00525e40(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                       (undefined4 *)(param_1 + 0x28));
  if (iVar1 != 0) {
    FUN_00527020(*(undefined4 *)(param_1 + 4),0x9999999a,0x40019999,*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c));
  }
  uVar4 = 0x1d;
  local_50[0x12] = 0;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    iVar2 = FUN_00525a60(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x10);
    iVar1 = *piVar3;
    if (8 < iVar1) {
      if (iVar1 != 0x10) {
switchD_004a43b9_caseD_3:
        FUN_004a3b20(param_1);
        return -0x7fffbffb;
      }
      if (iVar2 == 0) {
        uVar4 = 0x15;
        goto switchD_004a4370_caseD_1;
      }
      uVar4 = 0x1f;
      goto LAB_004a450b;
    }
    if (iVar2 == 0) {
      switch(iVar1) {
      case 1:
        uVar4 = 0x11;
        break;
      case 2:
        uVar4 = 0x12;
        break;
      default:
        goto switchD_004a43b9_caseD_3;
      case 4:
        uVar4 = 0x13;
        break;
      case 8:
        uVar4 = 0x14;
      }
      goto switchD_004a4370_caseD_1;
    }
    uVar4 = 0x1d;
    break;
  default:
    goto switchD_004a4370_caseD_1;
  case 2:
    if (*piVar3 != 8) {
      if (*piVar3 != 0x10) goto switchD_004a43b9_caseD_3;
      uVar4 = 0x1f;
LAB_004a4440:
      local_50[10] = 1;
      local_50[0xc] = 0;
      local_50[0xb] = 0;
      local_50[0xd] = 0;
      local_50[0xe] = 0;
      local_50[0xf] = 0;
      goto switchD_004a4370_caseD_1;
    }
    iVar1 = FUN_00525a60(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x10);
    if (iVar1 == 0) {
      uVar4 = 0x1b;
      goto switchD_004a4370_caseD_1;
    }
    uVar4 = 0x1d;
LAB_004a450b:
    local_50[0xb] = 0;
    local_50[10] = 1;
    local_50[0xc] = 0;
    local_50[0xd] = 0;
    local_50[0xe] = 0;
    local_50[0xf] = 0;
    goto switchD_004a4370_caseD_1;
  case 3:
    iVar1 = *piVar3;
    if (iVar1 == 1) {
LAB_004a449c:
      uVar4 = 0x18;
    }
    else if (iVar1 == 2) {
      uVar4 = 0x17;
    }
    else {
      if (iVar1 != 4) {
        if (iVar1 != 8) goto switchD_004a43b9_caseD_3;
        goto LAB_004a449c;
      }
      uVar4 = 0x17;
    }
    local_50[0x12] = 1;
    iVar1 = FUN_00525a60(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0x10);
    if (iVar1 != 0) {
      local_50[0xc] = 0;
      local_50[10] = 1;
      local_50[0xd] = 0;
      local_50[0xb] = 0;
      local_50[0xe] = 0;
      uVar4 = 0x1d;
      local_50[0xf] = 0;
      local_50[0x12] = 0;
    }
    goto switchD_004a4370_caseD_1;
  case 4:
    if (*piVar3 == 8) {
      uVar4 = 0x1d;
      goto LAB_004a4440;
    }
    if (*piVar3 != 0x10) goto switchD_004a43b9_caseD_3;
    uVar4 = 0x1f;
    break;
  case 6:
    if (*piVar3 != 8) {
      if (*piVar3 != 0x10) goto switchD_004a43b9_caseD_3;
      uVar4 = 0x1f;
      goto LAB_004a450b;
    }
    uVar4 = 0x1d;
  }
  local_50[0xb] = 0;
  local_50[10] = 1;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
switchD_004a4370_caseD_1:
  local_50[0x11] = 0;
  local_50[0x10] = 0;
  if ((local_50[0x12] != 0) &&
     (iVar1 = FUN_004a3b70(param_1,local_50 + 0x11,local_50 + 0x10), iVar1 < 0)) {
    FUN_004a3b20(param_1);
    return iVar1;
  }
  iVar1 = _SfDibAlloc_28(param_2,uVar4,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x14),local_50[0x11],local_50[0x10],0);
  if ((-1 < iVar1) && (iVar1 = FUN_004a3de0(param_1,*param_2), iVar1 < 0)) {
    _SfDibFree_8(*param_2,0);
    *param_2 = 0;
  }
  FUN_004a3db0(local_50[0x11]);
  return iVar1;
}


