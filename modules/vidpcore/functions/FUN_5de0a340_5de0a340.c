/* Module: vidpcore.dll
   Function: FUN_5de0a340
   Address: 5de0a340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de0a340(LPCSTR param_1,uint param_2,int *param_3)

{
  int nNumber;
  HDC hdc;
  HFONT h;
  HGDIOBJ h_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LOGFONTA *pLVar5;
  int nDenominator;
  tagSIZE local_7c;
  LOGFONTA local_74;
  tagTEXTMETRICA local_38;
  
  hdc = GetDC((HWND)0x0);
  nDenominator = 0x48;
  iVar3 = *param_3;
  nNumber = param_3[1];
  pLVar5 = &local_74;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    pLVar5->lfHeight = 0;
    pLVar5 = (LOGFONTA *)&pLVar5->lfWidth;
  }
  iVar4 = GetDeviceCaps(hdc,0x5a);
  local_74.lfHeight = MulDiv(param_2 & 0xffff,iVar4,nDenominator);
  local_74.lfWeight = 400;
  local_74.lfCharSet = '\x01';
  local_74.lfHeight = -local_74.lfHeight;
  lstrcpyA(local_74.lfFaceName,param_1);
  h = CreateFontIndirectA(&local_74);
  if (h == (HFONT)0x0) {
    uVar1 = GetDialogBaseUnits();
    uVar1 = uVar1 & 0xffff;
    uVar2 = GetDialogBaseUnits();
    uVar2 = uVar2 >> 0x10;
  }
  else {
    h_00 = SelectObject(hdc,h);
    GetTextMetricsA(hdc,&local_38);
    uVar2 = local_38.tmExternalLeading + local_38.tmHeight;
    GetTextExtentPointA(hdc,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",0x34,&local_7c);
    uVar1 = (local_7c.cx + 0x1a) / 0x34;
    SelectObject(hdc,h_00);
    DeleteObject(h);
  }
  ReleaseDC((HWND)0x0,hdc);
  iVar3 = MulDiv(iVar3,uVar1,4);
  *param_3 = iVar3;
  iVar3 = MulDiv(nNumber,uVar2,8);
  param_3[1] = iVar3;
  return;
}


