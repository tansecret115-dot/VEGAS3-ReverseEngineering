/* Module: mp3rw.dll
   Function: FUN_00434350
   Address: 00434350
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00434350(int param_1,undefined4 *param_2)

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
    FUN_00433c10(param_1);
    return -0x7fffbffb;
  }
  FUN_004467f0(*(int **)(param_1 + 4),*(uint **)(param_1 + 8));
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
  FUN_004478e0(*(int *)(param_1 + 4),*(uint **)(param_1 + 8),(uint *)(param_1 + 0x10),
               (uint *)(param_1 + 0x14),puVar5,(uint *)(param_1 + 0x1c),(uint *)(param_1 + 0x20),
               (uint *)0x0,(uint *)0x0);
  *(undefined4 *)(param_1 + 0x24) = 1;
  iVar1 = FUN_00447840(*(int *)(param_1 + 4),*(int *)(param_1 + 8),(double *)(param_1 + 0x28));
  if (iVar1 != 0) {
    FUN_00448a20(*(int *)(param_1 + 4),2.2,*(double *)(param_1 + 0x28));
  }
  iVar1 = 0x1d;
  local_8 = 0;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    uVar2 = FUN_00447460(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
    uVar4 = *puVar5;
    if (8 < (int)uVar4) {
      if (uVar4 != 0x10) {
switchD_004344a9_caseD_3:
        FUN_00433c10(param_1);
        return -0x7fffbffb;
      }
      if (uVar2 == 0) {
        iVar1 = 0x15;
        goto switchD_00434460_caseD_1;
      }
      iVar1 = 0x1f;
      goto LAB_004345fb;
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
        goto switchD_004344a9_caseD_3;
      case 4:
        iVar1 = 0x13;
        break;
      case 8:
        iVar1 = 0x14;
      }
      goto switchD_00434460_caseD_1;
    }
    iVar1 = 0x1d;
    break;
  default:
    goto switchD_00434460_caseD_1;
  case 2:
    if (*puVar5 != 8) {
      if (*puVar5 != 0x10) goto switchD_004344a9_caseD_3;
      iVar1 = 0x1f;
LAB_00434530:
      local_50[10] = 1;
      local_50[0xc] = 0;
      local_50[0xb] = 0;
      local_50[0xd] = 0;
      local_50[0xe] = 0;
      local_50[0xf] = 0;
      goto switchD_00434460_caseD_1;
    }
    uVar4 = FUN_00447460(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
    if (uVar4 == 0) {
      iVar1 = 0x1b;
      goto switchD_00434460_caseD_1;
    }
    iVar1 = 0x1d;
LAB_004345fb:
    local_50[0xb] = 0;
    local_50[10] = 1;
    local_50[0xc] = 0;
    local_50[0xd] = 0;
    local_50[0xe] = 0;
    local_50[0xf] = 0;
    goto switchD_00434460_caseD_1;
  case 3:
    uVar4 = *puVar5;
    if (uVar4 == 1) {
LAB_0043458c:
      iVar1 = 0x18;
    }
    else if (uVar4 == 2) {
      iVar1 = 0x17;
    }
    else {
      if (uVar4 != 4) {
        if (uVar4 != 8) goto switchD_004344a9_caseD_3;
        goto LAB_0043458c;
      }
      iVar1 = 0x17;
    }
    local_8 = 1;
    uVar4 = FUN_00447460(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0x10);
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
    goto switchD_00434460_caseD_1;
  case 4:
    if (*puVar5 == 8) {
      iVar1 = 0x1d;
      goto LAB_00434530;
    }
    if (*puVar5 != 0x10) goto switchD_004344a9_caseD_3;
    iVar1 = 0x1f;
    break;
  case 6:
    if (*puVar5 != 8) {
      if (*puVar5 != 0x10) goto switchD_004344a9_caseD_3;
      iVar1 = 0x1f;
      goto LAB_004345fb;
    }
    iVar1 = 0x1d;
  }
  local_50[0xb] = 0;
  local_50[10] = 1;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
switchD_00434460_caseD_1:
  local_c = (uint *)0x0;
  local_50[0x10] = 0;
  if ((local_8 != 0) && (iVar3 = FUN_00433c60(param_1,&local_c,local_50 + 0x10), iVar3 < 0)) {
    FUN_00433c10(param_1);
    return iVar3;
  }
  iVar1 = FUN_004401f0(param_2,iVar1,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14),local_c,
                       local_50[0x10],0);
  if ((-1 < iVar1) && (iVar1 = FUN_00433ed0(param_1,(int *)*param_2), iVar1 < 0)) {
    FUN_00440190((LPCVOID)*param_2,0);
    *param_2 = 0;
  }
  FUN_00433ea0(local_c);
  return iVar1;
}


