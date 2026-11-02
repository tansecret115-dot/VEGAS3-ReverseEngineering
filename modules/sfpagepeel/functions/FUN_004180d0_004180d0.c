/* Module: sfpagepeel.dll
   Function: FUN_004180d0
   Address: 004180d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004180d0(int param_1,HDC param_2)

{
  HGDIOBJ pvVar1;
  HGDIOBJ pvVar2;
  HFONT pHVar3;
  int iVar4;
  HGDIOBJ pvVar5;
  LPCSTR pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_48;
  int local_44;
  double local_40;
  double local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return 0;
  }
  pvVar1 = GetStockObject(0);
  pvVar2 = GetStockObject(7);
  pvVar1 = SelectObject(param_2,pvVar1);
  pvVar2 = SelectObject(param_2,pvVar2);
  FUN_00415410(param_1,&local_30);
  if (*(int *)(param_1 + 0x2f4) == 0) goto LAB_0041820a;
  pHVar3 = FUN_0042f0f0(0x6e);
  iVar4 = SetBkMode(param_2,1);
  iVar9 = *(int *)(param_1 + 0x2f4);
  if (iVar9 == 1) {
    iVar9 = 0x6e;
LAB_00418174:
    FUN_0042f0f0(iVar9);
  }
  else {
    if (iVar9 == 2) {
      iVar9 = 100;
      goto LAB_00418174;
    }
    if (iVar9 == 3) {
      iVar9 = 0x82;
      goto LAB_00418174;
    }
  }
  pvVar5 = SelectObject(param_2,pHVar3);
  pCVar6 = PTR_DAT_0047ca14;
  if (*(int *)(param_1 + 0x138) != 0) {
    pCVar6 = PTR_DAT_0047ca24;
  }
  DrawTextA(param_2,pCVar6,-1,(LPRECT)(param_1 + 0x22c),0x21);
  pCVar6 = PTR_DAT_0047ca18;
  if (*(int *)(param_1 + 0x138) != 0) {
    pCVar6 = PTR_DAT_0047ca28;
  }
  DrawTextA(param_2,pCVar6,-1,(LPRECT)(param_1 + 0x23c),0x21);
  pCVar6 = PTR_DAT_0047ca1c;
  if (*(int *)(param_1 + 0x138) != 0) {
    pCVar6 = PTR_DAT_0047ca2c;
  }
  DrawTextA(param_2,pCVar6,-1,(LPRECT)(param_1 + 0x24c),0x21);
  SetBkMode(param_2,iVar4);
  SelectObject(param_2,pvVar5);
LAB_0041820a:
  if ((*(byte *)(param_1 + 4) & 0x20) != 0) {
    iVar9 = SetBkMode(param_2,1);
    pHVar3 = FUN_0042f0f0(*(int *)(param_1 + 0x2f8));
    pvVar5 = SelectObject(param_2,pHVar3);
    pCVar6 = PTR_DAT_0047ca14;
    if (*(int *)(param_1 + 0x138) != 0) {
      pCVar6 = PTR_DAT_0047ca24;
    }
    DrawTextA(param_2,pCVar6,-1,(LPRECT)(param_1 + 0x29c),0x25);
    pCVar6 = PTR_DAT_0047ca18;
    if (*(int *)(param_1 + 0x138) != 0) {
      pCVar6 = PTR_DAT_0047ca28;
    }
    DrawTextA(param_2,pCVar6,-1,(LPRECT)(param_1 + 0x2ac),0x25);
    pCVar6 = PTR_DAT_0047ca1c;
    if (*(int *)(param_1 + 0x138) != 0) {
      pCVar6 = PTR_DAT_0047ca2c;
    }
    DrawTextA(param_2,pCVar6,-1,(LPRECT)(param_1 + 700),0x25);
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      DrawTextA(param_2,PTR_DAT_0047ca20,-1,(LPRECT)(param_1 + 0x2cc),0x25);
    }
    SetBkMode(param_2,iVar9);
    SelectObject(param_2,pvVar5);
  }
  local_40 = (double)local_30;
  local_38 = 0.0;
  if (((&stack0x00000000 != (undefined1 *)0x40) && (param_1 != -0x188)) &&
     (&stack0x00000000 != (undefined1 *)0x48)) {
    iVar9 = *(int *)(param_1 + 400);
    local_48 = *(int *)(param_1 + 0x188);
    iVar4 = ftol();
    local_44 = *(int *)(param_1 + 0x18c);
    if ((local_48 <= iVar4) && (iVar9 = iVar9 + -1, local_48 = iVar4, iVar9 < iVar4)) {
      local_48 = iVar9;
    }
    if ((!SBORROW4(local_44,local_44)) && (iVar9 = *(int *)(param_1 + 0x194) + -1, iVar9 < local_44)
       ) {
      local_44 = iVar9;
    }
  }
  local_20.y = *(int *)(param_1 + 0x194);
  local_18 = local_48 + 5;
  local_14 = local_20.y + 5;
  local_10 = local_48 + -5;
  local_20.x = local_48;
  local_c = local_14;
  Polygon(param_2,&local_20,3);
  local_40 = (double)local_2c;
  local_38 = 0.0;
  if (((&stack0x00000000 != (undefined1 *)0x40) && (param_1 != -0x198)) &&
     (&stack0x00000000 != (undefined1 *)0x48)) {
    iVar9 = *(int *)(param_1 + 0x1a0);
    local_48 = *(int *)(param_1 + 0x198);
    iVar4 = ftol();
    local_44 = *(int *)(param_1 + 0x19c);
    if ((local_48 <= iVar4) && (iVar9 = iVar9 + -1, local_48 = iVar4, iVar9 < iVar4)) {
      local_48 = iVar9;
    }
    if ((!SBORROW4(local_44,local_44)) && (iVar9 = *(int *)(param_1 + 0x1a4) + -1, iVar9 < local_44)
       ) {
      local_44 = iVar9;
    }
  }
  local_20.y = *(int *)(param_1 + 0x1a4);
  local_18 = local_48 + 5;
  local_14 = local_20.y + 5;
  local_10 = local_48 + -5;
  local_20.x = local_48;
  local_c = local_14;
  Polygon(param_2,&local_20,3);
  local_40 = (double)local_28;
  local_38 = 0.0;
  if (((&stack0x00000000 != (undefined1 *)0x40) && (param_1 != -0x1a8)) &&
     (&stack0x00000000 != (undefined1 *)0x48)) {
    iVar9 = *(int *)(param_1 + 0x1b0);
    local_48 = *(int *)(param_1 + 0x1a8);
    iVar4 = ftol();
    local_44 = *(int *)(param_1 + 0x1ac);
    if ((local_48 <= iVar4) && (iVar9 = iVar9 + -1, local_48 = iVar4, iVar9 < iVar4)) {
      local_48 = iVar9;
    }
    if ((!SBORROW4(local_44,local_44)) && (iVar9 = *(int *)(param_1 + 0x1b4) + -1, iVar9 < local_44)
       ) {
      local_44 = iVar9;
    }
  }
  local_20.y = *(int *)(param_1 + 0x1b4);
  local_18 = local_48 + 5;
  local_14 = local_20.y + 5;
  local_10 = local_48 + -5;
  local_20.x = local_48;
  local_c = local_14;
  Polygon(param_2,&local_20,3);
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    local_38 = (double)((float)_DAT_0046fdc0 - local_24);
    local_40 = 0.0;
    if (((&stack0x00000000 != (undefined1 *)0x40) && (param_1 != -0x1c8)) &&
       (&stack0x00000000 != (undefined1 *)0x48)) {
      iVar9 = *(int *)(param_1 + 0x1d0);
      iVar4 = *(int *)(param_1 + 0x1cc);
      iVar8 = *(int *)(param_1 + 0x1d4);
      local_48 = *(int *)(param_1 + 0x1c8);
      local_44 = ftol();
      if ((!SBORROW4(local_48,local_48)) && (iVar9 = iVar9 + -1, iVar9 < local_48)) {
        local_48 = iVar9;
      }
      if ((local_44 < iVar4) || (iVar4 = iVar8 + -1, iVar4 < local_44)) {
        local_44 = iVar4;
      }
    }
    PatBlt(param_2,*(int *)(param_1 + 0x1c8),local_44,
           *(int *)(param_1 + 0x1d0) - *(int *)(param_1 + 0x1c8),1,0x550009);
    local_20.y = local_44;
    local_20.x = *(int *)(param_1 + 0x1d0) + -1;
    local_18 = *(int *)(param_1 + 0x1d0) + 4;
    local_14 = local_44 + 5;
    local_c = local_44 + -5;
    local_10 = local_18;
    Polygon(param_2,&local_20,3);
  }
  FUN_00414c20(&local_40,(float *)(param_1 + 0x158));
  if ((_DAT_0046fdc0 == local_40) && (*(int *)(param_1 + 0x130) != 0)) {
    local_40 = 0.0;
  }
  if (((&stack0x00000000 != (undefined1 *)0x40) && (param_1 != -0x1b8)) &&
     (&stack0x00000000 != (undefined1 *)0x48)) {
    iVar9 = *(int *)(param_1 + 0x1c0);
    local_48 = *(int *)(param_1 + 0x1b8);
    iVar7 = ftol();
    iVar4 = *(int *)(param_1 + 0x1bc);
    iVar8 = *(int *)(param_1 + 0x1c4);
    local_44 = ftol();
    if ((local_48 <= iVar7) && (iVar9 = iVar9 + -1, local_48 = iVar7, iVar9 < iVar7)) {
      local_48 = iVar9;
    }
    if ((local_44 < iVar4) || (iVar4 = iVar8 + -1, iVar4 < local_44)) {
      local_44 = iVar4;
    }
  }
  if (_DAT_00474ea0 == local_40) {
    PatBlt(param_2,*(int *)(param_1 + 0x1b8),local_44,
           *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1b8),1,0x550009);
    local_14 = local_44 + 5;
    local_20.y = local_44;
    local_20.x = *(int *)(param_1 + 0x1c0) + -1;
    local_18 = *(int *)(param_1 + 0x1c0) + 4;
    local_c = local_44 + -5;
    local_10 = local_18;
    Polygon(param_2,&local_20,3);
  }
  else {
    local_20.x = local_48 + 2;
    iVar9 = local_44 + 2;
    local_10 = local_48 + 6;
    local_20.y = iVar9;
    local_18 = local_20.x;
    local_14 = local_44 + 6;
    local_c = iVar9;
    Polygon(param_2,&local_20,3);
    local_20.x = local_48 + 2;
    iVar4 = local_44 + -2;
    local_18 = local_48 + 6;
    local_c = local_44 + -6;
    local_20.y = iVar4;
    local_14 = iVar4;
    local_10 = local_20.x;
    Polygon(param_2,&local_20,3);
    iVar8 = local_48 + -2;
    local_14 = local_44 + -6;
    local_10 = local_48 + -6;
    local_20.x = iVar8;
    local_20.y = iVar4;
    local_18 = iVar8;
    local_c = iVar4;
    Polygon(param_2,&local_20,3);
    local_18 = local_48 + -6;
    local_20.x = iVar8;
    local_20.y = iVar9;
    local_14 = iVar9;
    local_10 = iVar8;
    local_c = local_44 + 6;
    Polygon(param_2,&local_20,3);
  }
  pvVar1 = SelectObject(param_2,pvVar1);
  pvVar2 = SelectObject(param_2,pvVar2);
  DeleteObject(pvVar1);
  DeleteObject(pvVar2);
  return 1;
}


