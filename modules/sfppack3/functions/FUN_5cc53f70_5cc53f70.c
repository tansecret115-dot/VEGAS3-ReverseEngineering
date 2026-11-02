/* Module: sfppack3.dll
   Function: FUN_5cc53f70
   Address: 5cc53f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc53f70(undefined4 *param_1,HDC param_2,int *param_3,uint param_4)

{
  int *piVar1;
  byte bVar2;
  BOOL BVar3;
  HDC pHVar4;
  DWORD DVar5;
  int iVar6;
  HBRUSH hBrush;
  uint uVar7;
  bool bVar8;
  GRAYSTRINGPROC lpOutputFunc;
  uchar *lpData;
  HWND nCount;
  LONG X;
  int nWidth;
  COLORREF color;
  int nHeight;
  HWND local_240;
  tagRECT local_23c;
  uint local_22c;
  uint local_228;
  HDC local_224;
  undefined1 local_220 [4];
  uint local_21c;
  uint local_218;
  short local_210;
  short local_20e;
  tagSIZE local_208;
  uchar local_200 [512];
  
  local_240 = (HWND)*param_1;
  BVar3 = IsWindowEnabled(local_240);
  bVar8 = BVar3 != 0;
  SaveDC(param_2);
  local_23c.left = *param_3;
  local_23c.top = param_3[1];
  local_23c.right = param_3[2];
  local_23c.bottom = param_3[3];
  IntersectClipRect(param_2,*param_3,param_3[1],param_3[2],param_3[3]);
  if ((param_1[3] != 0) && (param_1[4] != 0)) {
    FUN_5cc54360(param_1,(int *)&local_240,(int *)&local_224,&local_228,&local_22c);
    if (param_1[5] != 0) {
      DrawDibRealize(param_1[3],param_2,0);
    }
    piVar1 = (int *)param_1[4];
    DrawDibDraw(param_1[3],param_2,local_240,local_224,local_228,local_22c,piVar1,
                *piVar1 + piVar1[8] * 4 + (int)piVar1,0,0,piVar1[1],piVar1[2],0x1000);
    goto LAB_5cc54346;
  }
  if (param_1[1] != 0) {
    pHVar4 = CreateCompatibleDC(param_2);
    local_224 = pHVar4;
    local_240 = SelectObject(pHVar4,(HGDIOBJ)param_1[1]);
    GetObjectA((HANDLE)param_1[1],0x18,local_220);
    bVar2 = 1;
    if ((local_210 != 1) || (local_20e != 1)) {
      bVar2 = 0;
    }
    if ((param_4 & 0x2000) == 0) {
      DVar5 = GetSysColor(0xf);
      FUN_5cc6af60(pHVar4,(int)local_220,DVar5);
    }
    local_228 = local_23c.right - local_23c.left;
    uVar7 = local_23c.bottom - local_23c.top;
    local_208.cx = param_4 & 0x8000;
    local_22c = uVar7;
    if ((local_208.cx == 0) &&
       ((pHVar4 = local_224, (param_4 & 0x4000) == 0 ||
        (((int)local_21c <= (int)local_228 && ((int)local_218 <= (int)uVar7)))))) {
      local_22c = local_218;
      local_23c.left = local_23c.left + (int)(local_228 - local_21c) / 2;
      local_23c.top = local_23c.top + (int)(uVar7 - local_218) / 2;
      local_23c.right = local_23c.left + local_21c;
      local_23c.bottom = local_23c.top + local_218;
      local_228 = local_21c;
    }
    SetStretchBltMode(param_2,(-(uint)bVar2 & 0xfffffffe) + 3);
    if (!bVar8) {
      SetBkColor(param_2,0xffffff);
      SetTextColor(param_2,0);
      SelectObject(param_2,DAT_5cc98604);
    }
    StretchBlt(param_2,local_23c.left,local_23c.top,local_228,local_22c,pHVar4,0,0,local_21c,
               local_218,(-(uint)!bVar8 & 0xffdc0389) + 0xcc0020);
    SelectObject(pHVar4,local_240);
    DeleteDC(pHVar4);
    goto LAB_5cc54346;
  }
  if ((HGDIOBJ)param_1[2] != (HGDIOBJ)0x0) {
    SelectObject(param_2,(HGDIOBJ)param_1[2]);
  }
  if (param_1[9] == 0) {
    if ((param_4 & 0x10) != 0) {
      color = 0xff0000;
      goto LAB_5cc54212;
    }
  }
  else {
    color = param_1[10];
LAB_5cc54212:
    SetTextColor(param_2,color);
  }
  GetWindowTextA(local_240,(LPSTR)local_200,0x200);
  local_240 = (HWND)lstrlenA((LPCSTR)local_200);
  GetTextExtentPointA(param_2,(LPCSTR)local_200,(int)local_240,&local_208);
  if ((param_4 & 0x1000) != 0) {
    FUN_5cc5fe30(param_2,local_200,0x200,param_3[2] - *param_3);
  }
  InflateRect(&local_23c,-2,0);
  iVar6 = ((local_23c.top - local_208.cy) + local_23c.bottom) / 2;
  local_23c.bottom = local_208.cy + iVar6;
  local_23c.top = iVar6;
  if (bVar8) {
    uVar7 = param_4 & 0xf;
    if (uVar7 == 1) {
      uVar7 = 0x11;
    }
    else if (uVar7 == 2) {
      uVar7 = 2;
    }
    else if (uVar7 == 0xc) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x10;
    }
    if ((param_4 & 0x80) != 0) {
      uVar7 = uVar7 | 0x800;
    }
    if ((param_4 & 0xf00) != 0) {
      uVar7 = uVar7 | 0x20;
    }
    if (param_1[7] != 0) {
      SetBkMode(param_2,1);
    }
    iVar6 = lstrlenA((LPCSTR)local_200);
    DrawTextA(param_2,(LPCSTR)local_200,iVar6,&local_23c,uVar7 | 0x40);
  }
  else {
    nHeight = 0;
    nWidth = 0;
    lpData = local_200;
    lpOutputFunc = (GRAYSTRINGPROC)0x0;
    nCount = local_240;
    X = local_23c.left;
    hBrush = GetStockObject(4);
    GrayStringA(param_2,hBrush,lpOutputFunc,(LPARAM)lpData,(int)nCount,X,iVar6,nWidth,nHeight);
  }
LAB_5cc54346:
  RestoreDC(param_2,-1);
  return;
}


