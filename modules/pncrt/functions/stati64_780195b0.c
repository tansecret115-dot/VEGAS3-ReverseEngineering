/* Module: pncrt.dll
   Function: stati64
   Address: 780195b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* stati64 */

undefined4 __cdecl stati64(uchar *param_1,int *param_2)

{
  char cVar1;
  uchar *puVar2;
  uint uVar3;
  HANDLE hFindFile;
  char *lpRootPathName;
  UINT UVar4;
  int *piVar5;
  ulong *puVar6;
  BOOL BVar7;
  DWORD DVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  _SYSTEMTIME local_260;
  int local_250;
  _FILETIME local_24c;
  _WIN32_FIND_DATAA local_244;
  char local_104 [260];
  
                    /* 0x195b0  453  _stati64 */
  puVar2 = _mbspbrk(param_1,"?*");
  if (puVar2 != (uchar *)0x0) goto LAB_780196bc;
  if (param_1[1] == ':') {
    if ((*param_1 != '\0') && (param_1[2] == '\0')) goto LAB_780196bc;
    uVar3 = _mbctolower((int)(char)*param_1);
    local_250 = uVar3 - 0x60;
  }
  else {
    local_250 = _getdrive();
  }
  hFindFile = FindFirstFileA((LPCSTR)param_1,&local_244);
  if (hFindFile == (HANDLE)0xffffffff) {
    puVar2 = _mbspbrk(param_1,"./\\");
    if (puVar2 != (uchar *)0x0) {
      lpRootPathName = _fullpath(local_104,(char *)param_1,0x104);
      if (lpRootPathName != (char *)0x0) {
        iVar9 = -1;
        pcVar10 = lpRootPathName;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        if (iVar9 != -5) {
          iVar9 = FUN_78019910(lpRootPathName);
          if (iVar9 == 0) goto LAB_780196bc;
        }
        UVar4 = GetDriveTypeA(lpRootPathName);
        if (1 < UVar4) {
          local_244.dwFileAttributes = 0x10;
          local_244.nFileSizeHigh = 0;
          local_244.nFileSizeLow = 0;
          local_244.cFileName[0] = '\0';
          iVar9 = FUN_7802e770(0x7bc,1,1,0,0,0,-1);
          param_2[9] = iVar9;
          param_2[8] = iVar9;
          param_2[10] = iVar9;
          goto LAB_78019889;
        }
      }
    }
LAB_780196bc:
    piVar5 = _errno();
    *piVar5 = 2;
    puVar6 = __doserrno();
    *puVar6 = 2;
    return 0xffffffff;
  }
  BVar7 = FileTimeToLocalFileTime(&local_244.ftLastWriteTime,&local_24c);
  if (BVar7 != 0) {
    BVar7 = FileTimeToSystemTime(&local_24c,&local_260);
    if (BVar7 != 0) {
      iVar9 = FUN_7802e770((uint)local_260.wYear,(uint)local_260.wMonth,(uint)local_260.wDay,
                           (uint)local_260.wHour,(uint)local_260.wMinute,(uint)local_260.wSecond,-1)
      ;
      param_2[9] = iVar9;
      if ((local_244.ftLastAccessTime.dwLowDateTime != 0) ||
         (local_244.ftLastAccessTime.dwHighDateTime != 0)) {
        BVar7 = FileTimeToLocalFileTime(&local_244.ftLastAccessTime,&local_24c);
        if (BVar7 == 0) goto LAB_780198e4;
        BVar7 = FileTimeToSystemTime(&local_24c,&local_260);
        if (BVar7 == 0) goto LAB_780198e4;
        iVar9 = FUN_7802e770((uint)local_260.wYear,(uint)local_260.wMonth,(uint)local_260.wDay,
                             (uint)local_260.wHour,(uint)local_260.wMinute,(uint)local_260.wSecond,
                             -1);
      }
      param_2[8] = iVar9;
      if ((local_244.ftCreationTime.dwLowDateTime == 0) &&
         (local_244.ftCreationTime.dwHighDateTime == 0)) {
        param_2[10] = param_2[9];
      }
      else {
        BVar7 = FileTimeToLocalFileTime(&local_244.ftCreationTime,&local_24c);
        if (BVar7 == 0) goto LAB_780198e4;
        BVar7 = FileTimeToSystemTime(&local_24c,&local_260);
        if (BVar7 == 0) goto LAB_780198e4;
        iVar9 = FUN_7802e770((uint)local_260.wYear,(uint)local_260.wMonth,(uint)local_260.wDay,
                             (uint)local_260.wHour,(uint)local_260.wMinute,(uint)local_260.wSecond,
                             -1);
        param_2[10] = iVar9;
      }
      FindClose(hFindFile);
LAB_78019889:
      uVar3 = FUN_780191a0((byte)local_244.dwFileAttributes,param_1);
      *(short *)((int)param_2 + 6) = (short)uVar3;
      *(undefined2 *)(param_2 + 2) = 1;
      lVar11 = __allmul(local_244.nFileSizeHigh,0,0,1);
      *(undefined2 *)(param_2 + 1) = 0;
      *(ulonglong *)(param_2 + 6) = lVar11 + (ulonglong)local_244.nFileSizeLow;
      *(undefined2 *)(param_2 + 3) = 0;
      *(undefined2 *)((int)param_2 + 10) = 0;
      *param_2 = local_250 + -1;
      param_2[4] = local_250 + -1;
      return 0;
    }
  }
LAB_780198e4:
  DVar8 = GetLastError();
  FUN_7800a870(DVar8);
  FindClose(hFindFile);
  return 0xffffffff;
}


