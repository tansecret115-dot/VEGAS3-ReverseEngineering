/* Module: pncrt.dll
   Function: wstati64
   Address: 7801a330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* wstati64 */

undefined4 __cdecl wstati64(wchar_t *param_1,int *param_2)

{
  wint_t wVar1;
  wchar_t *pwVar2;
  HANDLE hFindFile;
  size_t sVar3;
  int iVar4;
  UINT UVar5;
  int *piVar6;
  ulong *puVar7;
  BOOL BVar8;
  uint uVar9;
  DWORD DVar10;
  longlong lVar11;
  _SYSTEMTIME local_474;
  int local_464;
  _FILETIME local_460;
  _WIN32_FIND_DATAW local_458;
  wchar_t local_208 [260];
  
                    /* 0x1a330  560  _wstati64 */
  pwVar2 = wcspbrk(param_1,L"?*");
  if (pwVar2 != (wchar_t *)0x0) goto LAB_7801a43e;
  if (param_1[1] == L':') {
    if ((*param_1 != L'\0') && (param_1[2] == L'\0')) goto LAB_7801a43e;
    wVar1 = towlower(*param_1);
    local_464 = wVar1 - 0x60;
  }
  else {
    local_464 = _getdrive();
  }
  hFindFile = FindFirstFileW(param_1,&local_458);
  if (hFindFile == (HANDLE)0xffffffff) {
    pwVar2 = wcspbrk(param_1,L"./\\");
    if (pwVar2 != (wchar_t *)0x0) {
      pwVar2 = _wfullpath(local_208,param_1,0x104);
      if (pwVar2 != (wchar_t *)0x0) {
        sVar3 = wcslen(pwVar2);
        if (sVar3 != 3) {
          iVar4 = FUN_7801a280(pwVar2);
          if (iVar4 == 0) goto LAB_7801a43e;
        }
        UVar5 = GetDriveTypeW(pwVar2);
        if (1 < UVar5) {
          local_458.dwFileAttributes = 0x10;
          local_458.nFileSizeHigh = 0;
          local_458.nFileSizeLow = 0;
          local_458.cFileName[0] = L'\0';
          iVar4 = FUN_7802e770(0x7bc,1,1,0,0,0,-1);
          param_2[9] = iVar4;
          param_2[8] = iVar4;
          param_2[10] = iVar4;
          goto LAB_7801a60b;
        }
      }
    }
LAB_7801a43e:
    piVar6 = _errno();
    *piVar6 = 2;
    puVar7 = __doserrno();
    *puVar7 = 2;
    return 0xffffffff;
  }
  BVar8 = FileTimeToLocalFileTime(&local_458.ftLastWriteTime,&local_460);
  if (BVar8 != 0) {
    BVar8 = FileTimeToSystemTime(&local_460,&local_474);
    if (BVar8 != 0) {
      iVar4 = FUN_7802e770((uint)local_474.wYear,(uint)local_474.wMonth,(uint)local_474.wDay,
                           (uint)local_474.wHour,(uint)local_474.wMinute,(uint)local_474.wSecond,-1)
      ;
      param_2[9] = iVar4;
      if ((local_458.ftLastAccessTime.dwLowDateTime != 0) ||
         (local_458.ftLastAccessTime.dwHighDateTime != 0)) {
        BVar8 = FileTimeToLocalFileTime(&local_458.ftLastAccessTime,&local_460);
        if (BVar8 == 0) goto LAB_7801a666;
        BVar8 = FileTimeToSystemTime(&local_460,&local_474);
        if (BVar8 == 0) goto LAB_7801a666;
        iVar4 = FUN_7802e770((uint)local_474.wYear,(uint)local_474.wMonth,(uint)local_474.wDay,
                             (uint)local_474.wHour,(uint)local_474.wMinute,(uint)local_474.wSecond,
                             -1);
      }
      param_2[8] = iVar4;
      if ((local_458.ftCreationTime.dwLowDateTime == 0) &&
         (local_458.ftCreationTime.dwHighDateTime == 0)) {
        param_2[10] = param_2[9];
      }
      else {
        BVar8 = FileTimeToLocalFileTime(&local_458.ftCreationTime,&local_460);
        if (BVar8 == 0) goto LAB_7801a666;
        BVar8 = FileTimeToSystemTime(&local_460,&local_474);
        if (BVar8 == 0) goto LAB_7801a666;
        iVar4 = FUN_7802e770((uint)local_474.wYear,(uint)local_474.wMonth,(uint)local_474.wDay,
                             (uint)local_474.wHour,(uint)local_474.wMinute,(uint)local_474.wSecond,
                             -1);
        param_2[10] = iVar4;
      }
      FindClose(hFindFile);
LAB_7801a60b:
      uVar9 = FUN_78019e60((byte)local_458.dwFileAttributes,param_1);
      *(short *)((int)param_2 + 6) = (short)uVar9;
      *(undefined2 *)(param_2 + 2) = 1;
      lVar11 = __allmul(local_458.nFileSizeHigh,0,0,1);
      *(undefined2 *)(param_2 + 1) = 0;
      *(ulonglong *)(param_2 + 6) = lVar11 + (ulonglong)local_458.nFileSizeLow;
      *(undefined2 *)(param_2 + 3) = 0;
      *(undefined2 *)((int)param_2 + 10) = 0;
      *param_2 = local_464 + -1;
      param_2[4] = local_464 + -1;
      return 0;
    }
  }
LAB_7801a666:
  DVar10 = GetLastError();
  FUN_7800a870(DVar10);
  FindClose(hFindFile);
  return 0xffffffff;
}


