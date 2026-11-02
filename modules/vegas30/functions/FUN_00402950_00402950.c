/* Module: vegas30.exe
   Function: FUN_00402950
   Address: 00402950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402950(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  HDC hdc;
  DWORD DStack_cb4;
  undefined4 local_c8c;
  uint local_c88;
  tagPALETTEENTRY atStack_828 [256];
  undefined1 auStack_428 [1064];
  
  _DAT_00648888 = DAT_0064b4e0;
  _DAT_0064888c = DAT_0064b4e4;
  DAT_0064b110 = DAT_006477e0;
  _DAT_00648890 = DAT_0064b4f0;
  _DAT_0064b130 = DAT_006477f8;
  _DAT_0064b120 = DAT_006477f0;
  DAT_0064b11c = DAT_006477ec;
  _DAT_0064b124 = DAT_006477f4;
  _DAT_0064b12c = DAT_00647804;
  DAT_0064b114 = DAT_006477e4;
  DAT_0064b118 = DAT_006477e8;
  _DAT_0064b134 = DAT_006477fc;
  _DAT_0064b128 = DAT_00647800;
  DAT_0064720c = 0;
  if ((DAT_0064761c & 0x80) == 0) {
    DAT_0064761c = (uint)(DAT_006476ac == 0) << 6 | DAT_0064761c & 0xffffffbf;
  }
  FUN_00401200();
  if (DAT_0064b4e4 == 0) {
    iVar2 = FUN_00601ab0();
    if (iVar2 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar3 = (local_c88 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar3) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_c8c;
        DAT_0064b4e4 = uVar3;
      }
    }
  }
  if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  DStack_cb4 = 0x402ac1;
  _SfLoadWindowPlacement_16();
  FUN_00401b00();
  DAT_0064b13c = DrawDibOpen();
  hdc = GetDC((HWND)0x0);
  DAT_0064b140 = CreateHalftonePalette(hdc);
  DStack_cb4 = 0x402b01;
  GetPaletteEntries(DAT_0064b140,0,0x100,atStack_828);
  _SfVideo_PaletteRGBAFromEntry_12();
  DStack_cb4 = 0x40;
  _SfVideo_InitBitmapInfo_28(auStack_428,0x1b);
  DStack_cb4 = 0xffffffff;
  DrawDibBegin(DAT_0064b13c,0,0xffffffff);
  ReleaseDC((HWND)0x0,hdc);
  DStack_cb4 = 8;
  InitCommonControlsEx((INITCOMMONCONTROLSEX *)&DStack_cb4);
  _SfFileIO_CreateFileIOManagerKeyed_28
            (&DAT_0064b510,&stack0xfffff35c,3,2,(bVar1 + 1) * 0x10000 | bVar1 + 1,&DAT_00647390,
             DAT_0064b4dc);
  if (DAT_0064b510 != 0) {
    FUN_004f19f0(&DAT_006476a0);
  }
  return;
}


