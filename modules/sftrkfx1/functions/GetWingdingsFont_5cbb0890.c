/* Module: sftrkfx1.dll
   Function: GetWingdingsFont
   Address: 5cbb0890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct HFONT__ * __stdcall GetWingdingsFont(void) */

HFONT__ * GetWingdingsFont(void)

{
  HDC hdc;
  HGDIOBJ h;
  int iVar1;
  HFONT h_00;
  int nDenominator;
  int cWidth;
  int cEscapement;
  int cOrientation;
  int cWeight;
  DWORD bItalic;
  DWORD bUnderline;
  DWORD bStrikeOut;
  DWORD iCharSet;
  DWORD iOutPrecision;
  DWORD iClipPrecision;
  DWORD iQuality;
  DWORD iPitchAndFamily;
  uchar *pszFaceName;
  uchar local_40 [32];
  uchar local_20 [32];
  
                    /* 0x10890  2  ?GetWingdingsFont@@YGPAUHFONT__@@XZ */
  _mbscpy(local_40," ");
  _mbscpy(local_20,(uchar *)"Wingdings");
  hdc = GetDC((HWND)0x0);
  h = GetCurrentObject(hdc,6);
  pszFaceName = local_20;
  iPitchAndFamily = 0;
  iQuality = 2;
  iClipPrecision = 0;
  iOutPrecision = 4;
  iCharSet = 2;
  bStrikeOut = 0;
  bUnderline = 0;
  bItalic = 0;
  cWeight = 0;
  cOrientation = 0;
  cEscapement = 0;
  cWidth = 0;
  nDenominator = 0x48;
  iVar1 = GetDeviceCaps(hdc,0x5a);
  iVar1 = MulDiv(-0xc,iVar1,nDenominator);
  h_00 = CreateFontA(iVar1,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut,
                     iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,
                     (LPCSTR)pszFaceName);
  if (h_00 != (HFONT)0x0) {
    SelectObject(hdc,h_00);
    GetTextFaceA(hdc,0x20,(LPSTR)local_40);
    SelectObject(hdc,h);
  }
  iVar1 = lstrcmpA((LPCSTR)local_20,(LPCSTR)local_40);
  if (iVar1 != 0) {
    DeleteObject(h_00);
    h_00 = (HFONT)0x0;
  }
  ReleaseDC((HWND)0x0,hdc);
  return h_00;
}


