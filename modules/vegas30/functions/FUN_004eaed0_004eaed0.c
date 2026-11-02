/* Module: vegas30.exe
   Function: FUN_004eaed0
   Address: 004eaed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eaed0(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_20 [8];
  
  iVar3 = -0x7fffbffb;
  iVar2 = FUN_005b8630(param_1);
  if (*(char *)(iVar2 + 0x1d0) != '\x01') goto LAB_004eb08d;
  if (param_2 == (int *)0x0) {
    iVar3 = FUN_005b46a0(*(undefined4 *)(iVar2 + 0x3d0),0,param_3);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = FUN_005b46f0(iVar2 + 0x3d0,0,param_3);
    if (iVar3 < 0) goto LAB_004eb08d;
    piVar4 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    if (param_4 == 0x1f) {
      local_20[0] = 0x6366786d;
      local_20[3] = 2;
      local_20[4] = param_3;
    }
    else {
      if (param_4 != 0x20) goto switchD_004eaf7e_caseD_10;
      local_20[0] = 0x6366786d;
      local_20[3] = 1;
      local_20[4] = param_3;
    }
LAB_004eb080:
    iVar3 = FUN_005b5820(local_20);
  }
  else {
    if (*param_2 != 0x20) {
      FUN_004ea010(iVar2,0x80070057);
      return -0x7ff8ffa9;
    }
    iVar1 = param_2[6];
    iVar3 = FUN_005b46a0(*(undefined4 *)(iVar2 + 0x3d0),iVar1 + 1,0);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = FUN_005b46f0(iVar2 + 0x3d0,iVar1 + 1,0);
    if (iVar3 < 0) goto LAB_004eb08d;
    piVar4 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_20[4] = iVar1;
    switch(param_4) {
    case 0xe:
    case 0x1e:
      local_20[0] = 0x75616b74;
      iVar3 = FUN_005b5820(local_20);
      if (param_4 == 0x1e) {
        if (iVar3 < 0) goto LAB_004eb08d;
        goto switchD_004eaf7e_caseD_f;
      }
      break;
    case 0xf:
switchD_004eaf7e_caseD_f:
      piVar4 = local_20;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      local_20[0] = 0x73656b74;
      local_20[4] = iVar1;
      goto LAB_004eb080;
    default:
switchD_004eaf7e_caseD_10:
      FUN_004ea010(iVar2,0x80004005);
      return -0x7fffbffb;
    case 0x29:
      local_20[0] = 0x68766b74;
      goto LAB_004eb080;
    }
  }
  if (-1 < iVar3) {
    return iVar3;
  }
LAB_004eb08d:
  FUN_004ea010(iVar2,iVar3);
  return iVar3;
}


