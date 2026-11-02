/* Module: sftrans1.dll
   Function: FUN_0048b890
   Address: 0048b890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0048b890(int param_1)

{
  uint uVar1;
  int *piVar2;
  LPCVOID pMem;
  HGLOBAL pvVar3;
  undefined4 *pMem_00;
  LPVOID pvVar4;
  size_t sVar5;
  undefined4 *puVar6;
  HGLOBAL hMem;
  LPSTR lpMultiByteStr;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  code *pcVar12;
  size_t *psVar13;
  undefined4 *puVar14;
  LPCWSTR pWVar15;
  wchar_t *_Dest;
  LPCWSTR local_24;
  size_t *local_18;
  undefined4 local_14;
  int local_10;
  HGLOBAL local_c;
  
  uVar1 = **(uint **)(param_1 + 0xb0);
  local_14 = 0;
  local_10 = 0;
  local_18 = (size_t *)0x0;
  local_24 = (LPCWSTR)0x0;
  pvVar3 = GlobalAlloc(0x40,uVar1 * 4);
  pcVar11 = GlobalLock_exref;
  pMem_00 = GlobalLock(pvVar3);
  if (pMem_00 != (undefined4 *)0x0) {
    puVar6 = pMem_00;
    for (uVar8 = uVar1 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    pvVar3 = GlobalAlloc(0x40,uVar1 * 4);
    local_18 = GlobalLock(pvVar3);
    if (local_18 != (size_t *)0x0) {
      psVar13 = local_18;
      for (uVar8 = uVar1 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *psVar13 = 0;
        psVar13 = psVar13 + 1;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined1 *)psVar13 = 0;
        psVar13 = (size_t *)((int)psVar13 + 1);
      }
      local_c = (HGLOBAL)0x0;
      if (0 < (int)uVar1) {
        puVar6 = pMem_00;
        do {
          piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xb0) + 8) + (int)local_c * 4);
          if (*piVar2 != -1) {
            iVar9 = FUN_0048b3d0(piVar2);
            pvVar3 = GlobalAlloc(0x40,iVar9 * 2);
            pvVar4 = GlobalLock(pvVar3);
            *puVar6 = pvVar4;
            if (pvVar4 == (LPVOID)0x0) goto LAB_0048bb20;
            FUN_0048b460(piVar2,iVar9,pvVar4);
            sVar5 = wcslen((wchar_t *)*puVar6);
            *(size_t *)(((int)local_18 - (int)pMem_00) + (int)puVar6) = sVar5;
            local_10 = local_10 + sVar5;
          }
          local_c = (HGLOBAL)((int)local_c + 1);
          puVar6 = puVar6 + 1;
          pcVar11 = GlobalLock_exref;
        } while ((int)local_c < (int)uVar1);
      }
      uVar8 = local_10 + 1;
      pvVar3 = GlobalAlloc(0x40,uVar8 * 4);
      local_24 = (LPCWSTR)(*pcVar11)(pvVar3);
      if (local_24 != (LPCWSTR)0x0) {
        pWVar15 = local_24;
        for (uVar10 = (uVar8 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
          pWVar15[0] = L'\0';
          pWVar15[1] = L'\0';
          pWVar15 = pWVar15 + 2;
        }
        for (uVar10 = uVar8 * 2 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)pWVar15 = 0;
          pWVar15 = (LPCWSTR)((int)pWVar15 + 1);
        }
        if (0 < (int)uVar1) {
          psVar13 = local_18;
          _Dest = local_24;
          local_c = (HGLOBAL)uVar1;
          do {
            wcsncpy(_Dest,*(wchar_t **)(((int)pMem_00 - (int)local_18) + (int)psVar13),*psVar13);
            sVar5 = *psVar13;
            psVar13 = psVar13 + 1;
            local_c = (HGLOBAL)((int)local_c - 1);
            _Dest = _Dest + sVar5;
          } while (local_c != (HGLOBAL)0x0);
          local_c = (HGLOBAL)0x0;
        }
        local_24[uVar8 * 2 + -1] = L'\0';
        pvVar3 = GlobalAlloc(0x2002,uVar8 * 2 + 1);
        puVar6 = (undefined4 *)(*pcVar11)(pvVar3);
        if (puVar6 != (undefined4 *)0x0) {
          puVar14 = pMem_00;
          for (uVar8 = (uint)pvVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar6 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar6 = puVar6 + 1;
          }
          for (uVar8 = (uint)pvVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar6 = *(undefined1 *)puVar14;
            puVar14 = (undefined4 *)((int)puVar14 + 1);
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          uVar8 = 0;
          pvVar3 = local_c;
        }
        GlobalUnlock(pvVar3);
        hMem = GlobalAlloc(0x2002,uVar8);
        lpMultiByteStr = (LPSTR)(*pcVar11)(hMem);
        if (lpMultiByteStr != (LPSTR)0x0) {
          if (*local_24 == L'\0') {
            *lpMultiByteStr = '\0';
          }
          else {
            WideCharToMultiByte(0,0,local_24,-1,lpMultiByteStr,uVar8,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          lpMultiByteStr[uVar8 - 1] = '\0';
        }
        GlobalUnlock(hMem);
        BVar7 = OpenClipboard(*(HWND *)(param_1 + 4));
        if (BVar7 == 0) {
          local_14 = 0;
        }
        else {
          EmptyClipboard();
          SetClipboardData(0xd,pvVar3);
          SetClipboardData(1,hMem);
          CloseClipboard();
          local_14 = 1;
        }
      }
    }
  }
LAB_0048bb20:
  puVar6 = pMem_00;
  local_c = (HGLOBAL)uVar1;
  if (0 < (int)uVar1) {
    do {
      pMem = (LPCVOID)*puVar6;
      if (pMem != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      local_c = (HGLOBAL)((int)local_c - 1);
      puVar6 = puVar6 + 1;
    } while (local_c != (HGLOBAL)0x0);
  }
  pcVar12 = GlobalUnlock_exref;
  pcVar11 = GlobalFree_exref;
  if (pMem_00 != (undefined4 *)0x0) {
    pvVar3 = GlobalHandle(pMem_00);
    pcVar12 = GlobalUnlock_exref;
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem_00);
    pcVar11 = GlobalFree_exref;
    GlobalFree(pvVar3);
  }
  if (local_18 != (size_t *)0x0) {
    pvVar3 = GlobalHandle(local_18);
    (*pcVar12)(pvVar3);
    pvVar3 = GlobalHandle(local_18);
    (*pcVar11)(pvVar3);
  }
  if (local_24 != (LPCWSTR)0x0) {
    pvVar3 = GlobalHandle(local_24);
    (*pcVar12)(pvVar3);
    pvVar3 = GlobalHandle(local_24);
    (*pcVar11)(pvVar3);
  }
  return local_14;
}


