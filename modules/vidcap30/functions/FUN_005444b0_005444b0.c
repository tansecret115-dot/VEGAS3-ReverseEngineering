/* Module: vidcap30.exe
   Function: FUN_005444b0
   Address: 005444b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005444b0(undefined4 *param_1)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  DWORD DVar3;
  HBRUSH pHVar4;
  HDC hdc;
  HDC pHVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  HBITMAP pHVar9;
  HGDIOBJ ho;
  int iVar10;
  undefined4 local_20;
  tagRECT tStack_18;
  
  hWnd = (HWND)*param_1;
  local_20 = 0;
  iVar2 = FUN_00541f60(param_1);
  iVar7 = param_1[0x34];
  DAT_006624bc = GetSysColor(0xf);
  DAT_006624c4 = GetSysColor(0x14);
  DAT_006624c0 = GetSysColor(0x10);
  DAT_006624c8 = GetSysColor(6);
  DAT_006624d0 = GetSysColor(0xd);
  DAT_006624cc = GetSysColor(0xe);
  DAT_006624d4 = GetSysColor(0x12);
  DVar3 = GetSysColor(8);
  param_1[0x45] = DVar3;
  DVar3 = GetSysColor(5);
  param_1[0x44] = DVar3;
  if (param_1[0x42] == 0) {
    if ((param_1[0x59] & 0x4000) == 0) {
      pHVar9 = CreateBitmapIndirect((BITMAP *)&DAT_005b8d30);
      pHVar4 = CreatePatternBrush(pHVar9);
      param_1[0x42] = pHVar4;
      DeleteObject(pHVar9);
    }
    else {
      pHVar4 = CreateSolidBrush(0xc0c0c0);
      param_1[0x42] = pHVar4;
    }
  }
  hdc = GetDC(hWnd);
  if (hdc != (HDC)0x0) {
    if (param_1[0x38] == 0) {
      pHVar5 = CreateCompatibleDC(hdc);
      param_1[0x38] = pHVar5;
      if (pHVar5 == (HDC)0x0) goto LAB_00544794;
      param_1[0x3b] = 1;
      param_1[0x3c] = 1;
    }
    if ((HGDIOBJ)param_1[0x43] != (HGDIOBJ)0x0) {
      SelectObject((HDC)param_1[0x38],(HGDIOBJ)param_1[0x43]);
      SelectObject(hdc,(HGDIOBJ)param_1[0x43]);
    }
    if (iVar7 < 0) {
      if ((param_1[0x58] & 0x100) == 0) {
        uVar6 = param_1[0xd];
      }
      else {
        uVar6 = param_1[0x17];
      }
      iVar7 = FUN_005441f0(uVar6);
    }
    iVar10 = 0;
    iVar8 = (*(code *)param_1[0x87])(param_1 + 0x72,0,0xffff,1);
    if ((*(HANDLE *)(iVar8 + 0x18) != (HANDLE)0x0) &&
       (GetObjectA(*(HANDLE *)(iVar8 + 0x18),0x18,&tStack_18), tStack_18.top != 0)) {
      if (*(int *)(iVar8 + 0x1c) == 0) {
        iVar10 = tStack_18.top + 4;
      }
      else {
        iVar10 = tStack_18.top + 4 + (tStack_18.top / *(int *)(iVar8 + 0x1c)) * 2;
      }
    }
    GetTextExtentPointA(hdc,"0",1,(LPSIZE)(param_1 + 0x39));
    iVar8 = 0;
    if (0 < iVar7) {
      iVar1 = ((LPSIZE)(param_1 + 0x39))->cx;
      iVar8 = iVar1 * iVar7 + param_1[0x35] + 8 + iVar10;
      if (iVar8 <= iVar1) {
        iVar8 = iVar1;
      }
    }
    param_1[0x1c] = iVar8;
    param_1[0x1d] = param_1[0x3a] * iVar2 + 4;
    if ((param_1[0x58] & 0x2000) != 0) {
      param_1[0x1d] = 0;
    }
    param_1[0x5b] = param_1[0x36] + 3 + param_1[0x3a];
    GetClientRect(hWnd,&tStack_18);
    iVar2 = tStack_18.right - tStack_18.left;
    iVar7 = param_1[0x1d] + 1;
    if (param_1[0x1d] + 1 < param_1[0x5b] + 1) {
      iVar7 = param_1[0x5b] + 1;
    }
    if (((param_1[0x38] == 0) || ((int)param_1[0x3b] < iVar2)) || ((int)param_1[0x3c] < iVar7)) {
      pHVar9 = CreateCompatibleBitmap(hdc,iVar2,iVar7);
      if (pHVar9 == (HBITMAP)0x0) goto LAB_00544794;
      ho = SelectObject((HDC)param_1[0x38],pHVar9);
      DeleteObject(ho);
      param_1[0x3b] = iVar2;
      param_1[0x3c] = iVar7;
    }
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = param_1[0x1c] + 1;
    param_1[0x37] = 0;
    param_1[0x40] = param_1[0x5b] + 1;
    FUN_005447b0(hWnd,param_1[0x70],param_1[0x18],param_1);
    FUN_00541720(param_1);
    FUN_005417e0(param_1);
    local_20 = 1;
  }
LAB_00544794:
  ReleaseDC(hWnd,hdc);
  return local_20;
}


