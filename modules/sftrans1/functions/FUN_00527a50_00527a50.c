/* Module: sftrans1.dll
   Function: FUN_00527a50
   Address: 00527a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00527a50(int param_1,HDC param_2)

{
  int *piVar1;
  HDC hdc;
  int iVar2;
  DWORD DVar3;
  DWORD color;
  COLORREF CVar4;
  LONG LVar5;
  undefined8 uVar6;
  tagRECT local_60;
  tagRECT local_50;
  RECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  RECT local_10;
  
  hdc = param_2;
  piVar1 = (int *)(param_1 + 0x24);
  local_60.left = *piVar1;
  local_60.top = *(int *)(param_1 + 0x28);
  local_60.right = *(int *)(param_1 + 0x2c);
  local_60.bottom = *(int *)(param_1 + 0x30);
  local_20.left = *(int *)(param_1 + 0x34);
  local_20.top = *(int *)(param_1 + 0x38);
  local_20.right = *(int *)(param_1 + 0x3c);
  local_20.bottom = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar2 = (*(int *)(param_1 + 0x2c) - *piVar1) + -8;
    local_50.bottom = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28)) + -8;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60);
    local_50.bottom = *(int *)(param_1 + 100);
  }
  local_50.left = 0;
  local_50.right = *(int *)(param_1 + 0x2c) - *piVar1;
  local_50.top = 0;
  if (local_50.right + -6 < iVar2) {
    InflateRect(&local_50,-3,0);
    iVar2 = local_50.right;
  }
  local_50.right = iVar2;
  iVar2 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
  if (iVar2 + -6 < local_50.bottom - local_50.top) {
    local_50.bottom = iVar2;
    InflateRect(&local_50,0,-3);
  }
  uVar6 = FUN_00528230(piVar1,&local_50);
  OffsetRect(&local_50,(int)uVar6 + *piVar1,
             (int)((ulonglong)uVar6 >> 0x20) + *(int *)(param_1 + 0x28));
  DVar3 = GetSysColor(0x14);
  color = GetSysColor(0x10);
  CVar4 = SetBkColor(param_2,DVar3);
  local_40.left = local_60.left;
  local_40.right = local_60.left + 1;
  local_40.top = local_60.top;
  local_40.bottom = local_60.bottom;
  ExtTextOutA(param_2,0,0,2,&local_40,(LPCSTR)0x0,0,(INT *)0x0);
  FUN_0048cd60(param_2,local_60.left + 1,local_60.top,(local_60.right - local_60.left) + -1,1);
  SetBkColor(param_2,color);
  FUN_0048cd60(param_2,local_60.right + -1,local_60.top + 1,1,local_60.bottom - local_60.top);
  FUN_0048cd60(param_2,local_60.left + 1,local_60.bottom + -1,(local_60.right - local_60.left) + -2,
               1);
  SetBkColor(param_2,CVar4);
  InflateRect(&local_60,-1,-1);
  if (*(int *)(param_1 + 0x14) == 0) {
    DVar3 = GetSysColor(0xf);
    SetBkColor(param_2,DVar3);
    if ((((local_50.left < local_60.left) || (local_50.top < local_60.top)) ||
        (local_60.right < local_50.right)) || (local_60.bottom < local_50.bottom))
    goto LAB_00527ea7;
    FUN_0048cd60(param_2,local_60.left,local_60.top,local_60.right - local_60.left,
                 local_50.top - local_60.top);
    FUN_0048cd60(param_2,local_60.left,local_50.bottom,local_60.right - local_60.left,
                 local_60.bottom - local_50.bottom);
    FUN_0048cd60(param_2,local_60.left,local_50.top,local_50.left - local_60.left,
                 local_50.bottom - local_50.top);
    iVar2 = local_50.bottom - local_50.top;
    LVar5 = local_60.right;
  }
  else {
    local_40.top = local_60.top;
    local_40.left = local_60.left;
    local_40.right = local_60.right;
    local_40.bottom = local_60.bottom;
    InflateRect(&local_40,-1,-1);
    FUN_00528600(param_2,&local_40);
    DVar3 = GetSysColor(0xf);
    SetBkColor(param_2,DVar3);
    if (((local_60.left <= local_40.left) && (local_60.top <= local_40.top)) &&
       ((local_40.right <= local_60.right && (local_40.bottom <= local_60.bottom)))) {
      local_10.left = local_60.left;
      local_10.top = local_60.top;
      local_10.right = local_60.right;
      local_10.bottom = local_40.top;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      FUN_0048cd60(param_2,local_60.left,local_40.bottom,local_60.right - local_60.left,
                   local_60.bottom - local_40.bottom);
      FUN_0048cd60(param_2,local_60.left,local_40.top,local_40.left - local_60.left,
                   local_40.bottom - local_40.top);
      FUN_0048cd60(param_2,local_40.right,local_40.top,local_60.right - local_40.right,
                   local_40.bottom - local_40.top);
    }
    InflateRect(&local_40,-1,-1);
    if (local_50.left < local_40.left) goto LAB_00527ea7;
    if (((local_50.top < local_40.top) || (local_40.right < local_50.right)) ||
       (local_40.bottom < local_50.bottom)) goto LAB_00527ea7;
    local_10.bottom = local_50.top;
    local_10.top = local_40.top;
    local_10.left = local_40.left;
    local_10.right = local_40.right;
    ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
    FUN_0048cd60(param_2,local_40.left,local_50.bottom,local_40.right - local_40.left,
                 local_40.bottom - local_50.bottom);
    FUN_0048cd60(param_2,local_40.left,local_50.top,local_50.left - local_40.left,
                 local_50.bottom - local_50.top);
    iVar2 = local_50.bottom - local_50.top;
    LVar5 = local_40.right;
  }
  FUN_0048cd60(param_2,local_50.right,local_50.top,LVar5 - local_50.right,iVar2);
LAB_00527ea7:
  FUN_00528320(param_2,&local_50,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
               *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 4) == 0) {
    param_2 = (HDC)GetSysColor(0x14);
    iVar2 = 0x10;
  }
  else {
    param_2 = (HDC)GetSysColor(0x10);
    iVar2 = 0x14;
  }
  DVar3 = GetSysColor(iVar2);
  CVar4 = SetBkColor(hdc,(COLORREF)param_2);
  FUN_0048cd60(hdc,local_20.left,local_20.top,1,local_20.bottom - local_20.top);
  FUN_0048cd60(hdc,local_20.left + 1,local_20.top,(local_20.right - local_20.left) + -1,1);
  SetBkColor(hdc,DVar3);
  FUN_0048cd60(hdc,local_20.right + -1,local_20.top + 1,1,local_20.bottom - local_20.top);
  FUN_0048cd60(hdc,local_20.left + 1,local_20.bottom + -1,(local_20.right - local_20.left) + -2,1);
  SetBkColor(hdc,CVar4);
  InflateRect(&local_20,-1,-1);
  local_30.left = 0;
  local_30.top = 0;
  local_30.right = 5;
  local_30.bottom = 3;
  uVar6 = FUN_00528230(&local_20,&local_30);
  OffsetRect(&local_30,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  SetBkColor(hdc,0);
  local_10.left = local_30.left;
  local_10.top = local_30.top;
  local_10.bottom = local_30.top + 1;
  local_10.right = local_30.right;
  ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.top = local_30.top + 1;
  local_10.left = local_30.left + 1;
  local_10.bottom = local_30.top + 2;
  local_10.right = (local_10.left - local_30.left) + -2 + local_30.right;
  ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  local_10.top = local_30.top + 2;
  local_10.left = local_30.left + 2;
  local_10.bottom = local_30.top + 3;
  local_10.right = (local_10.left - local_30.left) + -4 + local_30.right;
  ExtTextOutA(hdc,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  DVar3 = GetSysColor(0xf);
  SetBkColor(hdc,DVar3);
  FUN_0048cd60(hdc,local_30.left,local_30.top + 1,1,1);
  FUN_0048cd60(hdc,local_30.right + -1,local_30.top + 1,1,1);
  FUN_0048cd60(hdc,local_30.left,local_30.top + 2,2,1);
  FUN_0048cd60(hdc,local_30.right + -2,local_30.top + 2,2,1);
  FUN_00528110(hdc,&local_20,&local_30);
  return;
}


