/* Module: vidcap30.exe
   Function: FUN_0043eb00
   Address: 0043eb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043eb00(int param_1)

{
  int iVar1;
  HDC hdc;
  HGDIOBJ pvVar2;
  int iVar3;
  tagSIZE *psizl;
  int local_120;
  tagSIZE local_11c;
  tagRECT local_114;
  CHAR local_104 [260];
  
  GetClientRect(*(HWND *)(param_1 + 0xcc),&local_114);
  FUN_00460850(*(undefined4 *)(param_1 + 0xd4),0x47,0,&local_114);
  hdc = GetDC(*(HWND *)(param_1 + 0xd0));
  pvVar2 = (HGDIOBJ)_SfGetUIFont_4(100);
  pvVar2 = SelectObject(hdc,pvVar2);
  GetWindowTextA(*(HWND *)(param_1 + 0xd0),local_104,0x104);
  psizl = &local_11c;
  iVar3 = lstrlenA(local_104);
  GetTextExtentPoint32A(hdc,local_104,iVar3,psizl);
  SelectObject(hdc,pvVar2);
  ReleaseDC(*(HWND *)(param_1 + 0xd0),hdc);
  local_11c.cy = local_11c.cy + 6;
  local_11c.cx = local_11c.cx + 6;
  SetWindowPos(*(HWND *)(param_1 + 0xd0),(HWND)0x0,
               ((local_114.right - local_114.left) - local_11c.cx) / 2 + local_114.left,
               local_114.bottom - local_11c.cy,local_11c.cx,
               local_114.bottom - (local_114.bottom - local_11c.cy),0x14);
  iVar3 = param_1 + 0xd8;
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0xc4);
  FUN_00423d80(iVar3,&local_114);
  FUN_00421820(iVar3,0);
  iVar1 = param_1 + 0xa48;
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0xc4);
  FUN_00423d80(iVar1,&local_114);
  FUN_00421820(iVar1,0);
  FUN_0042f0a0(DAT_005bb838);
  local_120 = 0;
  if ((*(byte *)(param_1 + 0x1ae8) & 1) == 0) {
    FUN_004260d0(iVar1,&local_120);
  }
  else {
    local_120 = FUN_00424d20(iVar3);
  }
  if ((local_120 != 0) && (DAT_005bb4cc != 0)) {
    PostMessageA(*(HWND *)(param_1 + 0xcc),0x414,DAT_005ba4b4 >> 0x13 & 1,0);
  }
  return;
}


