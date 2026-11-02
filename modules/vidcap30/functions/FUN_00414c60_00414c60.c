/* Module: vidcap30.exe
   Function: FUN_00414c60
   Address: 00414c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414c60(void)

{
  HFONT h;
  HDC hdc;
  HGDIOBJ h_00;
  CHAR local_12c [40];
  uchar local_104 [260];
  
  _SfGetModulePath_12(DAT_005ba298,local_104,0x104);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)"SfHandle.fnt");
  FUN_00413b30(3,8,local_104);
  AddFontResourceA((LPCSTR)local_104);
  h = CreateFontIndirectA((LOGFONTA *)&DAT_005877b8);
  if (h != (HFONT)0x0) {
    hdc = GetDC((HWND)0x0);
    h_00 = SelectObject(hdc,h);
    GetTextFaceA(hdc,0x28,local_12c);
    SelectObject(hdc,h_00);
    ReleaseDC((HWND)0x0,hdc);
    DeleteObject(h);
    lstrcmpiA(local_12c,"SfHandle");
  }
  return;
}


