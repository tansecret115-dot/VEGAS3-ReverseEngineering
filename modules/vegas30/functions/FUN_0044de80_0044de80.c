/* Module: vegas30.exe
   Function: FUN_0044de80
   Address: 0044de80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044de80(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint local_120;
  undefined1 local_11c [276];
  int local_8;
  
  FUN_004ec4f0(param_2,0,&local_120,1);
  if ((local_120 & 0x80) != 0) {
    if (*param_2 == 0) {
      return 0;
    }
    if (*(int *)param_2[2] == 0) {
      return 0;
    }
    puVar1 = *(uint **)(*(int *)param_2[2] + 0x20c);
    if (puVar1 == (uint *)0x0) {
      return 0;
    }
    if ((*puVar1 & 4) != 0) {
      return 0;
    }
    if ((*puVar1 & 1) == 0) {
      return 0;
    }
    uVar2 = puVar1[1];
    if (*(int *)(param_1 + 0xac) == 0) {
      return 0;
    }
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      if (*(int *)(uVar2 + 0x10) == 5) {
        return 0;
      }
      return 1;
    case 2:
    case 3:
    case 4:
    case 6:
      goto switchD_0044df09_caseD_2;
    case 5:
      if (*(int *)(uVar2 + 0x10) != 0xb) {
        return 0;
      }
      return 1;
    case 7:
    case 8:
      if (*(int *)(uVar2 + 0x10) != 5) {
        return 0;
      }
      return 1;
    default:
      return 0;
    }
  }
  if ((local_120 & 0x100) == 0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  if (*(int *)param_2[2] == 0) {
    return 0;
  }
  iVar3 = *(int *)(*(int *)param_2[2] + 0x20c);
  if (iVar3 == 0) {
    return 0;
  }
  _FXPackage_GetPackageInfo_20
            (*(undefined4 *)(iVar3 + 0x10c),*(undefined4 *)(iVar3 + 0x110),
             *(undefined4 *)(iVar3 + 0x114),*(undefined4 *)(iVar3 + 0x118),local_11c);
  if (*(int *)(param_1 + 0xac) == 0) {
    return 0;
  }
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
    if (local_8 != 5) {
      return 0;
    }
    return 2;
  case 5:
    bVar4 = local_8 == 7;
    break;
  case 7:
  case 8:
    bVar4 = local_8 == 6;
    break;
  default:
    goto switchD_0044df09_default;
  }
  if (bVar4) {
    return 2;
  }
switchD_0044df09_default:
  return 0;
switchD_0044df09_caseD_2:
  if (*(int *)(uVar2 + 0x10) == 5) {
    return 0;
  }
  if (*(int *)(uVar2 + 0x10) == 0xb) {
    return 0;
  }
  return 1;
}


