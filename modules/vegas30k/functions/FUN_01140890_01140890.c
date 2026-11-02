/* Module: vegas30k.dll
   Function: FUN_01140890
   Address: 01140890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01140890(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uchar *puVar4;
  LPCSTR pCVar5;
  int iVar6;
  int iVar7;
  HGLOBAL pvVar8;
  char *pcVar9;
  undefined4 uVar10;
  SIZE_T dwBytes;
  int unaff_EBX;
  char *pcVar11;
  uint uVar12;
  wchar_t *pwVar13;
  code *pcVar14;
  undefined1 *puVar15;
  int *piVar16;
  wchar_t *pwVar17;
  uint uVar18;
  char *pMem;
  CHAR aCStack_92c [8];
  uchar local_924 [252];
  CHAR aCStack_828 [184];
  undefined1 auStack_770 [36];
  wchar_t awStack_74c [10];
  wchar_t awStack_738 [9];
  undefined1 uStack_725;
  wchar_t awStack_724 [4];
  WCHAR local_71c [236];
  wchar_t awStack_544 [9];
  undefined2 uStack_532;
  wchar_t awStack_530 [9];
  undefined2 uStack_51e;
  WCHAR aWStack_51c [3];
  undefined2 local_516;
  CHAR aCStack_358 [68];
  CHAR aCStack_314 [184];
  undefined1 auStack_25c [20];
  undefined1 auStack_248 [584];
  
  GetWindowTextA(*(HWND *)(param_1 + 0xc4),(LPSTR)local_924,0x104);
  MultiByteToWideChar(0,1,(LPCSTR)local_924,-1,local_71c,0x104);
  local_516 = 0;
  puVar4 = local_924;
  if (local_924[0] == '\\') {
    do {
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
    } while (*puVar4 == '\\');
    if (puVar4 != local_924) {
      _mbscpy(local_924,puVar4);
    }
  }
  lstrlenA((LPCSTR)local_924);
  pCVar5 = (LPCSTR)_SfGetString2_8();
  iVar6 = lstrcmpA((LPCSTR)local_924,pCVar5);
  if (iVar6 == 0) {
    _SfGetString2_8();
    SfMsgBox();
    return 0;
  }
  pCVar5 = (LPCSTR)_SfGetString2_8();
  iVar6 = lstrcmpA((LPCSTR)local_924,pCVar5);
  if (iVar6 == 0) {
    _SfGetString2_8();
    SfMsgBox();
    return 0;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0x38))();
  iVar6 = 0;
  if (0 < unaff_EBX) {
    do {
      (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
      if ((&stack0x00000000 == (undefined1 *)0x51c) || (aWStack_51c[0] != L'\0')) {
        WideCharToMultiByte(0,0,aWStack_51c,-1,aCStack_828,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if (&stack0x00000000 != (undefined1 *)0x828) {
        aCStack_828[0] = '\0';
      }
      uStack_725 = 0;
      iVar7 = wcscmp(aWStack_51c,awStack_724);
      if (iVar7 == 0) {
        _SfGetString2_8();
        SfMsgBox();
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < unaff_EBX);
  }
  _SfStripWhiteSpace_4();
  iVar6 = lstrlenA(aCStack_92c);
  if (iVar6 == 0) {
    _SfGetString2_8();
    SfMsgBox();
    return 0;
  }
  GetWindowTextA(*(HWND *)(param_1 + 0xd8),aCStack_314,0x104);
  MultiByteToWideChar(0,1,aCStack_314,-1,awStack_724,0x104);
  piVar16 = *(int **)(param_1 + 8);
  uStack_51e = 0;
  (**(code **)(*piVar16 + 0x84))();
  pcVar14 = wcscmp_exref;
  iVar6 = wcscmp(awStack_738,awStack_530);
  GetWindowTextA(*(HWND *)(param_1 + 0xc4),&stack0xfffff6c0,0x104);
  MultiByteToWideChar(0,1,&stack0xfffff6c0,-1,awStack_738,0x104);
  uStack_532 = 0;
  puVar4 = &stack0xfffff6c0;
  if ((uchar)unaff_EBX == '\\') {
    do {
      puVar4 = (uchar *)CharNextA((LPCSTR)puVar4);
    } while (*puVar4 == '\\');
    if (puVar4 != &stack0xfffff6c0) {
      _mbscpy(&stack0xfffff6c0,puVar4);
    }
  }
  lstrlenA(&stack0xfffff6c0);
  pwVar17 = awStack_530;
  pwVar13 = *(wchar_t **)(param_1 + 0x1c);
  (**(code **)(**(int **)(param_1 + 8) + 0x80))();
  iVar7 = wcscmp(awStack_74c,awStack_544);
  piVar3 = *(int **)(param_1 + 0xc);
  uVar12 = (uint)(iVar7 == 0);
  if (piVar3 != (int *)0x0) {
    dwBytes = *(SIZE_T *)(param_1 + 0x18);
    uVar18 = uVar12;
    (**(code **)(*piVar3 + 0x20))(piVar3,*(undefined4 *)(param_1 + 0x14));
    pvVar8 = GlobalAlloc(0x40,dwBytes);
    pcVar9 = GlobalLock(pvVar8);
    pcVar14 = wcscmp_exref;
    if (pcVar9 != (char *)0x0) {
      pMem = pcVar9;
      iVar7 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                        (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),&stack0xfffff6ac,
                         pcVar9);
      uVar12 = uVar18;
      if (iVar7 < 0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(*(int **)(param_1 + 0xc),pcVar9);
        uVar12 = uVar18;
      }
      pcVar11 = *(char **)(param_1 + 0x14);
      do {
        if (dwBytes == 0) break;
        dwBytes = dwBytes - 1;
        cVar2 = *pcVar9;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      pvVar8 = GlobalHandle(pMem);
      GlobalUnlock(pvVar8);
      pvVar8 = GlobalHandle(pMem);
      GlobalFree(pvVar8);
      pcVar14 = wcscmp_exref;
    }
  }
  iVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + 0x20 + *(int *)(param_1 + 0x7c) * 0x3c)
                      + 0x28))();
  if ((((iVar7 == 1) &&
       (iVar7 = (**(code **)(**(int **)(param_1 + 8) + 0x5c))
                          (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 4)), iVar7 == 1)) &&
      (uVar12 != 0)) && ((iVar6 == 0 && (piVar16 != (int *)0x0)))) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  (**(code **)(**(int **)(param_1 + 8) + 0x78))(*(int **)(param_1 + 8),iVar6,&stack0xfffff69c);
  if (pwVar13 < pwVar17) {
    do {
      (**(code **)(**(int **)(param_1 + 8) + 0x80))
                (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),pwVar13,auStack_248,0x104);
      iVar7 = (*pcVar14)(auStack_770,auStack_25c);
      if (iVar7 == 0) {
        puVar15 = &stack0xfffff69c;
        uVar10 = _SfGetString2_8(DAT_0120e5c8,0x10bd);
        iVar7 = SfMsgBox(*(undefined4 *)(param_1 + 0x48),0x21,uVar10,puVar15);
        if (iVar7 == 2) {
          return 0;
        }
        (**(code **)(**(int **)(param_1 + 8) + 0x68))
                  (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 4),&stack0xfffff69c);
        break;
      }
      pwVar13 = (wchar_t *)((int)pwVar13 + 1);
    } while (pwVar13 < pwVar17);
  }
  piVar16 = *(int **)(*(int *)(param_1 + 0x6c) + 0x20 + *(int *)(param_1 + 0x7c) * 0x3c);
  iVar7 = (**(code **)(*piVar16 + 0x2c))(piVar16);
  if (-1 < iVar7) {
    (**(code **)(**(int **)(param_1 + 4) + 0x60))(*(int **)(param_1 + 4),&stack0xfffff680);
    iVar7 = iVar6;
    MultiByteToWideChar(0,1,&stack0xfffff690,-1,(LPWSTR)(iVar6 + 0x14),0x104);
    *(undefined2 *)(iVar6 + 0x21a) = 0;
    iVar6 = iVar7;
    MultiByteToWideChar(0,1,aCStack_358,-1,(LPWSTR)(iVar7 + 0x21c),0x104);
    *(undefined2 *)(iVar7 + 0x422) = 0;
    (**(code **)(**(int **)(param_1 + 4) + 100))(*(int **)(param_1 + 4),iVar6);
    (**(code **)(**(int **)(param_1 + 4) + 0x68))(*(int **)(param_1 + 4),piVar16);
    (**(code **)(**(int **)(param_1 + 8) + 0x6c))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 4),0,1);
    piVar16 = *(int **)(param_1 + 0xc);
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 0x20))
                (piVar16,*(undefined4 *)(param_1 + 0x14),(undefined4 *)(param_1 + 0x18));
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
                (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),0,
                 *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    }
    piVar16 = *(int **)(*(int *)(param_1 + 0x6c) + 0x20 + *(int *)(param_1 + 0x7c) * 0x3c);
    (**(code **)(*piVar16 + 0x3c))(piVar16);
    piVar16 = (int *)(param_1 + 0x24);
    (**(code **)(**(int **)(param_1 + 8) + 0x78))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),piVar16);
    *piVar16 = *piVar16 + -1;
  }
  return 1;
}


