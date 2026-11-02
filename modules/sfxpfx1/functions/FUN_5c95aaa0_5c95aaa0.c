/* Module: sfxpfx1.dll
   Function: FUN_5c95aaa0
   Address: 5c95aaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c95aaa0(int param_1,HDC param_2)

{
  int *piVar1;
  uint uVar2;
  HGDIOBJ pvVar3;
  HGDIOBJ h;
  int iVar4;
  code *pcVar5;
  undefined4 ****ppppuVar6;
  tagRECT local_50;
  tagRECT local_40;
  POINT local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 ***local_18;
  HGDIOBJ local_14;
  undefined4 ***local_10;
  HGDIOBJ local_c;
  undefined4 ***local_8;
  HGDIOBJ local_4;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((uVar2 & 0x100) == 0) {
    piVar1 = (int *)(param_1 + 0x90);
    local_50.left = *piVar1;
    local_50.top = *(int *)(param_1 + 0x94);
    local_50.right = *(int *)(param_1 + 0x98);
    local_50.bottom = *(int *)(param_1 + 0x9c);
    iVar4 = uVar2 << 0x1f;
    local_40.left = *piVar1;
    local_40.top = *(int *)(param_1 + 0x94);
    local_40.right = *(int *)(param_1 + 0x98);
    local_40.bottom = *(int *)(param_1 + 0x9c);
    if ((uVar2 & 8) == 0) {
      local_40.left = local_40.left + (*(int *)(param_1 + 0x98) - *piVar1) / 2;
      local_50.right = (~uVar2 >> 0xe & 1) + local_40.left;
    }
    else {
      local_50.top = local_50.top + (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x94)) / 2;
      local_40.bottom = (~uVar2 >> 0xe & 1) + local_50.top;
    }
    FUN_5c95a960((int)(uVar2 << 0x11) >> 0x1f,param_2,&local_40,(int)(uVar2 << 0x14) >> 0x1f);
    FUN_5c95a960((*(int *)(param_1 + 0xc) << 0x11) >> 0x1f,param_2,&local_50,
                 (*(int *)(param_1 + 0xc) << 0x13) >> 0x1f);
    local_40.right = local_40.right - (((*(uint *)(param_1 + 0xc) & 0x4000) != 0) + 1);
    local_40.bottom = local_40.bottom + -1;
    if ((*(uint *)(param_1 + 0xc) & 0x800) != 0) {
      OffsetRect(&local_40,1,1);
    }
    local_50.right = local_50.right - (((*(uint *)(param_1 + 0xc) & 0x4000) != 0) + 1);
    local_50.bottom = local_50.bottom + -1;
    if ((*(uint *)(param_1 + 0xc) & 0x1000) != 0) {
      OffsetRect(&local_50,1,1);
    }
    pvVar3 = GetStockObject(4);
    if (iVar4 < 0) {
      h = (HGDIOBJ)FUN_5c96e000(0x10,0);
    }
    else {
      h = GetStockObject(7);
    }
    SelectObject(param_2,h);
    SelectObject(param_2,pvVar3);
    if ((*(byte *)(param_1 + 0xc) & 8) == 0) {
      InflateRect(&local_40,-2,-2);
      local_28 = local_40.right;
      local_40.left = local_40.left + 1;
      local_24 = (local_40.top + local_40.bottom) / 2;
      local_1c = local_24 * 2 - local_40.top;
      local_30.y = local_40.top;
      local_30.x = local_40.left;
      local_20 = local_40.left;
      InflateRect(&local_50,-2,-2);
      pcVar5 = Polygon_exref;
      local_10 = (undefined4 ***)local_50.left;
      local_50.right = local_50.right + -1;
      local_c = (HGDIOBJ)((local_50.bottom + local_50.top) / 2);
      local_14 = (HGDIOBJ)local_50.top;
      local_4 = (HGDIOBJ)((int)local_c * 2 - local_50.top);
      local_18 = (undefined4 ***)local_50.right;
      local_8 = (undefined4 ***)local_50.right;
      if (iVar4 < 0) {
        MoveToEx(param_2,local_28,local_24,(LPPOINT)0x0);
        pcVar5 = LineTo_exref;
        LineTo(param_2,local_30.x,local_30.y);
        LineTo(param_2,local_20,local_1c + 1);
        MoveToEx(param_2,(int)local_18,(int)local_14,(LPPOINT)0x0);
        LineTo(param_2,(int)local_10 + -1,(int)local_c + 1);
        pvVar3 = (HGDIOBJ)FUN_5c96e000(0x14,0);
        SelectObject(param_2,pvVar3);
        MoveToEx(param_2,local_28 + -1,local_24 + 1,(LPPOINT)0x0);
        LineTo(param_2,local_20,local_1c);
        MoveToEx(param_2,(int)local_18,(int)local_14 + 1,(LPPOINT)0x0);
        LineTo(param_2,(int)local_8,(int)local_4);
        ppppuVar6 = (undefined4 ****)local_10;
        pvVar3 = local_c;
      }
      else {
        Polygon(param_2,&local_30,3);
        pvVar3 = (HGDIOBJ)0x3;
        ppppuVar6 = &local_18;
      }
    }
    else {
      InflateRect(&local_40,-2,-2);
      local_40.bottom = local_40.bottom + -1;
      local_28 = (local_40.right + local_40.left) / 2;
      local_20 = local_28 * 2 - local_40.left;
      local_30.x = local_40.left;
      local_24 = local_40.top;
      local_30.y = local_40.bottom;
      local_1c = local_40.bottom;
      InflateRect(&local_50,-2,-2);
      pcVar5 = Polygon_exref;
      local_50.top = local_50.top + 1;
      local_18 = (undefined4 ***)local_50.left;
      local_10 = (undefined4 ***)((local_50.left + local_50.right) / 2);
      local_8 = (undefined4 ***)((int)local_10 * 2 - local_50.left);
      local_c = (HGDIOBJ)local_50.bottom;
      local_14 = (HGDIOBJ)local_50.top;
      local_4 = (HGDIOBJ)local_50.top;
      if (iVar4 < 0) {
        MoveToEx(param_2,local_30.x,local_30.y,(LPPOINT)0x0);
        pcVar5 = LineTo_exref;
        LineTo(param_2,local_28 + 1,local_24 + -1);
        MoveToEx(param_2,(int)local_10,(int)local_c,(LPPOINT)0x0);
        LineTo(param_2,(int)local_18,(int)local_14);
        LineTo(param_2,(int)local_8 + 1,(int)local_4);
        pvVar3 = (HGDIOBJ)FUN_5c96e000(0x14,0);
        SelectObject(param_2,pvVar3);
        MoveToEx(param_2,local_30.x + 1,local_30.y,(LPPOINT)0x0);
        LineTo(param_2,local_20,local_1c);
        LineTo(param_2,local_28,local_24);
        MoveToEx(param_2,(int)local_10 + 1,(int)local_c + -1,(LPPOINT)0x0);
        ppppuVar6 = (undefined4 ****)local_8;
        pvVar3 = local_4;
      }
      else {
        Polygon(param_2,&local_30,3);
        ppppuVar6 = &local_18;
        pvVar3 = (HGDIOBJ)0x3;
      }
    }
    (*pcVar5)(param_2,ppppuVar6,pvVar3);
    SelectObject(param_2,local_8);
    SelectObject(param_2,local_4);
    return 1;
  }
  return 0;
}


