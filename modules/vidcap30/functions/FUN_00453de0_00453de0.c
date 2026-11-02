/* Module: vidcap30.exe
   Function: FUN_00453de0
   Address: 00453de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453de0(int param_1,HDC param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  COLORREF CVar5;
  HGDIOBJ pvVar6;
  int nIndex;
  DWORD color;
  HRGN hrgn;
  HBRUSH hbr;
  undefined3 uVar7;
  int iVar8;
  uint uVar9;
  UINT edge;
  bool bVar10;
  HIMAGELIST local_68;
  COLORREF local_64;
  int local_60;
  COLORREF local_58;
  tagRECT local_40;
  POINT local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  DVar4 = GetSysColor(0xf);
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
      CVar5 = SetBkColor(param_2,*(COLORREF *)(param_1 + 0x38));
      ExtTextOutA(param_2,0,0,2,(RECT *)(param_1 + 0x14),(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(param_2,CVar5);
    }
    DrawEdge(param_2,(LPRECT)(param_1 + 0x14),10,8);
    local_60 = 0;
    if (0 < iVar1) {
      do {
        bVar10 = local_60 == *(int *)(param_1 + 0x30);
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + local_60 * 4);
        iVar3 = *(int *)(param_1 + 0x34);
        local_64 = (uint)CONCAT11((char)(((DVar4 >> 0x10 & 0xff) * 9) / 10),
                                  (char)(((DVar4 >> 8 & 0xff) * 9) / 10)) << 8 |
                   ((DVar4 & 0xff) * 9) / 10 & 0xff;
        if (bVar10) {
          local_64 = DVar4;
        }
        CVar5 = SetBkColor(param_2,local_64);
        if (bVar10) {
          pvVar6 = *(HGDIOBJ *)(param_1 + 0x40);
        }
        else {
          pvVar6 = *(HGDIOBJ *)(param_1 + 0x3c);
        }
        pvVar6 = SelectObject(param_2,pvVar6);
        edge = (-(uint)bVar10 & 3) + 1;
        uVar9 = (-(uint)bVar10 & 0xffffc000) + 0x4000;
        iVar8 = (-(uint)bVar10 & 0xfffffffe) + 2;
        if ((*(int *)(param_1 + 0x24) != 0) || (nIndex = 0x11, bVar10)) {
          nIndex = 0x12;
        }
        color = GetSysColor(nIndex);
        local_58 = SetTextColor(param_2,color);
        if (bVar10) {
          local_68 = *(HIMAGELIST *)(param_1 + 0x48);
        }
        else if (*(int *)(param_1 + 0x24) == 0) {
          local_68 = *(HIMAGELIST *)(param_1 + 0x4c);
        }
        else if (local_60 == iVar3) {
          local_68 = *(HIMAGELIST *)(param_1 + 0x48);
        }
        else {
          local_68 = *(HIMAGELIST *)(param_1 + 0x44);
        }
        if ((*(int *)(iVar2 + 0x14) < *(int *)(iVar2 + 0x1c)) &&
           (*(int *)(iVar2 + 0x18) < *(int *)(iVar2 + 0x20))) {
          local_40.left = *(int *)(iVar2 + 0x14);
          local_40.top = *(int *)(iVar2 + 0x18);
          local_20 = local_40.left + 3;
          local_40.right = *(int *)(iVar2 + 0x1c);
          local_40.bottom = *(int *)(iVar2 + 0x20);
          local_30.y = local_40.bottom - iVar8;
          local_18 = local_40.right + -3;
          local_24 = local_40.top + 3;
          local_30.x = local_40.left;
          local_28 = local_40.left;
          local_1c = local_40.top;
          local_14 = local_40.top;
          local_10 = local_40.right;
          local_c = local_24;
          local_8 = local_40.right;
          local_4 = local_30.y;
          hrgn = CreatePolygonRgn(&local_30,6,2);
          if (hrgn != (HRGN)0x0) {
            hbr = CreateSolidBrush(local_64);
            FillRgn(param_2,hrgn,hbr);
            if (hbr != (HBRUSH)0x0) {
              DeleteObject(hbr);
            }
            DeleteObject(hrgn);
          }
          local_40.left = *(int *)(iVar2 + 0x14) + 3;
          local_40.top = *(int *)(iVar2 + 0x18);
          local_40.right = *(int *)(iVar2 + 0x1c) + -3;
          local_40.bottom = *(int *)(iVar2 + 0x20);
          uVar7 = (undefined3)(uVar9 >> 8);
          DrawEdge(param_2,&local_40,edge,CONCAT31(uVar7,2));
          local_40.left = *(LONG *)(iVar2 + 0x14);
          local_40.right = *(LONG *)(iVar2 + 0x1c);
          local_40.bottom = local_40.bottom - iVar8;
          local_40.top = local_40.top + 3;
          DrawEdge(param_2,&local_40,edge,CONCAT31(uVar7,5));
          local_40.top = *(int *)(iVar2 + 0x18);
          local_40.left = *(int *)(iVar2 + 0x14);
          local_40.bottom = local_40.top + 4;
          local_40.right = local_40.left + 4;
          DrawEdge(param_2,&local_40,edge,uVar9 | 0x16);
          local_40.top = *(int *)(iVar2 + 0x18);
          local_40.right = *(LONG *)(iVar2 + 0x1c);
          local_40.bottom = local_40.top + 4;
          local_40.left = *(int *)(iVar2 + 0x1c) + -4;
          DrawEdge(param_2,&local_40,edge,uVar9 | 0x1c);
        }
        if ((*(int *)(iVar2 + 0x24) < *(int *)(iVar2 + 0x2c)) &&
           (*(int *)(iVar2 + 0x28) < *(int *)(iVar2 + 0x30))) {
          ImageList_Draw(local_68,*(int *)(iVar2 + 0xc),param_2,*(int *)(iVar2 + 0x24),
                         *(int *)(iVar2 + 0x28),1);
        }
        if ((*(int *)(iVar2 + 0x34) < *(int *)(iVar2 + 0x3c)) &&
           (*(int *)(iVar2 + 0x38) < *(int *)(iVar2 + 0x40))) {
          DrawTextA(param_2,*(LPCSTR *)(iVar2 + 4),-1,(LPRECT)(iVar2 + 0x34),0x8824);
        }
        SetTextColor(param_2,local_58);
        SetBkColor(param_2,CVar5);
        SelectObject(param_2,pvVar6);
        local_60 = local_60 + 1;
      } while (local_60 < iVar1);
    }
    SetTextColor(param_2,local_58);
  }
  return;
}


