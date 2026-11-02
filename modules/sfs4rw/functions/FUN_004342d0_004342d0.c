/* Module: sfs4rw.dll
   Function: FUN_004342d0
   Address: 004342d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004342d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint local_50 [17];
  uint *local_c;
  int local_8;
  
  iVar1 = setjmp3(*(undefined4 *)(param_1 + 4),0);
  if (iVar1 != 0) {
    FUN_00433b90(param_1);
    return -0x7fffbffb;
  }
  FUN_00446770(*(int **)(param_1 + 4),*(uint **)(param_1 + 8));
  puVar5 = local_50;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[1] = 0xffffffff;
  local_50[3] = 0xffffffff;
  local_50[2] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xe] = 0;
  puVar5 = (uint *)(param_1 + 0x18);
  local_50[0xf] = 0;
  local_50[0] = 0x40;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0x3ff00000;
  local_50[8] = 0;
  local_50[9] = 0;
  FUN_00447860(*(int *)(param_1 + 4),*(uint **)(param_1 + 8),(uint *)(param_1 + 0x10),
               (uint *)(param_1 + 0x14),puVar5,(uint *)(param_1 + 0x1c),(uint *)(param_1 + 0x20),
               (uint *)0x0,(uint *)0x0);
  *(undefined4 *)(param_1 + 0x24) = 1;
  iVar1 = FUN_004477c0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),(double *)(param_1 + 0x28));
  if (iVar1 != 0) {
    FUN_004489a0(*(int *)(param_1 + 4),2.2,*(double *)(param_1 + 0x28));
  }
  iVar1 = 0x1d;
  local_8 = 0;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    uVar2 = FUN_004473e0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
    uVar4 = *puVar5;
    if (8 < (int)uVar4) {
      if (uVar4 != 0x10) {
switchD_00434429_caseD_3:
        FUN_00433b90(param_1);
        return -0x7fffbffb;
      }
      if (uVar2 == 0) {
        iVar1 = 0x15;
        goto switchD_004343e0_caseD_1;
      }
      iVar1 = 0x1f;
      goto LAB_0043457b;
    }
    if (uVar2 == 0) {
      switch(uVar4) {
      case 1:
        iVar1 = 0x11;
        break;
      case 2:
        iVar1 = 0x12;
        break;
      default:
        goto switchD_00434429_caseD_3;
      case 4:
        iVar1 = 0x13;
        break;
      case 8:
        iVar1 = 0x14;
      }
      goto switchD_004343e0_caseD_1;
    }
    iVar1 = 0x1d;
    break;
  default:
    goto switchD_004343e0_caseD_1;
  case 2:
    if (*puVar5 != 8) {
      if (*puVar5 != 0x10) goto switchD_00434429_caseD_3;
      iVar1 = 0x1f;
LAB_004344b0:
      local_50[10] = 1;
      local_50[0xc] = 0;
      local_50[0xb] = 0;
      local_50[0xd] = 0;
      local_50[0xe] = 0;
      local_50[0xf] = 0;
      goto switchD_004343e0_caseD_1;
    }
    uVar4 = FUN_004473e0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
    if (uVar4 == 0) {
      iVar1 = 0x1b;
      goto switchD_004343e0_caseD_1;
    }
    iVar1 = 0x1d;
LAB_0043457b:
    local_50[0xb] = 0;
    local_50[10] = 1;
    local_50[0xc] = 0;
    local_50[0xd] = 0;
    local_50[0xe] = 0;
    local_50[0xf] = 0;
    goto switchD_004343e0_caseD_1;
  case 3:
    uVar4 = *puVar5;
    if (uVar4 == 1) {
LAB_0043450c:
      iVar1 = 0x18;
    }
    else if (uVar4 == 2) {
      iVar1 = 0x17;
    }
    else {
      if (uVar4 != 4) {
        if (uVar4 != 8) goto switchD_00434429_caseD_3;
        goto LAB_0043450c;
      }
      iVar1 = 0x17;
    }
    local_8 = 1;
    uVar4 = FUN_004473e0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
    if (uVar4 != 0) {
      local_50[0xc] = 0;
      local_50[10] = 1;
      local_50[0xd] = 0;
      local_50[0xb] = 0;
      local_50[0xe] = 0;
      iVar1 = 0x1d;
      local_50[0xf] = 0;
      local_8 = 0;
    }
    goto switchD_004343e0_caseD_1;
  case 4:
    if (*puVar5 == 8) {
      iVar1 = 0x1d;
      goto LAB_004344b0;
    }
    if (*puVar5 != 0x10) goto switchD_00434429_caseD_3;
    iVar1 = 0x1f;
    break;
  case 6:
    if (*puVar5 != 8) {
      if (*puVar5 != 0x10) goto switchD_00434429_caseD_3;
      iVar1 = 0x1f;
      goto LAB_0043457b;
    }
    iVar1 = 0x1d;
  }
  local_50[0xb] = 0;
  local_50[10] = 1;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
switchD_004343e0_caseD_1:
  local_c = (uint *)0x0;
  local_50[0x10] = 0;
  if ((local_8 != 0) && (iVar3 = FUN_00433be0(param_1,&local_c,local_50 + 0x10), iVar3 < 0)) {
    FUN_00433b90(param_1);
    return iVar3;
  }
  iVar1 = FUN_00440170(param_2,iVar1,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),local_c,
                       local_50[0x10],0);
  if ((-1 < iVar1) && (iVar1 = FUN_00433e50(param_1,(int *)*param_2), iVar1 < 0)) {
    FUN_00440110((LPCVOID)*param_2,0);
    *param_2 = 0;
  }
  FUN_00433e20(local_c);
  return iVar1;
}


