/* Module: vidcap30.exe
   Function: FUN_004027d0
   Address: 004027d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004027d0(void)

{
  HDC hdc;
  INITCOMMONCONTROLSEX IStack_c7c;
  tagPALETTEENTRY atStack_c28 [512];
  undefined1 auStack_428 [1064];
  
  if ((DAT_005ba4b4 & 0x80) == 0) {
    DAT_005ba4b4 = (uint)(DAT_005ba544 == 0) << 6 | DAT_005ba4b4 & 0xffffffbf;
  }
  _DAT_005bb820 = DAT_005bb518;
  DAT_005bb810 = DAT_005bb504;
  DAT_005bb814 = DAT_005bb508;
  _DAT_005bb824 = DAT_005bb51c;
  _DAT_005bb830 = DAT_005bb520;
  _DAT_005bb834 = DAT_005bb524;
  DAT_005bb818 = DAT_005bb510;
  DAT_005bb81c = DAT_005bb514;
  _DAT_005bb828 = DAT_005bb528;
  _DAT_005bb82c = DAT_005bb52c;
  _DAT_005ba2a8 = 0;
  FUN_00401170();
  _SfFileIO_CreateFileIOManager_12();
  IStack_c7c.dwICC = 0x4028b0;
  _SfLoadWindowPlacement_16();
  FUN_004016f0();
  DAT_005bb83c = DrawDibOpen();
  hdc = GetDC((HWND)0x0);
  DAT_005bb840 = CreateHalftonePalette(hdc);
  IStack_c7c.dwICC = 0x4028ed;
  GetPaletteEntries(DAT_005bb840,0,0x100,atStack_c28);
  _SfVideo_PaletteRGBAFromEntry_12();
  IStack_c7c.dwICC = 0x40;
  IStack_c7c.dwSize = 0x1b;
  _SfVideo_InitBitmapInfo_28(auStack_428);
  IStack_c7c.dwICC = 0xffffffff;
  IStack_c7c.dwSize = 0xffffffff;
  DrawDibBegin(DAT_005bb83c,0);
  ReleaseDC((HWND)0x0,hdc);
  IStack_c7c.dwSize = 8;
  IStack_c7c.dwICC = 0x16ff;
  InitCommonControlsEx(&IStack_c7c);
  return;
}


