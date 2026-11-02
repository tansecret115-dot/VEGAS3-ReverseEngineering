/* Module: sftrans1.dll
   Function: FUN_0053b680
   Address: 0053b680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0053b680(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPCVOID pvVar2;
  size_t _Count;
  HGLOBAL pvVar3;
  wchar_t *_Dest;
  BOOL BVar4;
  int cchWideChar;
  LPWSTR lpWideCharStr;
  int iVar5;
  tagCHARSETINFO local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  _mbscpy((uchar *)(param_2 + 4),(uchar *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 8));
  param_2[0xc] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x28);
  param_2[0xd] = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x2c);
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x30);
  *(undefined2 *)(param_2 + 0x10) = 1;
  param_2[0xe] = uVar1;
  if (*(int *)(param_1 + 8) != 0) {
    _Count = wcslen(*(wchar_t **)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 4));
    pvVar3 = GlobalAlloc(0x40,(_Count + 2) * 2);
    _Dest = GlobalLock(pvVar3);
    wcsncpy(_Dest,*(wchar_t **)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 4),_Count);
    _Dest[_Count] = L'\n';
    _Dest[_Count + 1] = L'\0';
    pvVar2 = (LPCVOID)param_2[2];
    if (pvVar2 != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pvVar2);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvVar2);
      GlobalFree(pvVar3);
    }
    param_2[2] = _Dest;
    param_2[3] = _Count + 2;
    return 0;
  }
  BVar4 = TranslateCharsetInfo((DWORD *)0x1,&local_20,1);
  if (BVar4 == 0) {
    local_20.ciACP = GetACP();
  }
  param_2[0x11] = local_20.ciACP;
  cchWideChar = MultiByteToWideChar(local_20.ciACP,1,
                                    (LPCSTR)**(undefined4 **)(*(int *)(param_1 + 0x18) + 4),-1,
                                    (LPWSTR)param_2[2],0);
  if (cchWideChar != 0) {
    pvVar3 = GlobalAlloc(0x40,(cchWideChar + 1) * 2);
    lpWideCharStr = GlobalLock(pvVar3);
    if (lpWideCharStr == (LPWSTR)0x0) {
      return 0x8007000e;
    }
    pvVar2 = (LPCVOID)param_2[2];
    if (pvVar2 != (LPCVOID)0x0) {
      pvVar3 = GlobalHandle(pvVar2);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pvVar2);
      GlobalFree(pvVar3);
    }
    param_2[2] = lpWideCharStr;
    param_2[3] = cchWideChar + 1;
    iVar5 = MultiByteToWideChar(local_20.ciACP,1,
                                (LPCSTR)**(undefined4 **)(*(int *)(param_1 + 0x18) + 4),-1,
                                lpWideCharStr,cchWideChar);
    if (iVar5 != 0) {
      *(undefined2 *)(param_2[2] + -2 + cchWideChar * 2) = 10;
      *(undefined2 *)(param_2[2] + cchWideChar * 2) = 0;
      return 0;
    }
  }
  return 0x80004005;
}


