/* Module: vidcap30.exe
   Function: FUN_0049fb60
   Address: 0049fb60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0049fb60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  LPCSTR pCVar1;
  _IMAGELIST *himl;
  int iVar2;
  HICON pHVar3;
  uint uVar4;
  HIMAGELIST p_Var5;
  HBITMAP hbmImage;
  HKEY unaff_EBP;
  undefined4 uVar6;
  LPITEMIDLIST local_278 [2];
  int iStack_270;
  SHFILEINFOA local_26c;
  CHAR aCStack_10c [268];
  
  *param_1 = &PTR_FUN_005998c8;
  param_1[0xe8] = param_2;
  param_1[0xe9] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)((int)param_1 + 0x182) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x108d);
  lstrcpynA((LPSTR)(param_1 + 9),pCVar1,0x46);
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  lstrlenA((LPCSTR)(param_1 + 9));
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x108e);
  lstrcpynA((LPSTR)((int)param_1 + 0x6a),pCVar1,0x46);
  *(undefined1 *)((int)param_1 + 0xaf) = 0;
  lstrlenA((LPCSTR)((int)param_1 + 0x6a));
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x108f);
  lstrcpynA((LPSTR)(param_1 + 0x2c),pCVar1,0x46);
  *(undefined1 *)((int)param_1 + 0xf5) = 0;
  lstrlenA((LPCSTR)(param_1 + 0x2c));
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1090);
  lstrcpynA((LPSTR)((int)param_1 + 0xf6),pCVar1,0x46);
  *(undefined1 *)((int)param_1 + 0x13b) = 0;
  lstrlenA((LPCSTR)((int)param_1 + 0xf6));
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x1091);
  lstrcpynA((LPSTR)(param_1 + 0x4f),pCVar1,0x46);
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  lstrlenA((LPCSTR)(param_1 + 0x4f));
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x109b);
  lstrcpynA((LPSTR)(param_1 + 0xb3),pCVar1,0x46);
  *(undefined1 *)((int)param_1 + 0x311) = 0;
  lstrlenA((LPCSTR)(param_1 + 0xb3));
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x109c);
  lstrcpynA((LPSTR)((int)param_1 + 0x312),pCVar1,0x46);
  *(undefined1 *)((int)param_1 + 0x357) = 0;
  lstrlenA((LPCSTR)((int)param_1 + 0x312));
  pCVar1 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x109d);
  lstrcpynA((LPSTR)(param_1 + 0xd6),pCVar1,0x46);
  *(undefined1 *)((int)param_1 + 0x39d) = 0;
  lstrlenA((LPCSTR)(param_1 + 0xd6));
  if (param_4 != (undefined4 *)0x0) {
    if ((LPCSTR)param_4[1] != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_1 + 9),(LPCSTR)param_4[1],0x46);
      *(undefined1 *)((int)param_1 + 0x69) = 0;
    }
    if ((LPCSTR)param_4[2] != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)((int)param_1 + 0x6a),(LPCSTR)param_4[2],0x46);
      *(undefined1 *)((int)param_1 + 0xaf) = 0;
    }
    if ((LPCSTR)param_4[3] != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_1 + 0x2c),(LPCSTR)param_4[3],0x46);
      *(undefined1 *)((int)param_1 + 0xf5) = 0;
    }
    if ((LPCSTR)param_4[4] != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)((int)param_1 + 0xf6),(LPCSTR)param_4[4],0x46);
      *(undefined1 *)((int)param_1 + 0x13b) = 0;
    }
    if ((LPCSTR)param_4[5] != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_1 + 0x4f),(LPCSTR)param_4[5],0x46);
      *(undefined1 *)((int)param_1 + 0x181) = 0;
    }
    if ((LPCSTR)param_4[6] != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_1 + 0xb3),(LPCSTR)param_4[6],0x46);
      *(undefined1 *)((int)param_1 + 0x311) = 0;
    }
    if ((LPCSTR)param_4[7] != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)((int)param_1 + 0x312),(LPCSTR)param_4[7],0x46);
      *(undefined1 *)((int)param_1 + 0x357) = 0;
    }
    if ((LPCSTR)param_4[8] != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_1 + 0xd6),(LPCSTR)param_4[8],0x46);
      *(undefined1 *)((int)param_1 + 0x39d) = 0;
    }
  }
  SHGetSpecialFolderLocation((HWND)0x0,0x10,local_278);
  SHGetPathFromIDListA(local_278[0],&DAT_005c1ba8);
  SHGetMalloc((IMalloc **)&local_26c);
  (*((IMallocVtbl *)(local_26c.hIcon)->unused)->Free)((IMalloc *)local_26c.hIcon,local_278[0]);
  SHGetSpecialFolderLocation((HWND)0x0,5,local_278);
  SHGetPathFromIDListA(local_278[0],&DAT_005c1cac);
  (*((IMallocVtbl *)(local_26c.hIcon)->unused)->Free)((IMalloc *)local_26c.hIcon,local_278[0]);
  _DAT_005c198c = wsprintfA(&DAT_005c1db0,"%s\\%s",param_1 + 9,(int)param_1 + 0x6a);
  _DAT_005c198c = _DAT_005c198c + 1;
  local_278[0] = (LPITEMIDLIST)0x1;
  if (DAT_005c16b0 == 0) {
    RegOpenKeyA((HKEY)0x80000002,
                "SYSTEM\\CurrentControlSet\\Services\\LanmanWorkstation\\networkprovider",
                (PHKEY)&stack0xfffffd78);
    RegQueryValueExA(unaff_EBP,"name",(LPDWORD)0x0,(LPDWORD)local_278,&DAT_005c1aa4,
                     (LPDWORD)&stack0xfffffd7c);
    RegCloseKey(unaff_EBP);
    RegOpenKeyA((HKEY)0x80000002,"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                (PHKEY)&stack0xfffffd78);
    RegQueryValueExA(unaff_EBP,"DefaultDomainName",(LPDWORD)0x0,(LPDWORD)local_278,&DAT_005c19a0,
                     (LPDWORD)&stack0xfffffd7c);
  }
  else {
    _mbscpy(&DAT_005c1aa4,(uchar *)"Microsoft Network");
    RegOpenKeyA((HKEY)0x80000002,"System\\CurrentControlSet\\Services\\VxD\\VNETSUP",
                (PHKEY)&stack0xfffffd78);
    RegQueryValueExA(unaff_EBP,"Workgroup",(LPDWORD)0x0,(LPDWORD)local_278,&DAT_005c19a0,
                     (LPDWORD)&stack0xfffffd7c);
  }
  RegCloseKey(unaff_EBP);
  GetWindowsDirectoryA(aCStack_10c,0x104);
  DAT_005c1988 = (_IMAGELIST *)SHGetFileInfoA(aCStack_10c,0,&local_26c,0x160,0x4001);
  param_1[6] = local_26c.iIcon;
  SHGetFileInfoA(aCStack_10c,0,&local_26c,0x160,0x4003);
  param_1[7] = local_26c.iIcon;
  if (DAT_005c16b0 == 0) {
    SHGetFileInfoA("C:\\NTDETECT.COM",0,&local_26c,0x160,0x4001);
  }
  himl = SfImageList_Duplicate(DAT_005c1988);
  param_1[4] = himl;
  iVar2 = ImageList_GetImageCount(himl);
  param_1[1] = iVar2;
  param_1[8] = iVar2 + 0xd;
  param_1[5] = iVar2 + 0xd;
  if ((param_4 == (undefined4 *)0x0) || (p_Var5 = (HIMAGELIST)*param_4, p_Var5 == (HIMAGELIST)0x0))
  {
    iVar2 = _SfIsHighColor_0();
    if (iVar2 == 0) {
      uVar4 = 4;
      uVar6 = 0x18a;
    }
    else {
      uVar4 = 8;
      uVar6 = 0x17c;
    }
    p_Var5 = ImageList_Create(0x10,0x10,uVar4 | 1,0xd,0);
    hbmImage = (HBITMAP)_SfLoadBitmap_8(DAT_005c16d8,uVar6);
    ImageList_AddMasked(p_Var5,hbmImage,0xff00ff);
    DeleteObject(hbmImage);
    iVar2 = 0;
    do {
      pHVar3 = ImageList_GetIcon(p_Var5,iVar2,0);
      ImageList_ReplaceIcon((HIMAGELIST)param_1[4],-1,pHVar3);
      DestroyIcon(pHVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xd);
    ImageList_Destroy(p_Var5);
  }
  else {
    iStack_270 = ImageList_GetImageCount(p_Var5);
    iVar2 = 0;
    if (0 < iStack_270) {
      do {
        pHVar3 = ImageList_GetIcon(p_Var5,iVar2,0);
        ImageList_ReplaceIcon((HIMAGELIST)param_1[4],-1,pHVar3);
        DestroyIcon(pHVar3);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iStack_270);
    }
  }
  ImageList_SetBkColor((HIMAGELIST)param_1[4],0xffffffff);
  return param_1;
}


