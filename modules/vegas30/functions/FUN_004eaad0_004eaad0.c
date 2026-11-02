/* Module: vegas30.exe
   Function: FUN_004eaad0
   Address: 004eaad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eaad0(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_20 [4];
  uint local_10;
  undefined4 local_c;
  
  iVar3 = -0x7fffbffb;
  iVar2 = FUN_005b8630(param_1);
  if (*(char *)(iVar2 + 0x1d0) != '\x01') goto LAB_004eac84;
  if (param_2 == (int *)0x0) {
    if ((param_4 == 0) && (iVar3 = FUN_005b4620(*(undefined4 *)(iVar2 + 0x3d4),param_3), iVar3 != 0)
       ) {
      return 0;
    }
    iVar3 = FUN_005b4660(iVar2 + 0x3d4,param_3);
    if (iVar3 < 0) goto LAB_004eac84;
    puVar5 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    switch(param_3) {
    case 0x11:
      local_20[0] = 0x616a7270;
      break;
    case 0x12:
      local_20[0] = 0x736a7270;
      break;
    case 0x13:
      local_20[0] = 0x206d7270;
      local_c = 1;
      local_10 = 0;
      break;
    case 0x14:
      local_20[0] = 0x6c6d7270;
      break;
    default:
switchD_004eab81_caseD_10:
      FUN_004ea010(iVar2,0x80004005);
      return -0x7fffbffb;
    case 0x23:
      local_20[0] = 0x766a7270;
      break;
    case 0x24:
      local_20[0] = 0x78667670;
    }
LAB_004eac77:
    iVar3 = FUN_005b5820(local_20);
  }
  else {
    if (*param_2 != 0x20) {
      FUN_004ea010(iVar2,0x80070057);
      return -0x7ff8ffa9;
    }
    uVar1 = param_2[6];
    uVar4 = param_3 << 0x18 | uVar1;
    iVar3 = FUN_005b4620(*(undefined4 *)(iVar2 + 0x3bc),uVar4);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = FUN_005b4660(iVar2 + 0x3bc,uVar4);
    if (iVar3 < 0) goto LAB_004eac84;
    puVar5 = local_20;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_10 = uVar1;
    switch(param_3) {
    case 0xe:
    case 0x1e:
      local_20[0] = 0x75616b74;
      iVar3 = FUN_005b5820(local_20);
      if (param_3 == 0x1e) {
        if (iVar3 < 0) goto LAB_004eac84;
        goto switchD_004eab81_caseD_f;
      }
      break;
    case 0xf:
switchD_004eab81_caseD_f:
      puVar5 = local_20;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_20[0] = 0x73656b74;
      local_10 = uVar1;
      goto LAB_004eac77;
    default:
      goto switchD_004eab81_caseD_10;
    case 0x29:
      local_20[0] = 0x68766b74;
      goto LAB_004eac77;
    }
  }
  if (-1 < iVar3) {
    return iVar3;
  }
LAB_004eac84:
  FUN_004ea010(iVar2,iVar3);
  return iVar3;
}


