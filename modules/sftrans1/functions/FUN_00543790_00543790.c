/* Module: sftrans1.dll
   Function: FUN_00543790
   Address: 00543790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00543790(int param_1)

{
  ushort uVar1;
  int *piVar2;
  wchar_t *_Str;
  LPCVOID pMem;
  size_t sVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  BOOL BVar7;
  LPCSTR lpMultiByteStr;
  int iVar8;
  int iVar9;
  tagCHARSETINFO local_20;
  
  piVar2 = *(int **)((*(int **)(param_1 + 0xa0))[2] + -4 + **(int **)(param_1 + 0xa0) * 4);
  if (*piVar2 == 0) {
    return 0;
  }
  _Str = (wchar_t *)piVar2[2];
  piVar2[2] = 0;
  piVar2[3] = 0;
  if (_Str == (wchar_t *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
  }
  pvVar4 = GlobalAlloc(0x40,(piVar2[1] + sVar3) * 2 + 2);
  pvVar5 = GlobalLock(pvVar4);
  if (pvVar5 != (LPVOID)0x0) {
    iVar6 = piVar2[1];
    pMem = (LPCVOID)piVar2[2];
    if (pMem != (LPCVOID)0x0) {
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
    }
    piVar2[2] = (int)pvVar5;
    piVar2[3] = iVar6 + 1 + sVar3;
    iVar6 = 0;
    if (0 < (int)sVar3) {
      do {
        *(wchar_t *)(piVar2[2] + iVar6 * 2) = _Str[iVar6];
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)sVar3);
    }
    uVar1 = *(ushort *)(piVar2 + 0x10);
    if (((uVar1 == 2) || (uVar1 == 0xff)) ||
       (BVar7 = TranslateCharsetInfo((DWORD *)(uint)uVar1,&local_20,1), BVar7 == 0)) {
      local_20.ciACP = GetACP();
    }
    iVar6 = piVar2[1];
    pvVar4 = GlobalAlloc(0x40,iVar6 + 1U);
    lpMultiByteStr = GlobalLock(pvVar4);
    if (lpMultiByteStr != (LPCSTR)0x0) {
      iVar8 = 0;
      iVar9 = iVar8;
      if (0 < iVar6) {
        do {
          iVar8 = iVar9 + 1;
          lpMultiByteStr[iVar9] = *(CHAR *)(*piVar2 + -1 + iVar8);
          iVar9 = iVar8;
        } while (iVar8 < iVar6);
      }
      lpMultiByteStr[iVar8] = '\0';
      pvVar4 = GlobalHandle((LPCVOID)*piVar2);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle((LPCVOID)*piVar2);
      GlobalFree(pvVar4);
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[0x11] = local_20.ciACP;
      iVar6 = MultiByteToWideChar(local_20.ciACP,1,lpMultiByteStr,-1,(LPWSTR)(piVar2[2] + sVar3 * 2)
                                  ,iVar6 + 1U);
      if (iVar6 != 0) {
        if (_Str != (wchar_t *)0x0) {
          pvVar4 = GlobalHandle(_Str);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(_Str);
          GlobalFree(pvVar4);
        }
        pvVar4 = GlobalHandle(lpMultiByteStr);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(lpMultiByteStr);
        GlobalFree(pvVar4);
        return 0;
      }
      if (_Str != (wchar_t *)0x0) {
        pvVar4 = GlobalHandle(_Str);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(_Str);
        GlobalFree(pvVar4);
      }
      pvVar4 = GlobalHandle(lpMultiByteStr);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(lpMultiByteStr);
      GlobalFree(pvVar4);
      return 0x80004005;
    }
    if (_Str != (wchar_t *)0x0) {
      pvVar4 = GlobalHandle(_Str);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(_Str);
      GlobalFree(pvVar4);
    }
    return 0x8007000e;
  }
  if (_Str == (wchar_t *)0x0) {
    return 0x8007000e;
  }
  pvVar4 = GlobalHandle(_Str);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(_Str);
  GlobalFree(pvVar4);
  return 0x8007000e;
}


