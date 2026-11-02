/* Module: vidcap30.exe
   Function: FUN_0045cde0
   Address: 0045cde0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0045cde0(int param_1)

{
  undefined1 *puVar1;
  LPSTR pszPath;
  int iVar2;
  HGLOBAL pvVar3;
  LPCITEMIDLIST pMem;
  int iVar4;
  BOOL BVar5;
  int iVar6;
  LPCITEMIDLIST local_10;
  IMalloc *local_c;
  LPCITEMIDLIST pIStack_8;
  LPCRITICAL_SECTION local_4;
  
  iVar6 = 0;
  local_4 = (LPCRITICAL_SECTION)(param_1 + 4);
  EnterCriticalSection(local_4);
  iVar2 = _SfDoesMetricExist_12(DAT_005bba88,0,3);
  if (iVar2 == 0) {
    do {
      pvVar3 = GlobalAlloc(0x40,0x108);
      pMem = GlobalLock(pvVar3);
      if (pMem == (LPCITEMIDLIST)0x0) goto LAB_0045cf5c;
      puVar1 = (undefined1 *)((int)&pMem[1].mkid.cb + 1);
      _SfGetMetricStringEx_24(DAT_005bba88,iVar6,puVar1,0x104,0,1);
      _SfGetMetricBinary_16(DAT_005bba88,iVar6,pMem,4);
      _SfAddSlashToPathName_8(puVar1,0x104);
      local_10 = pMem;
      iVar2 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x1c),0xffffffff,&local_10,1);
      if (iVar2 < 0) goto LAB_0045cf39;
      iVar6 = iVar6 + 1;
      iVar4 = _SfDoesMetricExist_12(DAT_005bba88,iVar6,3);
    } while (iVar4 == 0);
    if ((iVar2 < 0) || (iVar6 != 0)) goto LAB_0045cf61;
  }
  iVar2 = SHGetSpecialFolderLocation((HWND)0x0,5,&local_10);
  if (-1 < iVar2) {
    pvVar3 = GlobalAlloc(0x40,0x108);
    pMem = GlobalLock(pvVar3);
    if (pMem == (LPCITEMIDLIST)0x0) {
LAB_0045cf5c:
      iVar2 = -0x7ff8fff2;
    }
    else {
      pszPath = (LPSTR)((int)&pMem[1].mkid.cb + 1);
      BVar5 = SHGetPathFromIDListA(local_10,pszPath);
      SHGetMalloc(&local_c);
      (*local_c->lpVtbl->Free)(local_c,local_10);
      if (BVar5 == 0) {
        iVar2 = -0x7fffbffb;
      }
      else {
        _SfAddSlashToPathName_8(pszPath,0x104);
        *(undefined4 *)pMem = 1;
        pIStack_8 = pMem;
        iVar2 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x1c),0xffffffff,&pIStack_8,1);
        if (-1 < iVar2) goto LAB_0045cf61;
      }
LAB_0045cf39:
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
    }
  }
LAB_0045cf61:
  LeaveCriticalSection(local_4);
  return iVar2;
}


