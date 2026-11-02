/* Module: sftrans1.dll
   Function: FUN_00528c10
   Address: 00528c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00528c10(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 uVar5;
  HWND hWnd;
  int iVar6;
  int dx;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  undefined1 local_9c [12];
  LONG local_90;
  tagRECT local_8c;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  uint local_40;
  undefined4 local_3c;
  short local_38;
  short local_36;
  short local_34;
  short local_32;
  undefined2 local_30;
  undefined1 local_2e [2];
  undefined4 local_2c [9];
  undefined4 local_6;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  local_9c._4_4_ = 0;
  local_9c._8_4_ = 0;
  *(undefined4 *)(param_1 + 4) = 1;
  local_9c._0_4_ = 0;
  local_90 = 0;
  FUN_00508390(*(undefined4 *)(param_1 + 0x10),&local_78,1);
  local_9c._0_4_ = *(int *)(param_1 + 0x24);
  local_9c._4_4_ = *(int *)(param_1 + 0x30) + 2;
  local_90 = *(int *)(param_1 + 0x30) + 0x7a;
  local_9c._8_4_ = local_9c._0_4_ + 200;
  if (local_70 - local_78 < (local_9c._0_4_ + 200) - local_9c._0_4_) {
    local_9c._0_4_ = local_78;
    local_9c._8_4_ = local_70;
  }
  if (local_6c - local_74 < local_90 - local_9c._4_4_) {
    local_90 = local_6c;
    local_9c._4_4_ = local_74;
  }
  local_8c.bottom = local_90;
  local_8c.left = local_9c._0_4_;
  local_8c.top = local_9c._4_4_;
  local_8c.right = local_9c._8_4_;
  InflateRect(&local_8c,-3,-3);
  OffsetRect(&local_8c,0,*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x30));
  ClientToScreen(*(HWND *)(param_1 + 0x10),(LPPOINT)local_9c);
  ClientToScreen(*(HWND *)(param_1 + 0x10),(LPPOINT)(local_9c + 8));
  dx = 0;
  iVar6 = 0;
  if ((int)local_9c._0_4_ < local_78) {
    dx = local_78 - local_9c._0_4_;
  }
  if (local_70 < (int)local_9c._8_4_) {
    dx = local_70 - local_9c._8_4_;
  }
  if ((int)local_9c._4_4_ < local_74) {
    iVar6 = local_74 - local_9c._4_4_;
  }
  if (local_6c < local_90) {
    iVar6 = ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x30)) - local_90) + -8 + local_9c._4_4_
    ;
  }
  if ((dx != 0) || (iVar6 != 0)) {
    OffsetRect((LPRECT)local_9c,dx,iVar6);
  }
  uVar3 = GetDialogBaseUnits();
  local_9c._0_4_ = (int)(local_9c._0_4_ << 2) / (int)(uVar3 & 0xffff);
  local_9c._8_4_ = (local_9c._8_4_ * 4) / (int)(uVar3 & 0xffff);
  local_9c._4_4_ = (int)(local_9c._4_4_ << 3) / (int)(uVar3 >> 0x10);
  local_90 = (local_90 * 8) / (int)(uVar3 >> 0x10);
  uVar3 = GetDialogBaseUnits();
  local_8c.left = (local_8c.left * 4) / (int)(uVar3 & 0xffff);
  local_8c.right = (local_8c.right << 2) / (int)(uVar3 & 0xffff);
  local_8c.top = (local_8c.top * 8) / (int)(uVar3 >> 0x10);
  local_8c.bottom = (local_8c.bottom * 8) / (int)(uVar3 >> 0x10);
  LVar4 = GetWindowLongA(*(HWND *)(param_1 + 0x10),-0x10);
  local_40 = FUN_005290b0(LVar4);
  local_4e = (short)local_9c._0_4_;
  local_4a = (short)local_9c._8_4_ - local_4e;
  local_4c = (short)local_9c._4_4_;
  local_48 = (short)local_90 - local_4c;
  local_40 = local_40 | 0x50001000;
  local_58 = 0x90400205;
  local_54 = 0;
  local_50 = 1;
  local_46 = 0;
  local_44 = 0;
  local_42 = 0;
  local_3c = 0;
  local_38 = (short)local_8c.left;
  local_36 = (short)local_8c.top;
  local_34 = (short)local_8c.right - local_38;
  local_32 = (short)local_8c.bottom - local_36;
  local_30 = 0x16;
  puVar8 = (undefined4 *)(local_2e + 2);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  pwVar7 = L"DropColor_ClrPicker";
  puVar8 = (undefined4 *)local_2e;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *(undefined4 *)pwVar7;
    pwVar7 = pwVar7 + 2;
    puVar8 = puVar8 + 1;
  }
  local_6 = 0;
  uVar5 = FUN_004c8970(DAT_0057b888,&local_58,*(undefined4 *)(param_1 + 0x10),&LAB_00529060,0);
  *(undefined4 *)(param_1 + 8) = uVar5;
  GetLastError();
  if (*(HWND *)(param_1 + 8) == (HWND)0x0) {
    return 0;
  }
  hWnd = GetDlgItem(*(HWND *)(param_1 + 8),0x16);
  *(HWND *)(param_1 + 0xc) = hWnd;
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  puVar8 = (undefined4 *)(param_1 + 0x44);
  SendMessageA(hWnd,0x703,0,(LPARAM)puVar8);
  uVar3 = GetWindowLongA(*(HWND *)(param_1 + 0x10),-0x10);
  if ((uVar3 & 0x1000) != 0) {
    FUN_00529100(0xa32);
  }
  uVar5 = *puVar8;
  local_64 = *(undefined4 *)(param_1 + 0x48);
  local_60 = *(undefined4 *)(param_1 + 0x4c);
  local_5c = *(undefined4 *)(param_1 + 0x50);
  iVar6 = FUN_00528810();
  if (iVar6 == 0) {
    *puVar8 = uVar5;
    *(undefined4 *)(param_1 + 0x48) = local_64;
    *(undefined4 *)(param_1 + 0x4c) = local_60;
    *(undefined4 *)(param_1 + 0x50) = local_5c;
  }
  else {
    SendMessageA(*(HWND *)(param_1 + 0xc),0x702,0,(LPARAM)puVar8);
  }
  bVar1 = ftol();
  local_7c = (uint)bVar1 << 8;
  uVar2 = ftol();
  local_7c = CONCAT31((int3)(local_7c >> 8),uVar2) << 8;
  uVar3 = ftol();
  FUN_00527990(local_7c | uVar3 & 0xff);
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    SetFocus(*(HWND *)(param_1 + 0x10));
  }
  uVar3 = GetWindowLongA(*(HWND *)(param_1 + 0x10),-0x10);
  if ((uVar3 & 0x1000) != 0) {
    FUN_00529100(0xa33);
  }
  DestroyWindow(*(HWND *)(param_1 + 8));
  InvalidateRect(*(HWND *)(param_1 + 0x10),(RECT *)0x0,0);
  return 1;
}


