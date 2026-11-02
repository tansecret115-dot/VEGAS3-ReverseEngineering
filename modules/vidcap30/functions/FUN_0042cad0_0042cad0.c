/* Module: vidcap30.exe
   Function: FUN_0042cad0
   Address: 0042cad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0042cd14) */
/* WARNING: Removing unreachable block (ram,0x0042ccc6) */
/* WARNING: Removing unreachable block (ram,0x0042ccd8) */
/* WARNING: Removing unreachable block (ram,0x0042cc9a) */
/* WARNING: Removing unreachable block (ram,0x0042cca2) */
/* WARNING: Removing unreachable block (ram,0x0042ccb6) */
/* WARNING: Removing unreachable block (ram,0x0042ccbe) */
/* WARNING: Removing unreachable block (ram,0x0042cd02) */
/* WARNING: Removing unreachable block (ram,0x0042cd26) */

int FUN_0042cad0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_14;
  int *piStack_10;
  int *piStack_8;
  int local_4;
  
  iVar2 = *param_1;
  if ((iVar2 != 7) && (iVar2 != 8)) {
    return 0;
  }
  if (param_1[0xd4] == 0) {
    return -0x7fffbffd;
  }
  if ((param_2 == param_1[0xea]) && (param_3 == 0)) {
    return 1;
  }
  iVar5 = 0;
  iVar3 = 0;
  local_14 = 0;
  if ((iVar2 == 7) && ((param_1[0x52] & 0x1000U) != 0)) {
    local_14 = 1;
    iVar5 = FUN_0042b3b0(param_1);
  }
  else {
    if (iVar2 != 8) {
      return 1;
    }
    FUN_004260d0(param_1,&local_14);
    if (local_14 == 0) {
      return 1;
    }
    iVar3 = FUN_00428e00(param_1);
  }
  if (local_14 == 0) {
    return 1;
  }
  if (iVar5 != 0) {
    return 1;
  }
  if (iVar3 != 0) {
    return 1;
  }
  puVar1 = (undefined4 *)param_1[0xeb];
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  local_4 = 0;
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_005a17a8,&local_4);
  if (iVar2 < 0) {
    return iVar2;
  }
  switch(local_4) {
  case 0:
    uVar4 = 1000;
    break;
  case 1:
    uVar4 = 0x3e9;
    break;
  case 2:
    uVar4 = 0x3ea;
    break;
  case 3:
    uVar4 = 0x3eb;
    break;
  default:
    goto switchD_0042cbb0_default;
  }
  local_14 = 0;
  if (*param_1 == 7) {
    local_14 = FUN_00424c80(param_1);
    iVar2 = FUN_00424bb0(param_1);
  }
  else if (*param_1 == 8) {
    local_14 = FUN_0042cda0(param_1);
    iVar2 = FUN_00421b90(param_1);
  }
  if (-1 < iVar2) {
    piStack_8 = (int *)0x0;
    if ((param_1[0xfb] != 0) && (param_1[0xfc] != 0)) {
      iVar2 = FUN_00420930(param_1,"Color Space Converter",0,0,1,&stack0xffffffe8,&stack0x00000000);
      puVar6 = (undefined1 *)register0x00000010;
      if (-1 < iVar2) {
        puVar6 = &stack0xffffffe4;
      }
      iVar2 = FUN_00420930(param_1,"SF:SG-Sample Grabber",0,0,1,&piStack_8,puVar6);
    }
    if ((((iVar2 < 0) || (iVar2 = (**(code **)(*piStack_10 + 0x10))(piStack_10,uVar4), iVar2 < 0))
        || (param_1[0xea] = local_4, piStack_8 != (int *)0x0)) && (piStack_8 != (int *)0x0)) {
      (**(code **)(*piStack_8 + 8))(piStack_8);
    }
    piStack_8 = (int *)0x0;
    if (*param_1 == 7) {
      if (local_14 == 0) {
        iVar2 = FUN_00424cd0(param_1);
      }
      else {
        iVar2 = FUN_00424c00(param_1);
      }
    }
    else if ((*param_1 == 8) && (local_14 != 0)) {
      iVar2 = FUN_0042af10(param_1);
    }
  }
switchD_0042cbb0_default:
  if (piStack_10 == (int *)0x0) {
    return iVar2;
  }
  (**(code **)(*piStack_10 + 8))(piStack_10);
  return iVar2;
}


