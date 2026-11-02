/* Module: vegas30.exe
   Function: FUN_004521a0
   Address: 004521a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004521a0(void)

{
  int iVar1;
  HFONT h;
  HDC hdc;
  HGDIOBJ h_00;
  CHAR local_230 [40];
  uchar local_208 [260];
  uchar local_104 [256];
  undefined4 uStack_4;
  
  uStack_4 = 0x4521a5;
  FUN_004522d0();
  _SfGetModulePath_12(DAT_006471fc,local_208,0x104);
  _SfAddSlashToPathName_8(local_208,0x104);
  _mbscat(local_208,(uchar *)"SfLogo.ttf");
  _SfGetModulePath_12(DAT_006471fc,local_104,0x104);
  _SfAddSlashToPathName_8(local_104,0x104);
  _mbscat(local_104,(uchar *)"SfLogo.fot");
  iVar1 = FUN_00450600(2,8,local_208);
  if (-1 < iVar1) {
    CreateScalableFontResourceA(1,(LPCSTR)local_104,(LPCSTR)local_208,(LPCSTR)0x0);
    AddFontResourceA((LPCSTR)local_104);
    h = CreateFontIndirectA((LOGFONTA *)&DAT_0063dee0);
    if (h != (HFONT)0x0) {
      hdc = GetDC((HWND)0x0);
      h_00 = SelectObject(hdc,h);
      GetTextFaceA(hdc,0x28,local_230);
      SelectObject(hdc,h_00);
      ReleaseDC((HWND)0x0,hdc);
      DeleteObject(h);
      lstrcmpiA(local_230,"SfLogo");
    }
  }
  return;
}


