/* Module: vidcap30.exe
   Function: FUN_00511200
   Address: 00511200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00511200(int param_1,HDC param_2,uint param_3)

{
  int *piVar1;
  int y;
  int y_00;
  int iVar2;
  int iVar3;
  int iVar4;
  HPEN pHVar5;
  HGDIOBJ pvVar6;
  int iVar7;
  DWORD color;
  COLORREF CVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = param_1;
  iVar9 = *(int *)(param_1 + 0x78);
  y = *(int *)(param_1 + 0x7c);
  iVar10 = *(int *)(param_1 + 0x80);
  y_00 = *(int *)(param_1 + 0x84);
  param_3 = param_3 & 0x7000;
  if (param_3 != 0x1000) {
    iVar3 = y_00 - y;
    iVar4 = iVar10 - iVar9;
    pHVar5 = CreatePen(0,1,*(COLORREF *)(param_1 + 8));
    pvVar6 = SelectObject(param_2,pHVar5);
    piVar1 = (int *)(param_1 + 0x14);
    if (*piVar1 < 1) {
      iVar7 = iVar3 / 2 + y;
      MoveToEx(param_2,iVar9,iVar7,(LPPOINT)0x0);
      LineTo(param_2,iVar10,iVar7);
      if (param_3 != 0x2000) {
        iVar7 = ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) + y;
        MoveToEx(param_2,iVar9,iVar7,(LPPOINT)0x0);
        LineTo(param_2,iVar10,iVar7);
        iVar3 = ((int)(iVar3 * 3 + (iVar3 * 3 >> 0x1f & 3U)) >> 2) + y;
        MoveToEx(param_2,iVar9,iVar3,(LPPOINT)0x0);
        LineTo(param_2,iVar10,iVar3);
      }
    }
    else {
      param_1 = 0;
      if (-1 < *piVar1) {
        do {
          iVar3 = ftol();
          MoveToEx(param_2,iVar9,iVar3,(LPPOINT)0x0);
          LineTo(param_2,iVar10,iVar3);
          param_1 = param_1 + 1;
        } while (param_1 <= *(int *)(iVar2 + 0x14));
      }
    }
    if (*(int *)(iVar2 + 0x10) < 1) {
      iVar3 = iVar4 / 2 + iVar9;
      MoveToEx(param_2,iVar3,y,(LPPOINT)0x0);
      LineTo(param_2,iVar3,y_00);
      if (param_3 != 0x2000) {
        iVar3 = ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + iVar9;
        MoveToEx(param_2,iVar3,y,(LPPOINT)0x0);
        LineTo(param_2,iVar3,y_00);
        iVar3 = ((int)(iVar4 * 3 + (iVar4 * 3 >> 0x1f & 3U)) >> 2) + iVar9;
        MoveToEx(param_2,iVar3,y,(LPPOINT)0x0);
        LineTo(param_2,iVar3,y_00);
      }
    }
    else {
      param_1 = 0;
      if (-1 < *(int *)(iVar2 + 0x10)) {
        do {
          iVar3 = ftol();
          MoveToEx(param_2,iVar3,y,(LPPOINT)0x0);
          LineTo(param_2,iVar3,y_00);
          param_1 = param_1 + 1;
        } while (param_1 <= *(int *)(iVar2 + 0x10));
      }
    }
    pvVar6 = SelectObject(param_2,pvVar6);
    DeleteObject(pvVar6);
    if (*(int *)(iVar2 + 0xc) != 0) {
      pHVar5 = CreatePen(2,1,*(COLORREF *)(iVar2 + 8));
      pvVar6 = SelectObject(param_2,pHVar5);
      color = GetSysColor(5);
      CVar8 = SetBkColor(param_2,color);
      MoveToEx(param_2,iVar9,y_00,(LPPOINT)0x0);
      LineTo(param_2,iVar10,y);
      SetBkColor(param_2,CVar8);
      pvVar6 = SelectObject(param_2,pvVar6);
      DeleteObject(pvVar6);
    }
    if ((*(int *)(iVar2 + 0x68) != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      CVar8 = _SfGetUIColor_4(0x8d);
      pHVar5 = CreatePen(0,2,CVar8);
      pvVar6 = SelectObject(param_2,pHVar5);
      iVar9 = *(int *)(iVar2 + 0x80);
      if ((*(int *)(iVar2 + 0x94) != *(int *)(iVar2 + 0x90)) &&
         (iVar10 = (iVar9 - *(int *)(iVar2 + 0x78)) + -1, 0 < iVar10)) {
        iVar9 = (int)(((longlong)(*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x90)) *
                      (longlong)iVar10) /
                     (longlong)(*(int *)(iVar2 + 0x94) - *(int *)(iVar2 + 0x90)));
      }
      MoveToEx(param_2,iVar9,y_00,(LPPOINT)0x0);
      LineTo(param_2,iVar9,y);
      pvVar6 = SelectObject(param_2,pvVar6);
      DeleteObject(pvVar6);
    }
  }
  return;
}


