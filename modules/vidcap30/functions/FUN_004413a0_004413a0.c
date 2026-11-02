/* Module: vidcap30.exe
   Function: FUN_004413a0
   Address: 004413a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004413a0(int param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  WINDOWPLACEMENT *pWVar5;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c [3];
  int local_40;
  tagRECT local_3c;
  WINDOWPLACEMENT local_2c;
  
  uVar1 = DAT_005bb838;
  BVar2 = IsZoomed(DAT_005ba4bc);
  if (BVar2 != 0) {
    pWVar5 = &local_2c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      pWVar5->length = 0;
      pWVar5 = (WINDOWPLACEMENT *)&pWVar5->flags;
    }
    local_2c.length = 0x2c;
    GetWindowPlacement(DAT_005ba4bc,&local_2c);
    local_2c.showCmd = 9;
    SetWindowPlacement(DAT_005ba4bc,&local_2c);
  }
  pWVar5 = &local_2c;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    pWVar5->length = 0;
    pWVar5 = (WINDOWPLACEMENT *)&pWVar5->flags;
  }
  local_2c.length = 0x2c;
  GetWindowPlacement(DAT_005ba4bc,&local_2c);
  GetClientRect(*(HWND *)(param_1 + 8),&local_3c);
  iVar4 = GetSystemMetrics(0x2d);
  local_40 = GetSystemMetrics(0x2e);
  local_40 = local_40 + 8;
  local_54 = FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x611,0,0);
  local_54 = local_54 + iVar4 + 8;
  local_50 = FUN_00453960(*(undefined4 *)(param_1 + 0x13bc),0x606,0,0);
  FUN_0042efa0(uVar1,&local_64);
  if (DAT_005bb530 != 0) {
    FUN_0042ee90(uVar1);
    local_64 = ftol();
  }
  iVar3 = GetSystemMetrics(0x2d);
  local_64 = ftol();
  local_64 = iVar3 + local_64;
  local_60 = ftol();
  FUN_0042ffb0(*(undefined4 *)(param_1 + 0x13c4),&local_5c);
  FUN_0042ffb0(*(undefined4 *)(param_1 + 0x13c0),local_4c);
  local_4c[0] = local_4c[0] + 8 + *(int *)(param_1 + 0x13f0);
  if (local_5c <= local_4c[0]) {
    local_5c = local_4c[0];
  }
  iVar3 = GetSystemMetrics(0x2d);
  local_5c = iVar3 + *(int *)(param_1 + 0x1400) + *(int *)(param_1 + 0x13e8) + local_5c + 0xc +
             iVar4 + 8;
  iVar4 = GetSystemMetrics(0x2e);
  local_58 = iVar4 + 8 + *(int *)(param_1 + 0x140c) * 2;
  iVar4 = (*(int *)(param_1 + 0x1640) - *(int *)(param_1 + 0xb4)) + *(int *)(param_1 + 0x158c);
  iVar3 = local_5c;
  if (local_5c <= local_54) {
    iVar3 = local_54;
  }
  if (iVar3 <= local_64) {
    iVar3 = local_64;
  }
  if (iVar4 < local_58 + local_60) {
    iVar4 = local_58 + local_60;
  }
  local_2c.rcNormalPosition.right =
       local_2c.rcNormalPosition.right + (local_3c.left - local_3c.right) + iVar3 + DAT_005bb4f8;
  local_2c.rcNormalPosition.bottom =
       local_2c.rcNormalPosition.bottom +
       (local_3c.top - local_3c.bottom) + local_50 + iVar4 + local_40;
  _SfFixWindowPlacement_4(&local_2c);
  SetWindowPlacement(DAT_005ba4bc,&local_2c);
  return;
}


