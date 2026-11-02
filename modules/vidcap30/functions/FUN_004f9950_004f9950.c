/* Module: vidcap30.exe
   Function: FUN_004f9950
   Address: 004f9950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f9950(int param_1,LRESULT param_2)

{
  int iVar1;
  HWND hWnd;
  HWND hWnd_00;
  uint *puVar2;
  LRESULT LVar3;
  undefined4 local_14c;
  HWND local_148;
  undefined4 local_144;
  int local_140;
  LRESULT local_138 [6];
  undefined1 *local_120;
  uint local_118;
  uint local_114;
  undefined4 local_10c;
  undefined1 local_104 [260];
  
  hWnd = *(HWND *)(param_1 + 0x18);
  hWnd_00 = *(HWND *)(param_1 + 0x1c);
  local_148 = hWnd;
  puVar2 = (uint *)FUN_004f6ec0(hWnd,param_2);
  iVar1 = *puVar2 - 1;
  if ((iVar1 < 0) || ((int)((-(uint)(puVar2 != (uint *)0x0) & *puVar2) - 1) < iVar1)) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = *(uint **)(puVar2[2] + iVar1 * 4);
  }
  if (puVar2 != (uint *)0x0) {
    FUN_00497a90(puVar2,local_104);
    local_138[1] = 0xffff0002;
    local_138[2] = 0x27;
    local_138[0] = param_2;
    local_118 = puVar2[1];
    local_114 = puVar2[2];
    local_120 = local_104;
    _SfList_CreateExZ_32(&local_14c,4,1,0x40,0x40000002,0,0,0);
    local_144 = 0x10000000;
    local_140 = iVar1;
    _SfList_AllocAndInsertItem_20(local_14c,&local_144,0xc,0,0);
    local_10c = local_14c;
    local_138[0] = SendMessageA(hWnd,0x1100,0,(LPARAM)local_138);
    if ((*puVar2 & 0x20000) != 0) {
      local_138[2] = 1;
      local_120 = &DAT_00586c70;
      SendMessageA(local_148,0x1100,0,(LPARAM)local_138);
    }
    LVar3 = SendMessageA(hWnd_00,0x1004,0,0);
    if ((*(byte *)(param_1 + 0x4e0) & 0x40) == 0) {
      FUN_004f3c60(hWnd_00,LVar3,iVar1,local_104,puVar2[1]);
    }
    else {
      FUN_004f3cb0(hWnd_00,LVar3,iVar1,puVar2);
    }
    InvalidateRect(local_148,(RECT *)0x0,1);
    LVar3 = SendMessageA(hWnd_00,0x1004,0,0);
    SendMessageA(hWnd_00,0x1013,LVar3 - 1U,0);
    SetFocus(hWnd_00);
    SendMessageA(hWnd_00,0x1017,LVar3 - 1U,0);
  }
  return;
}


