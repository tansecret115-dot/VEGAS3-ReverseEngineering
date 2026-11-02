/* Module: Setup.exe
   Function: _SfMapDialogTemplate@12
   Address: 0041c890
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfMapDialogTemplate_12(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  size_t sVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  LPCSTR lpMultiByteStr;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  LPCSTR pCVar12;
  bool bVar13;
  int local_c;
  
                    /* 0x1c890  266  _SfMapDialogTemplate@12 */
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    hMem = GlobalAlloc(0x42,param_2 * 2);
    puVar2 = GlobalLock(hMem);
    if (puVar2 != (undefined4 *)0x0) {
      bVar13 = *(short *)((int)param_1 + 2) != -1;
      if (bVar13) {
        *puVar2 = 0;
        puVar2[1] = param_1[1];
        puVar2[2] = *param_1;
        *(undefined2 *)(puVar2 + 3) = *(undefined2 *)(param_1 + 2);
        *(undefined2 *)((int)puVar2 + 0xe) = *(undefined2 *)((int)param_1 + 10);
        *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_1 + 3);
        *(undefined2 *)((int)puVar2 + 0x12) = *(undefined2 *)((int)param_1 + 0xe);
        *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_1 + 4);
        pwVar10 = (wchar_t *)((int)param_1 + 0x12);
      }
      else {
        pwVar10 = (wchar_t *)((int)param_1 + 0x1a);
        *puVar2 = param_1[1];
        puVar2[1] = param_1[2];
        puVar2[2] = param_1[3];
        *(undefined2 *)(puVar2 + 3) = *(undefined2 *)(param_1 + 4);
        *(undefined2 *)((int)puVar2 + 0xe) = *(undefined2 *)((int)param_1 + 0x12);
        *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_1 + 5);
        *(undefined2 *)((int)puVar2 + 0x12) = *(undefined2 *)((int)param_1 + 0x16);
        *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_1 + 6);
      }
      uVar1 = *(ushort *)(puVar2 + 3);
      lpMultiByteStr = (LPCSTR)(puVar2 + (uint)uVar1 * 10 + 0xc);
      if (*pwVar10 == L'\0') {
        pwVar9 = pwVar10 + 1;
      }
      else if (*pwVar10 == L'\xffff') {
        pwVar9 = pwVar10 + 2;
        puVar2[6] = (uint)(ushort)pwVar10[1];
      }
      else {
        sVar3 = wcslen(pwVar10);
        if ((pwVar10 == (wchar_t *)0x0) || (*pwVar10 != L'\0')) {
          WideCharToMultiByte(0,0,pwVar10,-1,lpMultiByteStr,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (lpMultiByteStr != (LPCSTR)0x0) {
          *lpMultiByteStr = '\0';
        }
        lpMultiByteStr[sVar3] = '\0';
        puVar2[6] = lpMultiByteStr;
        iVar4 = lstrlenA(lpMultiByteStr);
        lpMultiByteStr = lpMultiByteStr + iVar4 + 1;
        pwVar9 = pwVar10 + sVar3 + 1;
      }
      if (*pwVar9 == L'\0') {
        pwVar10 = pwVar9 + 1;
      }
      else if (*pwVar9 == L'\xffff') {
        pwVar10 = pwVar9 + 2;
        puVar2[7] = (uint)(ushort)pwVar9[1];
      }
      else {
        sVar3 = wcslen(pwVar9);
        if ((pwVar9 == (wchar_t *)0x0) || (*pwVar9 != L'\0')) {
          WideCharToMultiByte(0,0,pwVar9,-1,lpMultiByteStr,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (lpMultiByteStr != (LPCSTR)0x0) {
          *lpMultiByteStr = '\0';
        }
        lpMultiByteStr[sVar3] = '\0';
        puVar2[7] = lpMultiByteStr;
        iVar4 = lstrlenA(lpMultiByteStr);
        lpMultiByteStr = lpMultiByteStr + iVar4 + 1;
        pwVar10 = pwVar9 + sVar3 + 1;
      }
      if (*pwVar10 == L'\0') {
        pwVar10 = pwVar10 + 1;
      }
      else {
        sVar3 = wcslen(pwVar10);
        if ((pwVar10 == (wchar_t *)0x0) || (*pwVar10 != L'\0')) {
          WideCharToMultiByte(0,0,pwVar10,-1,lpMultiByteStr,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (lpMultiByteStr != (LPCSTR)0x0) {
          *lpMultiByteStr = '\0';
        }
        lpMultiByteStr[sVar3] = '\0';
        puVar2[8] = lpMultiByteStr;
        iVar4 = lstrlenA(lpMultiByteStr);
        lpMultiByteStr = lpMultiByteStr + iVar4 + 1;
        pwVar10 = pwVar10 + sVar3 + 1;
      }
      if ((*(byte *)(puVar2 + 2) & 0x40) != 0) {
        if (bVar13) {
          pwVar9 = pwVar10 + 1;
          *(wchar_t *)(puVar2 + 9) = *pwVar10;
          *(undefined2 *)((int)puVar2 + 0x26) = 400;
          *(undefined1 *)(puVar2 + 10) = 0;
          *(undefined1 *)((int)puVar2 + 0x29) = 1;
          sVar3 = wcslen(pwVar9);
          if ((*pwVar10 != L'\b') || (iVar4 = wcscmp(pwVar9,L"MS Sans Serif"), iVar4 != 0)) {
            if ((pwVar9 == (wchar_t *)0x0) || (*pwVar9 != L'\0')) {
              WideCharToMultiByte(0,0,pwVar9,-1,lpMultiByteStr,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (lpMultiByteStr != (LPCSTR)0x0) {
              *lpMultiByteStr = '\0';
            }
            lpMultiByteStr[sVar3] = '\0';
            puVar2[0xb] = lpMultiByteStr;
            iVar4 = lstrlenA(lpMultiByteStr);
            lpMultiByteStr = lpMultiByteStr + iVar4 + 1;
          }
          pwVar10 = pwVar10 + sVar3 + 2;
        }
        else {
          pwVar9 = pwVar10 + 3;
          *(wchar_t *)(puVar2 + 9) = *pwVar10;
          *(wchar_t *)((int)puVar2 + 0x26) = pwVar10[1];
          *(char *)(puVar2 + 10) = (char)pwVar10[2];
          *(undefined1 *)((int)puVar2 + 0x29) = *(undefined1 *)((int)pwVar10 + 5);
          sVar3 = wcslen(pwVar9);
          if ((*pwVar10 != L'\b') || (iVar4 = wcscmp(pwVar9,L"MS Sans Serif"), iVar4 != 0)) {
            if ((pwVar9 == (wchar_t *)0x0) || (*pwVar9 != L'\0')) {
              WideCharToMultiByte(0,0,pwVar9,-1,lpMultiByteStr,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (lpMultiByteStr != (LPCSTR)0x0) {
              *lpMultiByteStr = '\0';
            }
            lpMultiByteStr[sVar3] = '\0';
            puVar2[0xb] = lpMultiByteStr;
            iVar4 = lstrlenA(lpMultiByteStr);
            lpMultiByteStr = lpMultiByteStr + iVar4 + 1;
          }
          pwVar10 = pwVar10 + sVar3 + 4;
        }
      }
      local_c = 0;
      if (*(short *)(puVar2 + 3) != 0) {
        puVar11 = puVar2 + 0xe;
        do {
          puVar5 = (undefined4 *)((int)pwVar10 + 3U & 0xfffffffc);
          if (bVar13) {
            puVar11[-2] = 0;
            puVar11[-1] = puVar5[1];
            *puVar11 = *puVar5;
            *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar5 + 2);
            *(undefined2 *)((int)puVar11 + 6) = *(undefined2 *)((int)puVar5 + 10);
            *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar5 + 3);
            *(undefined2 *)((int)puVar11 + 10) = *(undefined2 *)((int)puVar5 + 0xe);
            *(undefined2 *)(puVar11 + 3) = *(undefined2 *)(puVar5 + 4);
            iVar4 = (int)puVar5 + 0x12;
          }
          else {
            iVar4 = (int)puVar5 + 0x16;
            puVar11[-2] = *puVar5;
            puVar11[-1] = puVar5[1];
            *puVar11 = puVar5[2];
            *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar5 + 3);
            *(undefined2 *)((int)puVar11 + 6) = *(undefined2 *)((int)puVar5 + 0xe);
            *(undefined2 *)(puVar11 + 2) = *(undefined2 *)(puVar5 + 4);
            *(undefined2 *)((int)puVar11 + 10) = *(undefined2 *)((int)puVar5 + 0x12);
            *(undefined2 *)(puVar11 + 3) = *(undefined2 *)(puVar5 + 5);
          }
          pwVar10 = (wchar_t *)(iVar4 + 3U & 0xfffffffc);
          if (*pwVar10 == L'\xffff') {
            pwVar9 = pwVar10 + 2;
            puVar11[4] = (uint)(ushort)pwVar10[1];
          }
          else {
            sVar3 = wcslen(pwVar10);
            if ((pwVar10 == (wchar_t *)0x0) || (*pwVar10 != L'\0')) {
              WideCharToMultiByte(0,0,pwVar10,-1,lpMultiByteStr,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (lpMultiByteStr != (LPCSTR)0x0) {
              *lpMultiByteStr = '\0';
            }
            lpMultiByteStr[sVar3] = '\0';
            puVar11[4] = lpMultiByteStr;
            iVar4 = lstrlenA(lpMultiByteStr);
            lpMultiByteStr = lpMultiByteStr + iVar4 + 1;
            pwVar9 = pwVar10 + sVar3 + 1;
          }
          if (*pwVar9 == L'\xffff') {
            pwVar10 = pwVar9 + 2;
            puVar11[5] = (uint)(ushort)pwVar9[1];
          }
          else {
            sVar3 = wcslen(pwVar9);
            if ((pwVar9 == (wchar_t *)0x0) || (*pwVar9 != L'\0')) {
              WideCharToMultiByte(0,0,pwVar9,-1,lpMultiByteStr,sVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else if (lpMultiByteStr != (LPCSTR)0x0) {
              *lpMultiByteStr = '\0';
            }
            lpMultiByteStr[sVar3] = '\0';
            puVar11[5] = lpMultiByteStr;
            iVar4 = lstrlenA(lpMultiByteStr);
            lpMultiByteStr = lpMultiByteStr + iVar4 + 1;
            pwVar10 = pwVar9 + sVar3 + 1;
          }
          uVar6 = (uint)(ushort)*pwVar10;
          if (*pwVar10 == L'\0') {
            pwVar10 = pwVar10 + 1;
          }
          else {
            if (bVar13) {
              uVar6 = uVar6 + 0xfffe;
            }
            uVar7 = uVar6 & 0xffff;
            pwVar9 = pwVar10 + 1;
            pCVar12 = lpMultiByteStr;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pCVar12 = *(undefined4 *)pwVar9;
              pwVar9 = pwVar9 + 2;
              pCVar12 = pCVar12 + 4;
            }
            param_1._0_2_ = (undefined2)uVar6;
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pCVar12 = (CHAR)*pwVar9;
              pwVar9 = (wchar_t *)((int)pwVar9 + 1);
              pCVar12 = pCVar12 + 1;
            }
            puVar11[7] = lpMultiByteStr;
            lpMultiByteStr = lpMultiByteStr + uVar7;
            *(undefined2 *)(puVar11 + 6) = param_1._0_2_;
            pwVar10 = (wchar_t *)(uVar7 + 2 + (int)pwVar10);
          }
          local_c = local_c + 1;
          puVar11 = puVar11 + 10;
        } while (local_c < (int)(uint)*(ushort *)(puVar2 + 3));
      }
      *param_3 = puVar2;
      return (uint)uVar1 * 0x28 + 0x30;
    }
    return 0;
  }
  return 0;
}


