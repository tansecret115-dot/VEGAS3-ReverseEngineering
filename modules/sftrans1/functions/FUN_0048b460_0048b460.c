/* Module: sftrans1.dll
   Function: FUN_0048b460
   Address: 0048b460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048b460(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  wchar_t *_Dest;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int local_10;
  int local_c;
  
  if ((((param_1 != (undefined4 *)0x0) && (param_3 != 0)) && (0 < param_2)) &&
     ((iVar3 = FUN_00486940(*param_1), iVar3 != 0 && (*(LPCSTR *)(iVar3 + 0x10) != (LPCSTR)0x0)))) {
    iVar4 = lstrlenA(*(LPCSTR *)(iVar3 + 0x10));
    iVar11 = 0;
    local_c = 0;
    if (0 < iVar4) {
      iVar9 = 0;
      local_10 = 0;
      pcVar10 = wcslen_exref;
      do {
        cVar1 = *(char *)(*(int *)(iVar3 + 0x10) + local_c);
        if (cVar1 == '%') {
          if (*(int *)(iVar9 + param_1[1]) != 0) {
            iVar5 = (*pcVar10)(*(int *)(iVar9 + param_1[1]));
            pvVar6 = GlobalAlloc(0x40,iVar5 * 2 + 2);
            _Dest = GlobalLock(pvVar6);
            wcscpy(_Dest,*(wchar_t **)(iVar9 + param_1[1]));
            if (_Dest != (wchar_t *)0x0) {
              FUN_00486350(_Dest,0x22,0x7e);
              FUN_00486350(_Dest,9,0x20);
              iVar9 = (*pcVar10)(_Dest);
              iVar5 = 0;
              if ((iVar9 == 0) || (*_Dest != L' ')) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                *(undefined2 *)(param_3 + iVar11 * 2) = 0x22;
                iVar11 = iVar11 + 1;
              }
              if (0 < iVar9) {
                pwVar7 = (wchar_t *)(param_3 + iVar11 * 2);
                pwVar8 = _Dest;
                do {
                  if (param_2 <= iVar11) {
                    *(undefined2 *)(param_3 + -2 + param_2 * 2) = 0;
                    pvVar6 = GlobalHandle(_Dest);
                    GlobalUnlock(pvVar6);
                    pvVar6 = GlobalHandle(_Dest);
                    GlobalFree(pvVar6);
                    return 0;
                  }
                  iVar11 = iVar11 + 1;
                  *pwVar7 = *pwVar8;
                  pwVar7 = pwVar7 + 1;
                  iVar5 = iVar5 + 1;
                  pwVar8 = pwVar8 + 1;
                  pcVar10 = wcslen_exref;
                } while (iVar5 < iVar9);
              }
              if (bVar2) {
                iVar11 = iVar11 + 1;
                *(undefined2 *)(param_3 + -2 + iVar11 * 2) = 0x22;
              }
              pvVar6 = GlobalHandle(_Dest);
              GlobalUnlock(pvVar6);
              pvVar6 = GlobalHandle(_Dest);
              GlobalFree(pvVar6);
              iVar9 = local_10;
            }
          }
          iVar9 = iVar9 + 4;
          local_10 = iVar9;
        }
        else {
          if (param_2 <= iVar11) {
            if (iVar11 < 1) {
              return 0;
            }
            *(undefined2 *)(param_3 + -2 + iVar11 * 2) = 0;
            return 0;
          }
          *(short *)(param_3 + iVar11 * 2) = (short)cVar1;
          iVar11 = iVar11 + 1;
        }
        local_c = local_c + 1;
      } while (local_c < iVar4);
    }
    wcscpy((wchar_t *)(param_3 + iVar11 * 2),L"\r\n");
    *(undefined2 *)(param_3 + -2 + param_2 * 2) = 0;
    return 1;
  }
  return 0;
}


