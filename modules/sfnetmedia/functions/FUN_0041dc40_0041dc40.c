/* Module: sfnetmedia.dll
   Function: FUN_0041dc40
   Address: 0041dc40
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_0041dc40(HWND param_1,LPCSTR param_2,IMalloc *param_3,LPCITEMIDLIST param_4,int param_5,
                    int param_6)

{
  bool bVar1;
  IMalloc *pszPath;
  LPCITEMIDLIST pIVar2;
  LPITEMIDLIST pidl;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  HRESULT HVar6;
  _browseinfoA *p_Var7;
  longlong lVar8;
  _browseinfoA local_20;
  
  pIVar2 = param_4;
  pszPath = param_3;
  HVar6 = -0x7ff8ffa9;
  bVar1 = false;
  FUN_004132e0((BYTE *)param_3,(int)param_4);
  if (((LPCITEMIDLIST)0x103 < pIVar2) && (HVar6 = CoInitialize((LPVOID)0x0), -1 < HVar6)) {
    param_3 = (IMalloc *)0x0;
    HVar6 = SHGetMalloc(&param_3);
    if (-1 < HVar6) {
      param_4 = (LPCITEMIDLIST)0x0;
      p_Var7 = &local_20;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        p_Var7->hwndOwner = (HWND)0x0;
        p_Var7 = (_browseinfoA *)&p_Var7->pidlRoot;
      }
      if (param_6 == 0) {
        iVar4 = 0x11;
      }
      else {
        iVar4 = 0;
      }
      HVar6 = SHGetSpecialFolderLocation(param_1,iVar4,&param_4);
      if (-1 < HVar6) {
        local_20.lParam = -(uint)(param_5 != 0) & (uint)pszPath;
        local_20.hwndOwner = param_1;
        local_20.pidlRoot = param_4;
        local_20.lpszTitle = param_2;
        local_20.lpfn = (BFFCALLBACK)&LAB_0041db30;
        local_20.ulFlags = 1;
        lVar8 = FUN_0041dde0("Shell32.dll");
        uVar5 = (uint)((ulonglong)lVar8 >> 0x20);
        if (uVar5 < 0x50000) {
          if (0x40046 < uVar5) {
            local_20.ulFlags = local_20.ulFlags | 0x30;
          }
        }
        else {
          HVar6 = OleInitialize((LPVOID)0x0);
          if (-1 < HVar6) {
            bVar1 = true;
            local_20.ulFlags = local_20.ulFlags | 0x40;
          }
        }
        HVar6 = -0x7ffb1ff4;
        pidl = SHBrowseForFolderA(&local_20);
        if (pidl != (LPITEMIDLIST)0x0) {
          BVar3 = SHGetPathFromIDListA(pidl,(LPSTR)pszPath);
          if (BVar3 == 0) {
            HVar6 = -0x7fffbffb;
            *(undefined1 *)&pszPath->lpVtbl = 0;
          }
          else {
            FUN_00413260((BYTE *)pszPath,(uint)pIVar2);
            HVar6 = 0;
          }
          (*param_3->lpVtbl->Free)(param_3,pidl);
        }
        (*param_3->lpVtbl->Free)(param_3,param_4);
        param_4 = (LPCITEMIDLIST)0x0;
      }
      (*param_3->lpVtbl->Release)(param_3);
      param_3 = (IMalloc *)0x0;
      if (bVar1) {
        OleUninitialize();
      }
    }
    CoUninitialize();
  }
  return HVar6;
}


