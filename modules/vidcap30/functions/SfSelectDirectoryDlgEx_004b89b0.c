/* Module: vidcap30.exe
   Function: SfSelectDirectoryDlgEx
   Address: 004b89b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSelectDirectoryDlgEx(struct HWND__ *,char const *,char *,unsigned int,int,int)
    */

long SfSelectDirectoryDlgEx
               (HWND__ *param_1,char *param_2,char *param_3,uint param_4,int param_5,int param_6)

{
  bool bVar1;
  char *pszPath;
  uint uVar2;
  HRESULT HVar3;
  LPITEMIDLIST pidl;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  _browseinfoA *p_Var8;
  __int64 _Var9;
  _browseinfoA local_20;
  
  uVar2 = param_4;
                    /* 0xb89b0  125  ?SfSelectDirectoryDlgEx@@YGJPAUHWND__@@PBDPADIHH@Z */
  pszPath = param_3;
  lVar7 = -0x7ff8ffa9;
  bVar1 = false;
  _SfRemoveSlashFromPathNameEnd_8(param_3,param_4);
  if ((0x103 < uVar2) && (lVar7 = CoInitialize((LPVOID)0x0), -1 < lVar7)) {
    param_3 = (char *)0x0;
    lVar7 = SHGetMalloc((IMalloc **)&param_3);
    if (-1 < lVar7) {
      param_4 = 0;
      p_Var8 = &local_20;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        p_Var8->hwndOwner = (HWND)0x0;
        p_Var8 = (_browseinfoA *)&p_Var8->pidlRoot;
      }
      if (param_6 == 0) {
        iVar5 = 0x11;
      }
      else {
        iVar5 = 0;
      }
      lVar7 = SHGetSpecialFolderLocation(param_1,iVar5,(LPITEMIDLIST *)&param_4);
      if (-1 < lVar7) {
        local_20.lParam = -(uint)(param_5 != 0) & (uint)pszPath;
        local_20.hwndOwner = param_1;
        local_20.pidlRoot = (LPCITEMIDLIST)param_4;
        local_20.lpszTitle = param_2;
        local_20.lpfn = (BFFCALLBACK)&LAB_004b88a0;
        local_20.ulFlags = 1;
        _Var9 = SfGetDllVersion("Shell32.dll");
        uVar6 = (uint)((ulonglong)_Var9 >> 0x20);
        if (uVar6 < 0x50000) {
          if (0x40046 < uVar6) {
            local_20.ulFlags = local_20.ulFlags | 0x30;
          }
        }
        else {
          HVar3 = OleInitialize((LPVOID)0x0);
          if (-1 < HVar3) {
            bVar1 = true;
            local_20.ulFlags = local_20.ulFlags | 0x40;
          }
        }
        lVar7 = -0x7ffb1ff4;
        pidl = SHBrowseForFolderA(&local_20);
        if (pidl != (LPITEMIDLIST)0x0) {
          BVar4 = SHGetPathFromIDListA(pidl,pszPath);
          if (BVar4 == 0) {
            lVar7 = -0x7fffbffb;
            *pszPath = '\0';
          }
          else {
            _SfAddSlashToPathName_8(pszPath,uVar2);
            lVar7 = 0;
          }
          (**(code **)(*(int *)param_3 + 0x14))(param_3,pidl);
        }
        (**(code **)(*(int *)param_3 + 0x14))(param_3,param_4);
        param_4 = 0;
      }
      (**(code **)(*(int *)param_3 + 8))(param_3);
      param_3 = (char *)0x0;
      if (bVar1) {
        OleUninitialize();
      }
    }
    CoUninitialize();
  }
  return lVar7;
}


