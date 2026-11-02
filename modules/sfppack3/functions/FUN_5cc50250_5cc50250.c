/* Module: sfppack3.dll
   Function: FUN_5cc50250
   Address: 5cc50250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc50250(int param_1,HDC param_2,uint param_3)

{
  int *piVar1;
  int y;
  int y_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  HPEN pHVar6;
  HGDIOBJ pvVar7;
  int iVar8;
  DWORD color;
  COLORREF CVar9;
  int iVar10;
  int iVar11;
  
  iVar2 = param_1;
  iVar10 = *(int *)(param_1 + 0x78);
  y = *(int *)(param_1 + 0x7c);
  iVar11 = *(int *)(param_1 + 0x80);
  y_00 = *(int *)(param_1 + 0x84);
  uVar3 = param_3 & 0x7000;
  if (uVar3 != 0x1000) {
    iVar4 = y_00 - y;
    iVar5 = iVar11 - iVar10;
    pHVar6 = CreatePen(0,1,*(COLORREF *)(param_1 + 8));
    pvVar7 = SelectObject(param_2,pHVar6);
    piVar1 = (int *)(param_1 + 0x14);
    if (*piVar1 < 1) {
      iVar8 = iVar4 / 2 + y;
      MoveToEx(param_2,iVar10,iVar8,(LPPOINT)0x0);
      LineTo(param_2,iVar11,iVar8);
      if (uVar3 != 0x2000) {
        iVar8 = ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + y;
        MoveToEx(param_2,iVar10,iVar8,(LPPOINT)0x0);
        LineTo(param_2,iVar11,iVar8);
        iVar4 = ((int)(iVar4 * 3 + (iVar4 * 3 >> 0x1f & 3U)) >> 2) + y;
        MoveToEx(param_2,iVar10,iVar4,(LPPOINT)0x0);
        LineTo(param_2,iVar11,iVar4);
      }
    }
    else {
      param_1 = 0;
      if (-1 < *piVar1) {
        do {
          iVar4 = ftol();
          MoveToEx(param_2,iVar10,iVar4,(LPPOINT)0x0);
          LineTo(param_2,iVar11,iVar4);
          param_1 = param_1 + 1;
        } while (param_1 <= *(int *)(iVar2 + 0x14));
      }
    }
    if (*(int *)(iVar2 + 0x10) < 1) {
      iVar4 = iVar5 / 2 + iVar10;
      MoveToEx(param_2,iVar4,y,(LPPOINT)0x0);
      LineTo(param_2,iVar4,y_00);
      if (uVar3 != 0x2000) {
        iVar4 = ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) + iVar10;
        MoveToEx(param_2,iVar4,y,(LPPOINT)0x0);
        LineTo(param_2,iVar4,y_00);
        iVar4 = ((int)(iVar5 * 3 + (iVar5 * 3 >> 0x1f & 3U)) >> 2) + iVar10;
        MoveToEx(param_2,iVar4,y,(LPPOINT)0x0);
        LineTo(param_2,iVar4,y_00);
      }
    }
    else {
      param_1 = 0;
      if (-1 < *(int *)(iVar2 + 0x10)) {
        do {
          iVar4 = ftol();
          MoveToEx(param_2,iVar4,y,(LPPOINT)0x0);
          LineTo(param_2,iVar4,y_00);
          param_1 = param_1 + 1;
        } while (param_1 <= *(int *)(iVar2 + 0x10));
      }
    }
    pvVar7 = SelectObject(param_2,pvVar7);
    DeleteObject(pvVar7);
    if (*(int *)(iVar2 + 0xc) != 0) {
      pHVar6 = CreatePen(2,1,*(COLORREF *)(iVar2 + 8));
      pvVar7 = SelectObject(param_2,pHVar6);
      color = GetSysColor(5);
      CVar9 = SetBkColor(param_2,color);
      MoveToEx(param_2,iVar10,y_00,(LPPOINT)0x0);
      LineTo(param_2,iVar11,y);
      SetBkColor(param_2,CVar9);
      pvVar7 = SelectObject(param_2,pvVar7);
      DeleteObject(pvVar7);
    }
    if ((*(int *)(iVar2 + 0x68) != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      CVar9 = FUN_5cc695c0(0x8d);
      pHVar6 = CreatePen(0,2,CVar9);
      pvVar7 = SelectObject(param_2,pHVar6);
      iVar10 = *(int *)(iVar2 + 0x80);
      if ((*(int *)(iVar2 + 0x94) != *(int *)(iVar2 + 0x90)) &&
         (iVar11 = (iVar10 - *(int *)(iVar2 + 0x78)) + -1, 0 < iVar11)) {
        iVar10 = (int)(((longlong)(*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x90)) *
                       (longlong)iVar11) /
                      (longlong)(*(int *)(iVar2 + 0x94) - *(int *)(iVar2 + 0x90)));
      }
      MoveToEx(param_2,iVar10,y_00,(LPPOINT)0x0);
      LineTo(param_2,iVar10,y);
      pvVar7 = SelectObject(param_2,pvVar7);
      DeleteObject(pvVar7);
    }
  }
  return;
}


