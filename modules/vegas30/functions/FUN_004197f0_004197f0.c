/* Module: vegas30.exe
   Function: FUN_004197f0
   Address: 004197f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004197f0(int param_1,HDC param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  DWORD color;
  COLORREF CVar4;
  HGDIOBJ pvVar5;
  HGDIOBJ h;
  UINT c;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  INT *lpDx;
  undefined4 uVar9;
  tagRECT local_60;
  RECT local_50;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 auStack_20 [16];
  undefined1 local_10 [16];
  
  bVar2 = true;
  bVar1 = false;
  GetClientRect(*(HWND *)(param_1 + 0x1c8),&local_60);
  bVar3 = true;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 3:
  case 4:
    bVar3 = false;
  case 2:
  case 5:
    bVar2 = bVar3;
    color = GetSysColor(0xf);
    SetBkColor(param_2,color);
    local_50.top = local_60.top;
    local_50.left = local_60.left;
    local_50.right = local_60.right;
    local_50.bottom = local_60.bottom;
    ExtTextOutA(param_2,0,0,2,&local_50,(LPCSTR)0x0,0,(INT *)0x0);
    iVar7 = FUN_00422820(param_1);
    if (iVar7 == 0) {
      local_60.left = *(LONG *)(param_1 + 0x26c);
      local_60.right = *(LONG *)(param_1 + 0x274);
      local_60.bottom = *(LONG *)(param_1 + 0x278);
      local_60.top = *(int *)(param_1 + 0x1e8) + -2;
      InflateRect(&local_60,-7,0);
      DrawEdge(param_2,&local_60,6,2);
    }
    DrawEdge(param_2,(LPRECT)(param_1 + 0x26c),6,0xf);
    CVar4 = _SfGetUIColor_4(0x12);
    CVar4 = SetTextColor(param_2,CVar4);
    pvVar5 = (HGDIOBJ)_SfGetUIFont_4(100);
    pvVar5 = SelectObject(param_2,pvVar5);
    if ((*(int *)(param_1 + 0x2d8) != 0) &&
       ((*(code **)(param_1 + 0x2e4) == (code *)0x0 ||
        (iVar7 = (**(code **)(param_1 + 0x2e4))(param_1), iVar7 != 0)))) {
      SetTextAlign(param_2,*(UINT *)(param_1 + 0x2dc));
      h = (HGDIOBJ)_SfGetUIFont_4((-(*(int *)(param_1 + 0x2e0) != 0) & 4U) + 100);
      SelectObject(param_2,h);
      lpDx = (INT *)0x0;
      c = lstrlenA(*(LPCSTR *)(param_1 + 0x2d8));
      ExtTextOutA(param_2,*(int *)(param_1 + 0x2c0),*(int *)(param_1 + 0x2c4),4,
                  (RECT *)(param_1 + 0x2c8),*(LPCSTR *)(param_1 + 0x2d8),c,lpDx);
    }
    SelectObject(param_2,pvVar5);
    SetTextColor(param_2,CVar4);
    bVar1 = true;
    break;
  default:
    uVar9 = 1;
    uVar6 = _SfGetString_8(DAT_00647204,0x58);
    FUN_004126a0(param_1,param_2,uVar6,uVar9);
  }
  FUN_00412930(param_1,*(undefined4 *)(param_1 + 0x204),auStack_20,local_40,local_30,local_10,0,0,
               (-(uint)bVar1 & 0xfffffff0) + 0x10 | (-(uint)bVar2 & 0xfffffffe) + 2);
  if (bVar1) {
    iVar7 = param_1 + 0x2e8;
    iVar8 = param_1 + 0xa8;
  }
  else {
    iVar7 = _SfGetString_8(DAT_00647204,0x50cf);
    iVar8 = 0;
  }
  if (bVar2) {
    uVar6 = *(undefined4 *)(param_1 + 0x94);
  }
  else {
    uVar6 = 0;
  }
  FUN_00412c60(param_1,param_2,uVar6,auStack_20,-(uint)bVar2 & (uint)local_40,local_30,iVar7,iVar8,0
              );
  if ((!bVar2) && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_005734b0(param_2,local_40,*(int *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
  }
  return;
}


