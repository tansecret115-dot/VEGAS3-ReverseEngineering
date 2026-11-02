/* Module: stl2plg.dll
   Function: FUN_00406270
   Address: 00406270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406270(undefined4 *param_1,void *param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  undefined3 extraout_var;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_590 [266];
  CHAR local_168 [260];
  undefined1 local_64 [8];
  int local_5c;
  uint *local_58;
  uint *local_54;
  uint local_50;
  int local_4c;
  uint *local_48;
  undefined4 local_44 [16];
  
  iVar3 = fseek((FILE *)*param_1,0,0);
  if (iVar3 != 0) {
    return -0x7fffbffb;
  }
  sVar4 = fread(local_64,1,8,(FILE *)*param_1);
  if (sVar4 != 8) {
    FUN_00405fb0((int)param_1);
    return -0x7fffbffb;
  }
  bVar2 = FUN_004189c0((int)local_64,8);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    FUN_00405fb0((int)param_1);
    return -0x7fffbffb;
  }
  piVar5 = FUN_00418c60("1.0.2",0,0,0);
  param_1[1] = piVar5;
  if (piVar5 == (int *)0x0) {
    FUN_00405fb0((int)param_1);
    return -0x7fffbffb;
  }
  puVar6 = FUN_00418ad0((int)piVar5);
  param_1[2] = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
switchD_00406509_caseD_3:
    FUN_00405fb0((int)param_1);
    return -0x7fffbffb;
  }
  iVar3 = setjmp3(param_1[1],0);
  if (iVar3 != 0) {
    FUN_00405fb0((int)param_1);
    return -0x7fffbffb;
  }
  FUN_00418bb0(param_1[1],*param_1);
  FUN_00418930((int *)param_1[1],8);
  FUN_00418e80((int *)param_1[1],(uint *)param_1[2]);
  FUN_0040d4c0(DAT_00473620,0x1b4,local_168,0x104);
  lstrcpynA((LPSTR)((int)param_2 + 0x78),local_168,0x104);
  *(undefined1 *)((int)param_2 + 0x17b) = 0;
  puVar6 = local_44;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_44[1] = 0xffffffff;
  local_44[3] = 0xffffffff;
  local_44[0xc] = 0;
  local_44[0xd] = 0;
  local_44[0] = 0x40;
  local_44[0xe] = 0;
  local_44[2] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0x3ff00000;
  local_44[8] = 0;
  local_44[9] = 0;
  local_44[10] = 0;
  local_44[0xb] = 0;
  local_44[0xf] = 0;
  iVar3 = setjmp3(param_1[1],0);
  if (iVar3 != 0) {
    FUN_00405fb0((int)param_1);
    return -0x7fffbffb;
  }
  puVar1 = param_1 + 6;
  local_58 = param_1 + 5;
  local_54 = param_1 + 4;
  FUN_00419f70(param_1[1],(uint *)param_1[2],local_54,local_58,puVar1,param_1 + 7,param_1 + 8,
               (uint *)0x0,(uint *)0x0);
  param_1[9] = 1;
  iVar3 = FUN_00419ed0(param_1[1],param_1[2],(double *)(param_1 + 10));
  if (iVar3 != 0) {
    FUN_0041abc0(param_1[1],2.2,*(double *)(param_1 + 10));
  }
  iVar3 = 0x1d;
  local_4c = 0;
  switch(param_1[7]) {
  case 0:
    uVar7 = FUN_00419af0(param_1[1],param_1[2],0x10);
    uVar9 = *puVar1;
    if (8 < (int)uVar9) {
      if (uVar9 != 0x10) goto switchD_00406509_caseD_3;
      if (uVar7 == 0) {
        iVar3 = 0x15;
        goto switchD_004064c0_caseD_1;
      }
      iVar3 = 0x1f;
      goto LAB_0040665b;
    }
    if (uVar7 == 0) {
      switch(uVar9) {
      case 1:
        iVar3 = 0x11;
        break;
      case 2:
        iVar3 = 0x12;
        break;
      default:
        goto switchD_00406509_caseD_3;
      case 4:
        iVar3 = 0x13;
        break;
      case 8:
        iVar3 = 0x14;
      }
      goto switchD_004064c0_caseD_1;
    }
    iVar3 = 0x1d;
    break;
  default:
    goto switchD_004064c0_caseD_1;
  case 2:
    if (*puVar1 != 8) {
      if (*puVar1 != 0x10) goto switchD_00406509_caseD_3;
      iVar3 = 0x1f;
LAB_00406590:
      local_44[10] = 1;
      local_44[0xc] = 0;
      local_44[0xb] = 0;
      local_44[0xd] = 0;
      local_44[0xe] = 0;
      local_44[0xf] = 0;
      goto switchD_004064c0_caseD_1;
    }
    uVar9 = FUN_00419af0(param_1[1],param_1[2],0x10);
    if (uVar9 == 0) {
      iVar3 = 0x1b;
      goto switchD_004064c0_caseD_1;
    }
    iVar3 = 0x1d;
LAB_0040665b:
    local_44[0xb] = 0;
    local_44[10] = 1;
    local_44[0xc] = 0;
    local_44[0xd] = 0;
    local_44[0xe] = 0;
    local_44[0xf] = 0;
    goto switchD_004064c0_caseD_1;
  case 3:
    uVar9 = *puVar1;
    if (uVar9 == 1) {
LAB_004065ec:
      iVar3 = 0x18;
    }
    else if (uVar9 == 2) {
      iVar3 = 0x17;
    }
    else {
      if (uVar9 != 4) {
        if (uVar9 != 8) goto switchD_00406509_caseD_3;
        goto LAB_004065ec;
      }
      iVar3 = 0x17;
    }
    local_4c = 1;
    uVar9 = FUN_00419af0(param_1[1],param_1[2],0x10);
    if (uVar9 != 0) {
      local_44[0xc] = 0;
      local_44[10] = 1;
      local_44[0xd] = 0;
      local_44[0xb] = 0;
      local_44[0xe] = 0;
      iVar3 = 0x1d;
      local_44[0xf] = 0;
      local_4c = 0;
    }
    goto switchD_004064c0_caseD_1;
  case 4:
    if (*puVar1 == 8) {
      iVar3 = 0x1d;
      goto LAB_00406590;
    }
    if (*puVar1 != 0x10) goto switchD_00406509_caseD_3;
    iVar3 = 0x1f;
    break;
  case 6:
    if (*puVar1 != 8) {
      if (*puVar1 != 0x10) goto switchD_00406509_caseD_3;
      iVar3 = 0x1f;
      goto LAB_0040665b;
    }
    iVar3 = 0x1d;
  }
  local_44[0xb] = 0;
  local_44[10] = 1;
  local_44[0xc] = 0;
  local_44[0xd] = 0;
  local_44[0xe] = 0;
  local_44[0xf] = 0;
switchD_004064c0_caseD_1:
  local_48 = (uint *)0x0;
  local_50 = 0;
  if ((local_4c != 0) && (iVar8 = FUN_00406000((int)param_1,&local_48,&local_50), iVar8 < 0)) {
    FUN_00405fb0((int)param_1);
    return iVar8;
  }
  iVar3 = FUN_0040fe70(local_590,iVar3,*local_54,*local_58,local_48,local_50,&local_5c);
  if (iVar3 == 0) {
    FUN_00402690(param_2,local_590);
    FUN_00402710(param_2,local_44);
    *(int *)((int)param_2 + 0x50) = local_5c;
  }
  FUN_00406240(local_48);
  return iVar3;
}


