/* Module: sftrans1.dll
   Function: FUN_0053fd80
   Address: 0053fd80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0053fd80(int param_1,int param_2,double *param_3)

{
  undefined4 uVar1;
  LPCVOID pvVar2;
  HDC pHVar3;
  HDC pHVar4;
  int iVar5;
  HFONT h;
  HGDIOBJ pvVar6;
  BOOL BVar7;
  HGLOBAL pvVar8;
  tagTEXTMETRICA *ptVar9;
  int nNumerator;
  int nDenominator;
  LOGFONTA local_c8;
  LPCVOID local_84;
  undefined4 local_80;
  uchar local_7c [32];
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined2 local_4c;
  tagTEXTMETRICA local_38;
  
  iVar5 = *(int *)(param_2 + 4);
  local_84 = (LPCVOID)0x0;
  local_80 = 0;
  local_5c = *(undefined4 *)(iVar5 + 0x28);
  local_54 = *(undefined4 *)(iVar5 + 0x30);
  local_58 = *(int *)(iVar5 + 0x2c);
  local_4c = 1;
  if ((uchar *)(iVar5 + 8) == (uchar *)0x0) {
    return 0x80004005;
  }
  _mbscpy(local_7c,(uchar *)(iVar5 + 8));
  if (*(int *)(param_1 + 0xc) == 0) {
    pHVar3 = GetDC((HWND)0x0);
    pHVar4 = CreateCompatibleDC(pHVar3);
    *(HDC *)(param_1 + 0xc) = pHVar4;
    ReleaseDC((HWND)0x0,pHVar3);
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_0053fefd;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = param_2;
  nDenominator = 0x48;
  nNumerator = 0x60;
  iVar5 = ftol();
  local_c8.lfHeight = MulDiv(iVar5,nNumerator,nDenominator);
  local_c8.lfHeight = -local_c8.lfHeight;
  if (-1 < local_c8.lfHeight) {
    local_c8.lfHeight = -1;
  }
  local_c8.lfItalic = (BYTE)local_54;
  local_c8.lfWeight = (-(uint)(local_58 != 0) & 300) + 400;
  local_c8.lfWidth = 0;
  local_c8.lfEscapement = 0;
  local_c8.lfOrientation = 0;
  local_c8.lfUnderline = '\0';
  local_c8.lfStrikeOut = '\0';
  local_c8.lfCharSet = (BYTE)local_4c;
  local_c8.lfOutPrecision = '\a';
  local_c8.lfClipPrecision = '\0';
  local_c8.lfQuality = '\0';
  local_c8.lfPitchAndFamily = '\0';
  _mbscpy((uchar *)local_c8.lfFaceName,local_7c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  pHVar3 = *(HDC *)(param_1 + 0xc);
  h = CreateFontIndirectA(&local_c8);
  if (h != (HFONT)0x0) {
    pvVar6 = SelectObject(pHVar3,h);
    ptVar9 = &local_38;
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar9->tmHeight = 0;
      ptVar9 = (tagTEXTMETRICA *)&ptVar9->tmAscent;
    }
    BVar7 = GetTextMetricsA(*(HDC *)(param_1 + 0xc),&local_38);
    if (BVar7 != 0) {
      if ((pvVar6 != (HGDIOBJ)0x0) &&
         (pvVar6 = SelectObject(*(HDC *)(param_1 + 0xc),pvVar6), pvVar6 != (HGDIOBJ)0x0)) {
        DeleteObject(pvVar6);
      }
      pvVar2 = local_84;
      *param_3 = ((double)local_38.tmDescent + (double)local_38.tmAscent) *
                 *(double *)(param_2 + 0x30);
      if (local_84 != (LPCVOID)0x0) {
        pvVar8 = GlobalHandle(local_84);
        GlobalUnlock(pvVar8);
        pvVar8 = GlobalHandle(pvVar2);
        GlobalFree(pvVar8);
      }
      return 0;
    }
    if ((pvVar6 != (HGDIOBJ)0x0) &&
       (pvVar6 = SelectObject(*(HDC *)(param_1 + 0xc),pvVar6), pvVar6 != (HGDIOBJ)0x0)) {
      DeleteObject(pvVar6);
    }
  }
LAB_0053fefd:
  pvVar2 = local_84;
  if (local_84 != (LPCVOID)0x0) {
    pvVar8 = GlobalHandle(local_84);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(pvVar2);
    GlobalFree(pvVar8);
  }
  return 0x80004005;
}


