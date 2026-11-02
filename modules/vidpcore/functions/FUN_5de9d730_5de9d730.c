/* Module: vidpcore.dll
   Function: FUN_5de9d730
   Address: 5de9d730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5de9d730(undefined4 *param_1,uint param_2,LOGFONTA *param_3,float param_4,float param_5)

{
  short sVar1;
  HDC hdc;
  HDC hdc_00;
  HFONT h;
  HGDIOBJ pvVar2;
  DWORD dwBytes;
  HGLOBAL pvVar3;
  LPVOID pvBuffer;
  LPVOID pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  UINT UVar11;
  int iVar12;
  undefined4 local_64;
  undefined4 uStack_60;
  MAT2 local_5c;
  _GLYPHMETRICS local_4c;
  tagTEXTMETRICA local_38;
  
  hdc = GetDC((HWND)0x0);
  hdc_00 = CreateCompatibleDC(hdc);
  ReleaseDC((HWND)0x0,hdc);
  h = CreateFontIndirectA(param_3);
  pvVar2 = SelectObject(hdc_00,h);
  GetTextMetricsA(hdc_00,&local_38);
  local_5c.eM11.fract = 0;
  local_5c.eM11.value = 0;
  local_5c.eM12.fract = 0;
  local_5c.eM12.value = 0;
  local_5c.eM21.fract = 0;
  local_5c.eM21.value = 0;
  local_5c.eM22.fract = 0;
  local_5c.eM22.value = 0;
  local_64 = 0;
  uStack_60 = 0;
  modf((double)param_4,(double *)&local_64);
  sVar1 = ftol();
  local_5c.eM11.value = sVar1;
  local_5c.eM11.fract = ftol();
  modf((double)param_5,(double *)&local_64);
  sVar1 = ftol();
  local_5c.eM22.value = sVar1;
  local_5c.eM22.fract = ftol();
  local_4c.gmBlackBoxX = 0;
  local_4c.gmBlackBoxY = 0;
  local_4c.gmptGlyphOrigin.x = 0;
  local_4c.gmptGlyphOrigin.y = 0;
  local_4c.gmCellIncX = 0;
  local_4c.gmCellIncY = 0;
  dwBytes = GetGlyphOutlineA(hdc_00,param_2 & 0xffff,6,&local_4c,0,(LPVOID)0x0,&local_5c);
  if (dwBytes == 0) {
    return 0x80070057;
  }
  pvVar3 = GlobalAlloc(0x40,dwBytes);
  pvBuffer = GlobalLock(pvVar3);
  GetGlyphOutlineA(hdc_00,param_2 & 0xffff,6,&local_4c,dwBytes,pvBuffer,&local_5c);
  UVar11 = local_4c.gmBlackBoxX;
  if ((local_4c.gmBlackBoxX & 3) != 0) {
    UVar11 = (local_4c.gmBlackBoxX - (local_4c.gmBlackBoxX & 3)) + 4;
  }
  if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)*param_1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)*param_1);
    GlobalFree(pvVar3);
  }
  *param_1 = 0;
  iVar12 = (local_4c.gmBlackBoxX ^ (int)local_4c.gmBlackBoxX >> 0x1f) -
           ((int)local_4c.gmBlackBoxX >> 0x1f);
  param_1[1] = 0;
  param_1[2] = iVar12;
  iVar8 = (local_4c.gmBlackBoxY ^ (int)local_4c.gmBlackBoxY >> 0x1f) -
          ((int)local_4c.gmBlackBoxY >> 0x1f);
  param_1[3] = iVar8;
  param_1[4] = (local_4c.gmptGlyphOrigin.x ^ local_4c.gmptGlyphOrigin.x >> 0x1f) -
               (local_4c.gmptGlyphOrigin.x >> 0x1f);
  param_1[5] = (local_4c.gmptGlyphOrigin.y ^ local_4c.gmptGlyphOrigin.y >> 0x1f) -
               (local_4c.gmptGlyphOrigin.y >> 0x1f);
  uVar9 = (int)local_4c.gmCellIncX >> 0x1f;
  param_1[6] = ((int)local_4c.gmCellIncX ^ uVar9) - uVar9;
  pvVar3 = GlobalAlloc(0x40,iVar8 * iVar12 * 4);
  pvVar4 = GlobalLock(pvVar3);
  iVar8 = param_1[2];
  *param_1 = pvVar4;
  param_1[1] = iVar8 * 4;
  iVar12 = 0;
  if (0 < (int)local_4c.gmBlackBoxY) {
    puVar5 = (undefined1 *)((int)pvVar4 + 2);
    pvVar4 = pvBuffer;
    do {
      iVar10 = 0;
      puVar6 = puVar5;
      if (0 < (int)local_4c.gmBlackBoxX) {
        do {
          uVar9 = (uint)*(byte *)(iVar10 + (int)pvVar4) * 4;
          if ((int)uVar9 < 0) {
            uVar9 = 0;
          }
          else if (0xff < uVar9) {
            uVar9 = 0xff;
          }
          uVar7 = (undefined1)uVar9;
          puVar6[-2] = uVar7;
          puVar6[-1] = uVar7;
          *puVar6 = uVar7;
          puVar6[1] = 0xff;
          iVar10 = iVar10 + 1;
          puVar6 = puVar6 + 4;
        } while (iVar10 < (int)local_4c.gmBlackBoxX);
      }
      iVar12 = iVar12 + 1;
      pvVar4 = (LPVOID)((int)pvVar4 + UVar11);
      puVar5 = puVar5 + iVar8 * 4;
    } while (iVar12 < (int)local_4c.gmBlackBoxY);
  }
  if (pvBuffer != (LPVOID)0x0) {
    pvVar3 = GlobalHandle(pvBuffer);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvBuffer);
    GlobalFree(pvVar3);
  }
  pvVar2 = SelectObject(hdc_00,pvVar2);
  DeleteObject(pvVar2);
  DeleteDC(hdc_00);
  return 0;
}


