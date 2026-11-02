/* Module: sftrkfx1.dll
   Function: FUN_5cbacda0
   Address: 5cbacda0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbacda0(HWND param_1,HDC param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  HGDIOBJ h;
  HGDIOBJ h_00;
  WPARAM WVar2;
  HWND pHVar3;
  LRESULT LVar4;
  DWORD DVar5;
  COLORREF CVar6;
  int iVar7;
  int y;
  int iVar8;
  int iVar9;
  UINT UVar10;
  HWND *ppHVar11;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  RECT local_2c;
  HWND local_1c;
  WPARAM local_18;
  undefined4 local_14;
  HDC local_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_5cbddbc0(6,0);
  h = (HGDIOBJ)FUN_5cbddbc0(0x14,0);
  h_00 = (HGDIOBJ)FUN_5cbddbc0(0x10,0);
  if (param_8 != 0) {
    local_30 = param_4 + param_6;
    local_3c = param_3;
    local_38 = param_4;
    local_34 = param_3 + param_5;
    GetParent(param_1);
    local_1c = param_1;
    WVar2 = GetDlgCtrlID(param_1);
    ppHVar11 = &local_1c;
    local_c = &local_3c;
    UVar10 = 0x4e;
    local_14 = 0x1003;
    local_10 = param_2;
    local_8 = 0;
    local_4 = 0;
    local_18 = WVar2;
    pHVar3 = GetParent(param_1);
    LVar4 = SendMessageA(pHVar3,UVar10,WVar2,(LPARAM)ppHVar11);
    if (LVar4 == 0) {
      DVar5 = GetSysColor(0xf);
      CVar6 = SetBkColor(param_2,DVar5);
      local_2c.top = local_38;
      local_2c.left = local_3c;
      local_2c.right = local_34;
      local_2c.bottom = local_30;
      ExtTextOutA(param_2,0,0,2,&local_2c,(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(param_2,CVar6);
    }
  }
  switch(param_7) {
  case 0:
  case 2:
  case 5:
  case 6:
    SelectObject(param_2,h);
    MoveToEx(param_2,param_3 + 1,param_4,(LPPOINT)0x0);
    iVar9 = param_4 + param_6;
    iVar7 = param_6 / 2 + param_3;
    LineTo(param_2,iVar7 + 1,iVar9);
    SelectObject(param_2,h_00);
    MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
    LineTo(param_2,iVar7,iVar9);
    LineTo(param_2,iVar7,iVar9 + -2);
    iVar8 = param_3 + param_5;
    LineTo(param_2,iVar8,iVar9 + -2);
    SelectObject(param_2,h);
    iVar1 = iVar9 + -1;
    MoveToEx(param_2,iVar7 + -1,iVar1,(LPPOINT)0x0);
    LineTo(param_2,iVar8,iVar1);
    if ((param_7 != 0) && (param_7 != 2)) {
      local_34 = param_5 / 2 + param_3;
      local_3c = param_3;
      local_30 = iVar9 + -2;
      local_38 = param_4;
      GetParent(param_1);
      local_1c = param_1;
      WVar2 = GetDlgCtrlID(param_1);
      local_c = &local_3c;
      local_8 = 0;
      local_4 = 0;
      ppHVar11 = &local_1c;
      UVar10 = 0x4e;
      local_14 = 0x1003;
      local_10 = param_2;
      local_18 = WVar2;
      pHVar3 = GetParent(param_1);
      LVar4 = SendMessageA(pHVar3,UVar10,WVar2,(LPARAM)ppHVar11);
      if (LVar4 == 0) {
        DVar5 = GetSysColor(0xf);
        CVar6 = SetBkColor(param_2,DVar5);
        local_2c.top = local_38;
        local_2c.left = local_3c;
        local_2c.right = local_34;
        local_2c.bottom = local_30;
        ExtTextOutA(param_2,0,0,2,&local_2c,(LPCSTR)0x0,0,(INT *)0x0);
        SetBkColor(param_2,CVar6);
      }
      SelectObject(param_2,h_00);
      MoveToEx(param_2,iVar8 + -1,param_4,(LPPOINT)0x0);
      iVar7 = param_5 + (param_3 - param_6 / 2);
      LineTo(param_2,iVar7 + -1,iVar9);
      LineTo(param_2,iVar7 + -1,iVar9 + -2);
      LineTo(param_2,param_3 + -1,iVar9 + -2);
      SelectObject(param_2,h);
      MoveToEx(param_2,iVar8,param_4,(LPPOINT)0x0);
      LineTo(param_2,iVar7,iVar9);
      LineTo(param_2,iVar7,iVar1);
      LineTo(param_2,param_3 + -1,iVar1);
      return;
    }
    break;
  case 1:
  case 3:
    SelectObject(param_2,h_00);
    MoveToEx(param_2,param_3 + param_5 + -1,param_4,(LPPOINT)0x0);
    iVar1 = param_4 + param_6;
    iVar9 = param_5 + (param_3 - param_6 / 2);
    LineTo(param_2,iVar9 + -1,iVar1);
    LineTo(param_2,iVar9 + -1,iVar1 + -2);
    LineTo(param_2,param_3 + -1,iVar1 + -2);
    SelectObject(param_2,h);
    MoveToEx(param_2,param_3 + param_5,param_4,(LPPOINT)0x0);
    LineTo(param_2,iVar9,iVar1);
    LineTo(param_2,iVar9,iVar1 + -1);
    LineTo(param_2,param_3 + -1,iVar1 + -1);
    return;
  case 4:
    SelectObject(param_2,h_00);
    MoveToEx(param_2,param_3 + param_5 + -1,param_4,(LPPOINT)0x0);
    iVar9 = param_4 + param_6;
    iVar8 = param_5 + (param_3 - param_6 / 2);
    LineTo(param_2,iVar8 + -1,iVar9);
    iVar1 = iVar9 + -2;
    LineTo(param_2,iVar8 + -1,iVar1);
    LineTo(param_2,param_3 + -1,iVar1);
    SelectObject(param_2,h);
    iVar7 = param_5 + param_3;
    MoveToEx(param_2,iVar7,param_4,(LPPOINT)0x0);
    LineTo(param_2,iVar8,iVar9);
    y = iVar9 + -1;
    LineTo(param_2,iVar8,y);
    LineTo(param_2,param_3 + -1,y);
    local_38 = param_4;
    local_3c = (param_3 - param_5 / 2) + param_5;
    local_34 = iVar7;
    local_30 = iVar1;
    GetParent(param_1);
    local_1c = param_1;
    WVar2 = GetDlgCtrlID(param_1);
    ppHVar11 = &local_1c;
    local_c = &local_3c;
    UVar10 = 0x4e;
    local_14 = 0x1003;
    local_10 = param_2;
    local_8 = 0;
    local_4 = 0;
    local_18 = WVar2;
    pHVar3 = GetParent(param_1);
    LVar4 = SendMessageA(pHVar3,UVar10,WVar2,(LPARAM)ppHVar11);
    if (LVar4 == 0) {
      DVar5 = GetSysColor(0xf);
      CVar6 = SetBkColor(param_2,DVar5);
      local_2c.top = local_38;
      local_2c.left = local_3c;
      local_2c.right = local_34;
      local_2c.bottom = local_30;
      ExtTextOutA(param_2,0,0,2,&local_2c,(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(param_2,CVar6);
    }
    SelectObject(param_2,h);
    MoveToEx(param_2,param_3 + 1,param_4,(LPPOINT)0x0);
    iVar8 = param_6 / 2 + param_3;
    LineTo(param_2,iVar8 + 1,iVar9);
    SelectObject(param_2,h_00);
    MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
    LineTo(param_2,iVar8,iVar9);
    LineTo(param_2,iVar8,iVar1);
    LineTo(param_2,iVar7,iVar1);
    SelectObject(param_2,h);
    MoveToEx(param_2,iVar8 + -1,y,(LPPOINT)0x0);
    LineTo(param_2,iVar7,y);
    return;
  case 7:
  case 9:
    SelectObject(param_2,h_00);
    MoveToEx(param_2,param_3,param_4,(LPPOINT)0x0);
    iVar8 = param_5 / 2 + param_3;
    LineTo(param_2,iVar8,param_4);
    LineTo(param_2,iVar8 + -2,param_6 / 5 + param_4);
    LineTo(param_2,iVar8 + -4,(param_6 * 2) / 5 + param_4);
    LineTo(param_2,iVar8 + -2,(param_6 * 2) / 3 + param_4);
    LineTo(param_2,iVar8 + -3,param_4 + -2 + param_6);
    iVar1 = param_3 + 1 + param_5;
    LineTo(param_2,iVar1,param_4 + -2 + param_6);
    SelectObject(param_2,h);
    MoveToEx(param_2,param_3,param_4 + 1,(LPPOINT)0x0);
    LineTo(param_2,iVar8,param_4 + 1);
    iVar9 = param_4 + -1 + param_6;
    MoveToEx(param_2,iVar8,iVar9,(LPPOINT)0x0);
    LineTo(param_2,iVar1,iVar9);
    return;
  case 8:
  case 10:
    SelectObject(param_2,h_00);
    MoveToEx(param_2,param_3 + param_5,param_4,(LPPOINT)0x0);
    iVar9 = param_5 / 2 + param_3;
    LineTo(param_2,iVar9,param_4);
    LineTo(param_2,iVar9 + 2,param_6 / 5 + param_4);
    LineTo(param_2,iVar9 + 4,(param_6 * 2) / 5 + param_4);
    LineTo(param_2,iVar9 + 2,(param_6 * 2) / 3 + param_4);
    LineTo(param_2,iVar9 + 3,param_4 + -2 + param_6);
    LineTo(param_2,param_3 + -1,param_4 + -2 + param_6);
    SelectObject(param_2,h);
    MoveToEx(param_2,iVar9,param_4 + 1,(LPPOINT)0x0);
    LineTo(param_2,param_3 + param_5 + 1,param_4 + 1);
    iVar1 = param_4 + -1 + param_6;
    MoveToEx(param_2,iVar9,iVar1,(LPPOINT)0x0);
    LineTo(param_2,param_3 + -1,iVar1);
  }
  return;
}


