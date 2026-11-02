/* Module: qt4plug.dll
   Function: FUN_5f514780
   Address: 5f514780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f514780(HWND param_1,int param_2,int *param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  HBRUSH pHVar3;
  HGDIOBJ pvVar4;
  HGDIOBJ pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint y;
  uint x;
  code *pcVar10;
  int iVar11;
  tagRECT local_10;
  
  GdiFlush();
  hdc = GetDC(param_1);
  hdc_00 = CreateCompatibleDC(hdc);
  h = CreateCompatibleBitmap(hdc,param_3[2] - *param_3,param_3[3] - param_3[1]);
  if ((hdc_00 != (HDC)0x0) && (h != (HBITMAP)0x0)) {
    if (*(int *)(param_2 + 0xc) == 0) {
      pHVar3 = CreateSolidBrush(0xff);
      pvVar4 = SelectObject(hdc_00,pHVar3);
      pvVar5 = SelectObject(hdc_00,h);
      local_10.right = param_3[2] - *param_3;
      local_10.bottom = param_3[3] - param_3[1];
      local_10.left = 0;
      local_10.top = 0;
      PatBlt(hdc_00,0,0,local_10.right,local_10.bottom,0xf00021);
      DrawEdge(hdc_00,&local_10,10,0xf);
      BitBlt(hdc,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],hdc_00,0,0,
             0xcc0020);
      pvVar4 = SelectObject(hdc,pvVar4);
      DeleteObject(pvVar4);
      SelectObject(hdc_00,pvVar5);
      pcVar10 = DeleteObject_exref;
    }
    else {
      pHVar3 = CreateSolidBrush(0x460c0c);
      pvVar4 = SelectObject(hdc_00,pHVar3);
      pvVar5 = SelectObject(hdc_00,h);
      local_10.right = param_3[2] - *param_3;
      local_10.bottom = param_3[3] - param_3[1];
      local_10.left = 0;
      local_10.top = 0;
      PatBlt(hdc_00,0,0,local_10.right,local_10.bottom,0xf00021);
      pvVar4 = SelectObject(hdc_00,pvVar4);
      DeleteObject(pvVar4);
      pHVar3 = CreateSolidBrush(0xffff);
      pvVar4 = SelectObject(hdc_00,pHVar3);
      iVar1 = *param_3;
      iVar2 = param_3[2];
      iVar6 = ftol();
      uVar7 = ftol();
      iVar11 = -param_4;
      if (-param_4 == param_4 || iVar11 < (int)param_4) {
        do {
          uVar9 = param_6 + iVar11;
          if (((-1 < (int)uVar9) && ((int)uVar9 >> 0x1f <= param_5)) &&
             (((int)uVar9 >> 0x1f < param_5 || (uVar9 < param_4)))) {
            uVar9 = ftol();
            y = uVar9;
            if ((int)uVar7 <= (int)uVar9) {
              y = uVar7;
            }
            if ((int)uVar9 <= (int)uVar7) {
              uVar9 = uVar7;
            }
            x = (iVar11 * iVar6 - iVar6 / 2) + (iVar2 - iVar1) / 2;
            if (-1 < (int)((param_3[2] - *param_3) - x | (param_3[3] - param_3[1]) - y | x | y)) {
              iVar8 = iVar6 + -1;
              if (iVar8 < 2) {
                iVar8 = 1;
              }
              PatBlt(hdc_00,x,y,iVar8,uVar9 - y,0xf00021);
              if (iVar11 == 0) {
                iVar8 = iVar6;
                if (iVar6 < 2) {
                  iVar8 = 1;
                }
                PatBlt(hdc_00,x,0,iVar8,param_3[3] - param_3[1],0x550009);
              }
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 <= (int)param_4);
      }
      DrawEdge(hdc_00,&local_10,10,0xf);
      BitBlt(hdc,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],hdc_00,0,0,
             0xcc0020);
      pvVar4 = SelectObject(hdc_00,pvVar4);
      pcVar10 = DeleteObject_exref;
      DeleteObject(pvVar4);
      SelectObject(hdc_00,pvVar5);
    }
    (*pcVar10)(h);
    (*pcVar10)(hdc_00);
    if (hdc != (HDC)0x0) {
      ReleaseDC((HWND)local_10.bottom,hdc);
    }
  }
  return;
}


