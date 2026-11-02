/* Module: vegas30.exe
   Function: FUN_004506e0
   Address: 004506e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004506e0(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  UINT UVar5;
  DWORD DVar6;
  HFONT pHVar7;
  HDC hdc;
  HGDIOBJ h;
  int iVar8;
  HIMAGELIST p_Var9;
  int iVar10;
  uchar local_248 [260];
  CHAR local_144 [260];
  uchar local_40 [63];
  undefined1 local_1;
  
  DAT_0064bd98 = 0;
  if (DAT_006471f4 == 0) {
    param_2 = 0;
  }
  FUN_00451640(param_1);
  if ((DAT_00648570 & 0x80000000) == 0) {
    _SfGetModulePath_12(DAT_006471fc,local_248,0x104);
    _SfAddSlashToPathName_8(local_248,0x104);
    _mbscat(local_248,(uchar *)"skins.ini");
    GetPrivateProfileStringA("skins","UseSection","skins",local_144,0x104,(LPCSTR)local_248);
    UVar5 = GetPrivateProfileIntA(local_144,"BaseSkin",-1,(LPCSTR)local_248);
    if (((param_2 != 0) && (0 < (int)UVar5)) && (UVar5 < 2)) {
      param_2 = UVar5;
    }
  }
  else {
    local_248[0] = '\0';
    local_144[0] = '\0';
  }
  if (1 < param_2) {
    param_2 = 0;
  }
  iVar10 = param_2 * 0x90;
  if (local_248[0] == '\0') {
    UVar5 = 1;
  }
  else {
    UVar5 = GetPrivateProfileIntA(local_144,"FrameHotButtons",1,(LPCSTR)local_248);
  }
  param_1[0x95] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)(byte)(&DAT_00612237)[iVar10];
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"HorzFaderSilkEdge",(uint)(byte)(&DAT_00612237)[iVar10],
                       (LPCSTR)local_248);
  }
  param_1[0x91] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)(byte)(&DAT_0061224f)[iVar10];
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"HorzAssignSilkEdge",(uint)(byte)(&DAT_0061224f)[iVar10],
                       (LPCSTR)local_248);
  }
  param_1[0x92] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)(byte)(&DAT_00612257)[iVar10];
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"HorzScrubSilkEdge",(uint)(byte)(&DAT_00612257)[iVar10],
                       (LPCSTR)local_248);
  }
  param_1[0x93] = UVar5;
  bVar3 = (&DAT_00612247)[iVar10];
  bVar4 = (&DAT_0061223f)[iVar10];
  if (local_248[0] == '\0') {
    if (bVar4 <= bVar3) {
      bVar4 = bVar3;
    }
    UVar5 = (UINT)bVar4;
  }
  else {
    if (bVar4 <= bVar3) {
      bVar4 = bVar3;
    }
    UVar5 = GetPrivateProfileIntA(local_144,"VertFaderSilkEdge",(uint)bVar4,(LPCSTR)local_248);
  }
  param_1[0x94] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)(byte)(&DAT_00612227)[iVar10];
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"ScribblePadEdge",(uint)(byte)(&DAT_00612227)[iVar10],
                       (LPCSTR)local_248);
  }
  param_1[0x90] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_00612337;
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"TrackButtonGlyphSize",(uint)DAT_00612337,(LPCSTR)local_248);
  }
  param_1[0x61] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_0061233f;
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"MainButtonGlyphSize",(uint)DAT_0061233f,(LPCSTR)local_248);
  }
  param_1[0x66] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_00612347;
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"StockMenuButtonGlyphSize",(uint)DAT_00612347,(LPCSTR)local_248);
  }
  param_1[0x6c] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_0061234f;
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"ExplorerButtonGlyphSize",(uint)DAT_0061234f,(LPCSTR)local_248);
  }
  param_1[0x72] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_00612357;
  }
  else {
    UVar5 = GetPrivateProfileIntA(local_144,"ExplorerIconSize",(uint)DAT_00612357,(LPCSTR)local_248)
    ;
  }
  param_1[0x78] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_00612367;
  }
  else {
    UVar5 = GetPrivateProfileIntA(local_144,"PanSpeakerSize",(uint)DAT_00612367,(LPCSTR)local_248);
  }
  param_1[0x7c] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_00612377;
  }
  else {
    UVar5 = GetPrivateProfileIntA
                      (local_144,"VideoMotionButtonSize",(uint)DAT_00612377,(LPCSTR)local_248);
  }
  param_1[0x88] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_0061237f;
  }
  else {
    UVar5 = GetPrivateProfileIntA(local_144,"BusButtonWidth",(uint)DAT_0061237f,(LPCSTR)local_248);
  }
  param_1[0xaa] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_00612387;
  }
  else {
    UVar5 = GetPrivateProfileIntA(local_144,"BusBlockWidth",(uint)DAT_00612387,(LPCSTR)local_248);
  }
  param_1[0xb0] = UVar5;
  if (local_248[0] == '\0') {
    UVar5 = (UINT)DAT_0061238f;
  }
  else {
    UVar5 = GetPrivateProfileIntA(local_144,"FxBlockWidth",(uint)DAT_0061238f,(LPCSTR)local_248);
  }
  param_1[0xb4] = UVar5;
  if ((local_248[0] != '\0') &&
     (DAT_00647af4 = GetPrivateProfileIntA(local_144,"TimeTextColor",DAT_00647af4,(LPCSTR)local_248)
     , local_248[0] != '\0')) {
    DAT_00647af8 = GetPrivateProfileIntA(local_144,"TimeBackColor",DAT_00647af8,(LPCSTR)local_248);
  }
  DVar6 = GetPrivateProfileStringA
                    (local_144,"TimeFontFaceName",(LPCSTR)0x0,(LPSTR)local_40,0x40,(LPCSTR)local_248
                    );
  if (DVar6 != 0) {
    local_1 = 0;
    _mbscpy(&DAT_00647ab4,local_40);
  }
  pHVar7 = CreateFontIndirectA((LOGFONTA *)&DAT_00612390);
  param_1[0x96] = (int)pHVar7;
  if (pHVar7 != (HFONT)0x0) {
    hdc = GetDC((HWND)0x0);
    h = SelectObject(hdc,(HGDIOBJ)param_1[0x96]);
    GetTextFaceA(hdc,0x28,(LPSTR)local_40);
    SelectObject(hdc,h);
    ReleaseDC((HWND)0x0,hdc);
    iVar8 = lstrcmpiA((LPCSTR)local_40,"SfHandle");
    if (iVar8 != 0) {
      DeleteObject((HGDIOBJ)param_1[0x96]);
      param_1[0x96] = 0;
    }
  }
  FUN_004512e0(local_144,"Background",local_248,&DAT_00612208 + iVar10,param_1);
  piVar1 = param_1 + 4;
  FUN_004512e0(local_144,"TrackHeader",local_248,&DAT_00612210 + iVar10,piVar1);
  piVar2 = param_1 + 8;
  FUN_004512e0(local_144,"SelectedTrackHeader",local_248,&DAT_00612218 + iVar10,piVar2);
  FUN_004512e0(local_144,"BusBackground",local_248,&DAT_00612228 + iVar10,param_1 + 0x10);
  FUN_004512e0(local_144,"ScribblePad",local_248,&DAT_00612220 + iVar10,param_1 + 0xc);
  FUN_004512e0(local_144,"HorzFaderSilk",local_248,&DAT_00612230 + iVar10,param_1 + 0x14);
  FUN_004512e0(local_144,"HorzAssignSilk",local_248,&DAT_00612248 + iVar10,param_1 + 0x20);
  FUN_004512e0(local_144,"VertFaderSilk",local_248,&DAT_00612238 + iVar10,param_1 + 0x18);
  FUN_004512e0(local_144,"VertStereoFaderSilk",local_248,&DAT_00612240 + iVar10,param_1 + 0x1c);
  FUN_004512e0(local_144,"HorzScrubSilk",local_248,&DAT_00612250 + iVar10,param_1 + 0x24);
  FUN_004512e0(local_144,"HorzFaderThumb",local_248,&DAT_00612258 + iVar10,param_1 + 0x28);
  FUN_004512e0(local_144,"HorzAssignThumb",local_248,&DAT_00612270 + iVar10,param_1 + 0x34);
  FUN_004512e0(local_144,"VertFaderThumb",local_248,&DAT_00612260 + iVar10,param_1 + 0x2c);
  FUN_004512e0(local_144,"VertStereoFaderThumb",local_248,&DAT_00612268 + iVar10,param_1 + 0x30);
  FUN_004512e0(local_144,"ScrubThumb",local_248,&DAT_00612278 + iVar10,param_1 + 0x38);
  FUN_004512e0(local_144,"ScrubSetThumb",local_248,&DAT_00612280 + iVar10,param_1 + 0x3c);
  FUN_004512e0(local_144,"TrackButtonGlyphs",local_248,&DAT_00612330,param_1 + 0x40);
  FUN_004512e0(local_144,"MainButtonGlyphs",local_248,&DAT_00612338,param_1 + 0x44);
  FUN_004512e0(local_144,"StockMenuButtonGlyphs",local_248,&DAT_00612340,param_1 + 0x48);
  FUN_004512e0(local_144,"ExplorerButtonGlyphs",local_248,&DAT_00612348,param_1 + 0x4c);
  FUN_004512e0(local_144,"ExplorerIcons",local_248,&DAT_00612350,param_1 + 0x50);
  FUN_004512e0(local_144,"EnvelopeHandles",local_248,&DAT_00612358,param_1 + 0x54);
  FUN_004512e0(local_144,"HorzMeter",local_248,&DAT_00612288 + iVar10,param_1 + 0x58);
  FUN_004512e0(local_144,"VertMeter",local_248,&DAT_00612290 + iVar10,param_1 + 0x5c);
  FUN_004512e0(local_144,"PanSpeakers",local_248,&DAT_00612360,param_1 + 0x7f);
  FUN_004512e0(local_144,"PanBackground",local_248,&DAT_00612368,param_1 + 0x83);
  FUN_004512e0(local_144,"BusButtons",local_248,&DAT_00612378,param_1 + 0x9d);
  FUN_004512e0(local_144,"BusBlocks",local_248,&DAT_00612380,param_1 + 0xa1);
  FUN_004512e0(local_144,"FxBlocks",local_248,&DAT_00612388,param_1 + 0xa5);
  FUN_004512e0(local_144,"VideoMotionButtonGlyphs",local_248,&DAT_00612370,param_1 + 0x8c);
  if ((*piVar1 == 0) || (((*(byte *)(param_1 + 6) & 2) != 0 && ((*(byte *)(param_1 + 2) & 2) == 0)))
     ) {
    *piVar1 = *param_1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[7] = param_1[3];
    if ((*piVar1 != 0) && ((*(byte *)(param_1 + 6) & 4) != 0)) {
      iVar10 = FUN_004515c0(*piVar1);
      if (iVar10 == 0) {
        param_1[6] = param_1[6] & 0xfffffffb;
      }
      else {
        *piVar1 = iVar10;
        param_1[6] = param_1[6] & 0xfffffffdU | 0x10;
      }
    }
  }
  if ((*piVar2 == 0) ||
     (((*(byte *)(param_1 + 10) & 2) != 0 && ((*(byte *)(param_1 + 6) & 2) == 0)))) {
    *piVar2 = *piVar1;
    param_1[9] = param_1[5];
    param_1[10] = param_1[6];
    param_1[0xb] = param_1[7];
    if ((*piVar2 != 0) && ((*(byte *)(param_1 + 10) & 4) != 0)) {
      iVar10 = FUN_004515c0(*piVar2);
      if (iVar10 == 0) {
        param_1[10] = param_1[10] & 0xfffffffb;
      }
      else {
        *piVar2 = iVar10;
        param_1[10] = param_1[10] & 0xfffffffdU | 0x10;
      }
    }
  }
  FUN_0044f7b0(param_1);
  piVar1 = param_1 + 0x66;
  piVar2 = param_1 + 0x44;
  param_1[0x65] = 0;
  p_Var9 = (HIMAGELIST)FUN_0044f5d0(piVar2,piVar1,0);
  param_1[0x68] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x65] = iVar10;
    iVar10 = FUN_0044f5d0(piVar2,piVar1,1);
    param_1[0x69] = iVar10;
    iVar10 = FUN_0044f5d0(piVar2,piVar1,2);
    param_1[0x6a] = iVar10;
  }
  piVar1 = param_1 + 0x6c;
  piVar2 = param_1 + 0x48;
  param_1[0x6b] = 0;
  p_Var9 = (HIMAGELIST)FUN_0044f5d0(piVar2,piVar1,0);
  param_1[0x6e] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x6b] = iVar10;
    iVar10 = FUN_0044f5d0(piVar2,piVar1,1);
    param_1[0x6f] = iVar10;
    iVar10 = FUN_0044f5d0(piVar2,piVar1,2);
    param_1[0x70] = iVar10;
  }
  param_1[0x60] = 0;
  p_Var9 = (HIMAGELIST)FUN_0044f5d0(param_1 + 0x40,param_1 + 0x61,0);
  param_1[99] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x60] = iVar10;
    iVar10 = FUN_0044f5d0(param_1 + 0x40,param_1 + 0x61,1);
    param_1[100] = iVar10;
  }
  piVar1 = param_1 + 0x72;
  piVar2 = param_1 + 0x4c;
  param_1[0x71] = 0;
  p_Var9 = (HIMAGELIST)FUN_0044f5d0(piVar2,piVar1,0);
  param_1[0x74] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x71] = iVar10;
    iVar10 = FUN_0044f5d0(piVar2,piVar1,1);
    param_1[0x75] = iVar10;
    iVar10 = FUN_0044f5d0(piVar2,piVar1,2);
    param_1[0x76] = iVar10;
  }
  param_1[0x77] = 0;
  iVar10 = FUN_0044f5d0(param_1 + 0x50,param_1 + 0x78,0);
  param_1[0x7a] = iVar10;
  param_1[0x7b] = 0;
  p_Var9 = (HIMAGELIST)FUN_0044f5d0(param_1 + 0x7f,param_1 + 0x7c,0);
  param_1[0x7e] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x7b] = iVar10;
  }
  param_1[0x87] = 0;
  p_Var9 = (HIMAGELIST)FUN_0044f5d0(param_1 + 0x8c,param_1 + 0x88,0);
  param_1[0x8a] = (int)p_Var9;
  if (param_1[99] != 0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x87] = iVar10;
    iVar10 = FUN_0044f5d0(param_1 + 0x8c,param_1 + 0x88,1);
    param_1[0x8b] = iVar10;
  }
  FUN_00450520(param_1,param_2);
  iVar10 = _TabControl_GenerateTransitions_8(0,param_1 + 0x97);
  param_1[0x99] = iVar10;
  iVar10 = _TabControl_GenerateTransitions_8(1,param_1 + 0x9a);
  param_1[0x9c] = iVar10;
  return;
}


