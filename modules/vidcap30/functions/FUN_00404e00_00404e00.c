/* Module: vidcap30.exe
   Function: FUN_00404e00
   Address: 00404e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404e00(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  tagRECT local_10;
  
  GetClientRect((HWND)*param_1,&local_10);
  iVar1 = FUN_00434740(param_1[0x1b]);
  param_1[3] = local_10.bottom;
  param_1[2] = local_10.right;
  uVar2 = local_10.bottom - param_1[0x19] & (local_10.bottom - param_1[0x19] < 0) - 1;
  param_1[0x1a] = uVar2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_10.right;
  param_1[0xc] = uVar2;
  if ((int)param_1[0x18] <= (int)uVar2) {
    uVar2 = param_1[0x18];
  }
  param_1[10] = uVar2;
  iVar5 = param_1[0x10] + uVar2;
  param_1[0x15] = iVar5;
  iVar3 = param_1[0xc] - param_1[5];
  if (iVar5 < (int)(param_1[0xc] - param_1[5])) {
    iVar3 = iVar5;
  }
  param_1[0x15] = iVar3;
  param_1[10] = iVar3;
  BVar4 = IsWindowVisible((HWND)param_1[0xd]);
  if (BVar4 == 0) {
    BVar4 = IsWindowVisible((HWND)param_1[7]);
    if (BVar4 == 0) {
      param_1[0x17] = param_1[0xc];
      goto LAB_00404ecd;
    }
  }
  iVar5 = param_1[10] + iVar1 + 3;
  iVar1 = (param_1[0xc] - param_1[0x12]) - param_1[5];
  if (iVar1 <= iVar5) {
    iVar1 = iVar5;
  }
  param_1[0x17] = iVar1;
  if ((int)param_1[0xc] <= iVar1) {
    iVar1 = param_1[0xc];
  }
  param_1[0x17] = iVar1;
  param_1[0xc] = iVar1;
LAB_00404ecd:
  iVar5 = param_1[0xb];
  iVar1 = iVar5 - param_1[4];
  if ((int)param_1[9] < iVar5 - param_1[4]) {
    iVar1 = param_1[9];
  }
  param_1[9] = iVar1;
  iVar1 = iVar1 + param_1[4] * 3;
  if (iVar1 < iVar5) {
    param_1[0xb] = iVar5;
    return;
  }
  param_1[0xb] = iVar1;
  return;
}


