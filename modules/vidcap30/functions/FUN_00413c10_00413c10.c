/* Module: vidcap30.exe
   Function: FUN_00413c10
   Address: 00413c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413c10(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  UINT UVar6;
  HFONT pHVar7;
  HDC hdc;
  HGDIOBJ h;
  int iVar8;
  HIMAGELIST p_Var9;
  int iVar10;
  uchar local_230 [260];
  CHAR local_12c [260];
  CHAR local_28 [40];
  
  _DAT_005bc1fc = 0;
  if (DAT_005ba294 == 0) {
    param_2 = 0;
  }
  FUN_00414850(param_1);
  if ((DAT_005ba9b4 & 0x80000000) == 0) {
    _SfGetModulePath_12(DAT_005ba298,local_230,0x104);
    _SfAddSlashToPathName_8(local_230,0x104);
    _mbscat(local_230,(uchar *)"skins.ini");
    GetPrivateProfileStringA("skins","UseSection","skins",local_12c,0x104,(LPCSTR)local_230);
    UVar6 = GetPrivateProfileIntA(local_12c,"BaseSkin",-1,(LPCSTR)local_230);
    if (((param_2 != 0) && (0 < (int)UVar6)) && (UVar6 < 4)) {
      param_2 = UVar6;
    }
  }
  else {
    local_230[0] = '\0';
    local_12c[0] = '\0';
  }
  if (3 < param_2) {
    param_2 = 0;
  }
  iVar10 = param_2 * 0xc0;
  if (local_230[0] == '\0') {
    UVar6 = 0;
  }
  else {
    UVar6 = GetPrivateProfileIntA(local_12c,"FrameHotButtons",0,(LPCSTR)local_230);
  }
  param_1[0x6b] = UVar6;
  if (local_230[0] == '\0') {
    UVar6 = (UINT)(byte)(&DAT_0058745f)[iVar10];
  }
  else {
    UVar6 = GetPrivateProfileIntA
                      (local_12c,"HorzFaderSilkEdge",(uint)(byte)(&DAT_0058745f)[iVar10],
                       (LPCSTR)local_230);
  }
  param_1[0x67] = UVar6;
  if (local_230[0] == '\0') {
    UVar6 = (UINT)(byte)(&DAT_00587483)[iVar10];
  }
  else {
    UVar6 = GetPrivateProfileIntA
                      (local_12c,"HorzAssignSilkEdge",(uint)(byte)(&DAT_00587483)[iVar10],
                       (LPCSTR)local_230);
  }
  param_1[0x68] = UVar6;
  if (local_230[0] == '\0') {
    UVar6 = (UINT)(byte)(&DAT_0058748f)[iVar10];
  }
  else {
    UVar6 = GetPrivateProfileIntA
                      (local_12c,"HorzScrubSilkEdge",(uint)(byte)(&DAT_0058748f)[iVar10],
                       (LPCSTR)local_230);
  }
  param_1[0x69] = UVar6;
  bVar4 = (&DAT_00587477)[iVar10];
  bVar5 = (&DAT_0058746b)[iVar10];
  if (local_230[0] == '\0') {
    if (bVar5 <= bVar4) {
      bVar5 = bVar4;
    }
    UVar6 = (UINT)bVar5;
  }
  else {
    if (bVar5 <= bVar4) {
      bVar5 = bVar4;
    }
    UVar6 = GetPrivateProfileIntA(local_12c,"VertFaderSilkEdge",(uint)bVar5,(LPCSTR)local_230);
  }
  param_1[0x6a] = UVar6;
  if (local_230[0] == '\0') {
    UVar6 = (UINT)DAT_00587743;
  }
  else {
    UVar6 = GetPrivateProfileIntA
                      (local_12c,"ToolbarButtonGlyphSize",(uint)DAT_00587743,(LPCSTR)local_230);
  }
  param_1[0x51] = UVar6;
  if (local_230[0] == '\0') {
    UVar6 = (UINT)DAT_00587753;
  }
  else {
    UVar6 = GetPrivateProfileIntA
                      (local_12c,"ClipExplorerIconSize",(uint)DAT_00587753,(LPCSTR)local_230);
  }
  param_1[0x5c] = UVar6;
  if (local_230[0] == '\0') {
    UVar6 = (UINT)DAT_00587763;
  }
  else {
    UVar6 = GetPrivateProfileIntA
                      (local_12c,"ClipExplorerLargeIconSize",(uint)DAT_00587763,(LPCSTR)local_230);
  }
  param_1[0x60] = UVar6;
  if (local_230[0] == '\0') {
    UVar6 = (UINT)DAT_00587773;
  }
  else {
    UVar6 = GetPrivateProfileIntA
                      (local_12c,"MediaExplorerIconSize",(uint)DAT_00587773,(LPCSTR)local_230);
  }
  param_1[100] = UVar6;
  UVar6 = DAT_005bb7e4;
  if (local_230[0] != '\0') {
    UVar6 = GetPrivateProfileIntA(local_12c,"ThumbTopOffset",DAT_005bb7e4,(LPCSTR)local_230);
  }
  param_1[0x59] = UVar6;
  pHVar7 = CreateFontIndirectA((LOGFONTA *)&DAT_00587778);
  param_1[0x6c] = (int)pHVar7;
  if (pHVar7 != (HFONT)0x0) {
    hdc = GetDC((HWND)0x0);
    h = SelectObject(hdc,(HGDIOBJ)param_1[0x6c]);
    GetTextFaceA(hdc,0x28,local_28);
    SelectObject(hdc,h);
    ReleaseDC((HWND)0x0,hdc);
    iVar8 = lstrcmpiA(local_28,"SfHandle");
    if (iVar8 != 0) {
      DeleteObject((HGDIOBJ)param_1[0x6c]);
      param_1[0x6c] = 0;
    }
  }
  FUN_00414420(local_12c,"Background",local_230,&DAT_00587430 + iVar10,param_1);
  piVar1 = param_1 + 4;
  FUN_00414420(local_12c,"TrackHeader",local_230,&DAT_0058743c + iVar10,piVar1);
  piVar2 = param_1 + 8;
  FUN_00414420(local_12c,"SelectedTrackHeader",local_230,&DAT_00587448 + iVar10,piVar2);
  FUN_00414420(local_12c,"HorzFaderSilk",local_230,&DAT_00587454 + iVar10,param_1 + 0xc);
  FUN_00414420(local_12c,"HorzAssignSilk",local_230,&DAT_00587478 + iVar10,param_1 + 0x18);
  FUN_00414420(local_12c,"VertFaderSilk",local_230,&DAT_00587460 + iVar10,param_1 + 0x10);
  FUN_00414420(local_12c,"VertStereoFaderSilk",local_230,&DAT_0058746c + iVar10,param_1 + 0x14);
  FUN_00414420(local_12c,"HorzScrubSilk",local_230,&DAT_00587484 + iVar10,param_1 + 0x1c);
  FUN_00414420(local_12c,"HorzFaderThumb",local_230,&DAT_00587490 + iVar10,param_1 + 0x20);
  FUN_00414420(local_12c,"HorzAssignThumb",local_230,&DAT_005874b4 + iVar10,param_1 + 0x2c);
  FUN_00414420(local_12c,"VertFaderThumb",local_230,&DAT_0058749c + iVar10,param_1 + 0x24);
  FUN_00414420(local_12c,"VertStereoFaderThumb",local_230,&DAT_005874a8 + iVar10,param_1 + 0x28);
  FUN_00414420(local_12c,"ScrubThumb",local_230,&DAT_005874c0 + iVar10,param_1 + 0x30);
  FUN_00414420(local_12c,"ScrubSetThumb",local_230,&DAT_005874cc + iVar10,param_1 + 0x34);
  FUN_00414420(local_12c,"ScrubThumbDisabled",local_230,&DAT_005874d8 + iVar10,param_1 + 0x38);
  FUN_00414420(local_12c,"ScrubSetThumbDisabled",local_230,&DAT_005874e4 + iVar10,param_1 + 0x3c);
  piVar3 = param_1 + 0x40;
  FUN_00414420(local_12c,"ToolbarButtonGlyphs",local_230,&DAT_00587738,piVar3);
  FUN_00414420(local_12c,"ClipExplorerIcons",local_230,&DAT_00587748,param_1 + 0x44);
  FUN_00414420(local_12c,"ClipExplorerLargeIcons",local_230,&DAT_00587758,param_1 + 0x48);
  FUN_00414420(local_12c,"MediaExplorerIcons",local_230,&DAT_00587768,param_1 + 0x4c);
  if ((*piVar1 == 0) || (((*(byte *)(param_1 + 6) & 2) != 0 && ((*(byte *)(param_1 + 2) & 2) == 0)))
     ) {
    *piVar1 = *param_1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[7] = param_1[3];
    if ((*piVar1 != 0) && ((*(byte *)(param_1 + 6) & 4) != 0)) {
      iVar10 = FUN_004147d0(*piVar1);
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
      iVar10 = FUN_004147d0(*piVar2);
      if (iVar10 == 0) {
        param_1[10] = param_1[10] & 0xfffffffb;
      }
      else {
        *piVar2 = iVar10;
        param_1[10] = param_1[10] & 0xfffffffdU | 0x10;
      }
    }
  }
  FUN_00412d40(param_1);
  piVar1 = param_1 + 0x51;
  param_1[0x50] = 0;
  p_Var9 = (HIMAGELIST)FUN_00412b60(piVar3,piVar1,0);
  param_1[0x53] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x50] = iVar10;
    iVar10 = FUN_00412b60(piVar3,piVar1,1);
    param_1[0x54] = iVar10;
    iVar10 = FUN_00412b60(piVar3,piVar1,2);
    param_1[0x55] = iVar10;
  }
  iVar8 = param_1[0x59] + DAT_005bb7dc;
  param_1[0x57] = iVar8;
  iVar10 = DAT_005bb7e0;
  param_1[0x58] = DAT_005bb7e0;
  p_Var9 = ImageList_Create(iVar8,iVar10,4,1,1);
  param_1[0x5a] = (int)p_Var9;
  param_1[0x5b] = 0;
  p_Var9 = (HIMAGELIST)FUN_00412b60(param_1 + 0x44,param_1 + 0x5c,0);
  param_1[0x5e] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x5b] = iVar10;
  }
  param_1[0x5f] = 0;
  p_Var9 = (HIMAGELIST)FUN_00412b60(param_1 + 0x48,param_1 + 0x60,0);
  param_1[0x62] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[0x5f] = iVar10;
  }
  param_1[99] = 0;
  p_Var9 = (HIMAGELIST)FUN_00412b60(param_1 + 0x4c,param_1 + 100,0);
  param_1[0x66] = (int)p_Var9;
  if (p_Var9 != (HIMAGELIST)0x0) {
    iVar10 = ImageList_GetImageCount(p_Var9);
    param_1[99] = iVar10;
  }
  iVar10 = _TabControl_GenerateTransitions_8(0,param_1 + 0x6d);
  param_1[0x6f] = iVar10;
  iVar10 = _TabControl_GenerateTransitions_8(1,param_1 + 0x70);
  param_1[0x72] = iVar10;
  return;
}


