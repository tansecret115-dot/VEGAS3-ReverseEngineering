/* Module: sftrans1.dll
   Function: FUN_0048bbc0
   Address: 0048bbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0048bbc0(int param_1)

{
  BOOL BVar1;
  HANDLE hMem;
  uchar *_Source;
  int iVar2;
  size_t sVar3;
  HGLOBAL pvVar4;
  uchar *_Dest;
  LPWSTR _Dest_00;
  wchar_t *pwVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  LPVOID pvVar8;
  int iVar9;
  SIZE_T dwBytes;
  int local_10;
  undefined4 local_c;
  
  BVar1 = OpenClipboard(*(HWND *)(param_1 + 4));
  if (BVar1 == 0) {
    return 0;
  }
  local_c = 0;
  hMem = GetClipboardData(0xd);
  if (hMem == (HANDLE)0x0) {
    hMem = GetClipboardData(1);
    if (hMem == (HANDLE)0x0) {
      CloseClipboard();
      return 0;
    }
    _Source = GlobalLock(hMem);
    iVar2 = lstrlenA((LPCSTR)_Source);
    sVar3 = wcslen(L"\r\n");
    dwBytes = iVar2 + sVar3 + 1;
    pvVar4 = GlobalAlloc(0x40,dwBytes);
    _Dest = GlobalLock(pvVar4);
    if (_Dest == (uchar *)0x0) {
      GlobalUnlock(hMem);
      CloseClipboard();
      return 0;
    }
    pvVar4 = GlobalAlloc(0x40,dwBytes * 2);
    _Dest_00 = GlobalLock(pvVar4);
    if (_Dest_00 == (LPWSTR)0x0) {
      GlobalUnlock(hMem);
      CloseClipboard();
      return 0;
    }
    _mbscpy(_Dest,_Source);
    MultiByteToWideChar(0,1,(LPCSTR)_Dest,-1,_Dest_00,dwBytes);
    _Dest_00[iVar2 + sVar3] = L'\0';
    pvVar4 = GlobalHandle(_Dest);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(_Dest);
    GlobalFree(pvVar4);
  }
  else {
    pwVar5 = GlobalLock(hMem);
    sVar3 = wcslen(pwVar5);
    sVar6 = wcslen(L"\r\n");
    pvVar4 = GlobalAlloc(0x40,(sVar3 + sVar6) * 2 + 2);
    _Dest_00 = GlobalLock(pvVar4);
    if (_Dest_00 == (wchar_t *)0x0) {
      GlobalUnlock(hMem);
      CloseClipboard();
      return 0;
    }
    wcscpy(_Dest_00,pwVar5);
  }
  GlobalUnlock(hMem);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  sVar3 = wcslen(_Dest_00);
  sVar6 = wcslen(L"\r\n");
  iVar2 = wcscmp(_Dest_00 + (sVar3 - sVar6),L"\r\n");
  if (iVar2 != 0) {
    wcscat(_Dest_00,L"\r\n");
  }
  sVar3 = wcslen(_Dest_00);
  iVar2 = *(int *)(param_1 + 0x100);
  local_10 = 0;
  pwVar5 = _Dest_00;
  while ((pwVar5 < _Dest_00 + sVar3 && (pwVar7 = wcsstr(pwVar5,L"\r\n"), pwVar7 != (wchar_t *)0x0)))
  {
    sVar6 = wcslen(L"\r\n");
    sVar6 = sVar6 + ((int)pwVar7 - (int)pwVar5 >> 1);
    pvVar4 = GlobalAlloc(0x40,sVar6 * 2 + 2);
    pwVar7 = GlobalLock(pvVar4);
    wcsncpy(pwVar7,pwVar5,sVar6);
    pwVar7[sVar6] = L'\0';
    pvVar4 = GlobalAlloc(0x40,0x10);
    pvVar8 = GlobalLock(pvVar4);
    if (pvVar8 == (LPVOID)0x0) goto LAB_0048bea4;
    iVar9 = FUN_0048b680(pwVar7,pvVar8);
    if (iVar9 != 0) {
      FUN_0048a670(*(undefined4 *)(param_1 + 0x100),pvVar8);
      FUN_0048c760(1,0);
      local_10 = local_10 + 1;
    }
    pvVar4 = GlobalHandle(pwVar7);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pwVar7);
    GlobalFree(pvVar4);
    pwVar5 = pwVar5 + sVar6;
  }
  pwVar7 = (wchar_t *)0x0;
  local_c = 1;
LAB_0048bea4:
  CloseClipboard();
  FUN_0048c760(0xffffffff,0);
  FUN_0048c7c0(iVar2,local_10 + -1 + iVar2,1,1);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  FUN_0048c310(4,iVar2,local_10);
  pvVar4 = GlobalHandle(_Dest_00);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(_Dest_00);
  GlobalFree(pvVar4);
  if (pwVar7 != (wchar_t *)0x0) {
    pvVar4 = GlobalHandle(pwVar7);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pwVar7);
    GlobalFree(pvVar4);
  }
  return local_c;
}


