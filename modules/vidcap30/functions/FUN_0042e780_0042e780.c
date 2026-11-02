/* Module: vidcap30.exe
   Function: FUN_0042e780
   Address: 0042e780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0042e780(void)

{
  uchar *_Dest;
  HGLOBAL pvVar1;
  undefined4 *pMem;
  DWORD DVar2;
  HRESULT HVar3;
  BOOL BVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  LPCITEMIDLIST local_110;
  IMalloc *local_10c;
  int iStack_108;
  uchar auStack_104 [260];
  
  pvVar1 = GlobalAlloc(0x40,0x640);
  pMem = GlobalLock(pvVar1);
  if (pMem == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar7 = pMem;
  for (iVar6 = 400; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *pMem = 1;
  DVar2 = GetCurrentThreadId();
  pMem[3] = DVar2;
  pMem[4] = 10000;
  pMem[5] = 10;
  InitializeCriticalSection((LPCRITICAL_SECTION)(pMem + 6));
  HVar3 = SHGetSpecialFolderLocation((HWND)0x0,5,&local_110);
  if (HVar3 < 0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return (undefined4 *)0x0;
  }
  _Dest = (uchar *)(pMem + 0x2f);
  BVar4 = SHGetPathFromIDListA(local_110,(LPSTR)_Dest);
  SHGetMalloc(&local_10c);
  (*local_10c->lpVtbl->Free)(local_10c,local_110);
  if (BVar4 == 0) {
    _SfLoadString_16(DAT_005ba2a0,0xaa,_Dest,0x104);
  }
  else {
    _SfLoadString_16(DAT_005ba2a0,0xaa,auStack_104,0x104);
    _SfAddSlashToPathName_8(_Dest,0x104);
    iStack_108 = lstrlenA((LPCSTR)_Dest);
    iVar6 = lstrlenA((LPCSTR)auStack_104);
    if ((uint)(iStack_108 + 1 + iVar6) < 0x105) {
      _mbscat(_Dest,auStack_104);
      iVar6 = _SfDoesFileExist_4(_Dest);
      if (iVar6 == 0) goto LAB_0042e8ec;
      _mbscpy(_Dest,auStack_104);
    }
    else {
      _mbscpy(_Dest,auStack_104);
    }
  }
  pMem[0x72] = 1;
LAB_0042e8ec:
  pMem[1] = pMem + 2;
  pMem[0x70] = 0;
  pMem[0x71] = 0;
  FUN_0042e2e0(pMem);
  iVar6 = FUN_0042e5d0(pMem);
  if (-1 < iVar6) {
    uVar8 = 0;
    uVar5 = _SfGetString_8(DAT_005ba2a0,0xc50e);
    iVar6 = FUN_0045efd0(pMem,pMem + 0x74,0,uVar5,uVar8);
    if (-1 < iVar6) {
      return pMem;
    }
    _SfList_Destroy_4(pMem[0x73]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 6));
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  return (undefined4 *)0x0;
}


