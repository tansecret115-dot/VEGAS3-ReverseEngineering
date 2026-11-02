/* Module: wmfplug2.dll
   Function: FUN_00477bc0
   Address: 00477bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00477bc0(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uchar *_Source;
  LPCSTR pCVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  HGLOBAL pvVar8;
  char *pMem;
  undefined *puVar9;
  SIZE_T dwBytes;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  code *pcVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  int local_938 [5];
  uchar local_924 [168];
  undefined1 auStack_87c [35];
  undefined1 uStack_859;
  CHAR aCStack_858 [56];
  CHAR local_820 [203];
  undefined1 uStack_755;
  wchar_t awStack_754 [8];
  wchar_t awStack_744 [10];
  wchar_t awStack_730 [10];
  WCHAR local_71c [240];
  wchar_t awStack_53c [9];
  undefined2 uStack_52a;
  wchar_t awStack_528 [9];
  undefined2 local_516;
  WCHAR aWStack_514 [260];
  CHAR aCStack_30c [204];
  wchar_t awStack_240 [27];
  undefined1 uStack_209;
  
  iVar10 = 0;
  GetWindowTextA(*(HWND *)(param_1 + 0xc4),(LPSTR)local_924,0x104);
  pcVar16 = MultiByteToWideChar_exref;
  MultiByteToWideChar(0,1,(LPCSTR)local_924,-1,local_71c,0x104);
  local_516 = 0;
  _Source = local_924;
  if (local_924[0] == '\\') {
    do {
      _Source = (uchar *)CharNextA((LPCSTR)_Source);
    } while (*_Source == '\\');
    if (_Source != local_924) {
      _mbscpy(local_924,_Source);
    }
  }
  lstrlenA((LPCSTR)local_924);
  pCVar4 = FUN_00420d00(DAT_00489e30,0x10b3);
  iVar5 = lstrcmpA((LPCSTR)local_924,pCVar4);
  if (iVar5 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))();
    if (0 < local_938[0]) {
      do {
        (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
        if ((&stack0x00000000 == (undefined1 *)0x514) || (aWStack_514[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_514,-1,aCStack_30c,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x30c) {
          aCStack_30c[0] = '\0';
        }
        uStack_209 = 0;
        iVar5 = wcscmp(aWStack_514,local_71c);
        if (iVar5 == 0) goto LAB_00477d41;
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_938[0]);
    }
    FUN_0042c380((LPCSTR)local_924);
    iVar10 = lstrlenA((LPCSTR)local_924);
    if (iVar10 != 0) goto LAB_00477d49;
  }
LAB_00477d41:
LAB_00477d49:
  GetWindowTextA(*(HWND *)(param_1 + 0xd8),local_820,0x104);
  MultiByteToWideChar(0,1,local_820,-1,local_71c,0x104);
  local_516 = 0;
  iVar10 = *(int *)(param_1 + 0x1c);
  (**(code **)(**(int **)(param_1 + 8) + 0x84))();
  iVar5 = wcscmp(awStack_730,awStack_528);
  GetWindowTextA(*(HWND *)(param_1 + 0xc4),(LPSTR)local_938,0x104);
  MultiByteToWideChar(0,1,(LPCSTR)local_938,-1,awStack_730,0x104);
  uStack_52a = 0;
  piVar6 = local_938;
  if ((char)local_938[0] == '\\') {
    do {
      piVar6 = (int *)CharNextA((LPCSTR)piVar6);
    } while ((uchar)*piVar6 == '\\');
    if (piVar6 != local_938) {
      _mbscpy((uchar *)local_938,(uchar *)piVar6);
    }
  }
  lstrlenA((LPCSTR)local_938);
  piVar6 = *(int **)(param_1 + 8);
  uVar18 = 0x104;
  uVar14 = *(uint *)(param_1 + 0x24);
  (**(code **)(*piVar6 + 0x80))();
  iVar7 = wcscmp(awStack_744,awStack_53c);
  piVar3 = *(int **)(param_1 + 0xc);
  uVar13 = (uint)(iVar7 == 0);
  if (piVar3 != (int *)0x0) {
    dwBytes = *(SIZE_T *)(param_1 + 0x18);
    uVar19 = uVar13;
    (**(code **)(*piVar3 + 0x20))(piVar3,*(undefined4 *)(param_1 + 0x14));
    pvVar8 = GlobalAlloc(0x40,dwBytes);
    pMem = GlobalLock(pvVar8);
    pcVar16 = MultiByteToWideChar_exref;
    if (pMem != (char *)0x0) {
      iVar7 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                        (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),&stack0xfffff6b4,pMem
                        );
      uVar13 = uVar19;
      if (iVar7 < 0) {
        (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(*(int **)(param_1 + 0xc),pMem);
        uVar13 = uVar19;
      }
      pcVar12 = *(char **)(param_1 + 0x14);
      pcVar15 = pMem;
      do {
        if (dwBytes == 0) break;
        dwBytes = dwBytes - 1;
        cVar2 = *pcVar15;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar15 = pcVar15 + 1;
      } while (cVar1 == cVar2);
      pvVar8 = GlobalHandle(pMem);
      GlobalUnlock(pvVar8);
      pvVar8 = GlobalHandle(pMem);
      GlobalFree(pvVar8);
      pcVar16 = MultiByteToWideChar_exref;
    }
  }
  iVar7 = (**(code **)(**(int **)(*(int *)(param_1 + 0x6c) + 0x20 + *(int *)(param_1 + 0x7c) * 0x3c)
                      + 0x28))();
  if ((((iVar7 == 1) &&
       (iVar7 = (**(code **)(**(int **)(param_1 + 8) + 0x5c))
                          (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 4)), iVar7 == 1)) &&
      (uVar13 != 0)) && ((iVar5 == 0 && (iVar10 != 0)))) {
    return 1;
  }
  iVar10 = *(int *)(param_1 + 0x1c);
  (**(code **)(**(int **)(param_1 + 8) + 0x78))(*(int **)(param_1 + 8),iVar10,&stack0xfffff6a4);
  if (uVar14 < uVar18) {
    do {
      (**(code **)(**(int **)(param_1 + 8) + 0x80))
                (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),uVar14,awStack_240,0x104);
      iVar5 = wcscmp(awStack_754,awStack_240);
      if (iVar5 == 0) goto LAB_00477fe5;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar18);
  }
  if (piVar6 != (int *)0x0) {
LAB_00477fe5:
    iVar5 = **(int **)(param_1 + 8);
    puVar9 = FUN_00420d00(DAT_00489e30,0x10bb);
    (**(code **)(iVar5 + 0x68))(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),puVar9);
    pCVar4 = FUN_00420d00(DAT_00489e30,0x10bb);
    lstrcpynA(&stack0xfffff6a4,pCVar4,0x104);
    uStack_859 = 0;
    lstrlenA(&stack0xfffff6a4);
    pCVar4 = FUN_00420d00(DAT_00489e30,0x10bc);
    lstrcpynA(aCStack_858,pCVar4,0x104);
    uStack_755 = 0;
    lstrlenA(aCStack_858);
  }
  uVar11 = 0;
  piVar6 = *(int **)(*(int *)(param_1 + 0x6c) + 0x20 + *(int *)(param_1 + 0x7c) * 0x3c);
  iVar5 = (**(code **)(*piVar6 + 0x2c))(piVar6);
  if (-1 < iVar5) {
    uVar11 = 1;
    (**(code **)(**(int **)(param_1 + 4) + 0x60))(*(int **)(param_1 + 4),&stack0xfffff684);
    iVar5 = iVar10 + 0x14;
    (*pcVar16)(0,1,&stack0xfffff698,0xffffffff,iVar5,0x104);
    *(undefined2 *)(iVar10 + 0x21a) = 0;
    puVar17 = auStack_87c;
    iVar10 = iVar5 + 0x21c;
    (*pcVar16)(0,1,puVar17,0xffffffff,iVar10,0x104);
    *(undefined2 *)(iVar5 + 0x422) = 0;
    (**(code **)(**(int **)(param_1 + 4) + 100))(*(int **)(param_1 + 4),iVar10);
    (**(code **)(**(int **)(param_1 + 4) + 0x68))(*(int **)(param_1 + 4),puVar17);
    (**(code **)(**(int **)(param_1 + 8) + 0x6c))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 4),0,1);
    piVar6 = *(int **)(param_1 + 0xc);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x20))
                (piVar6,*(undefined4 *)(param_1 + 0x14),(undefined4 *)(param_1 + 0x18));
      (**(code **)(**(int **)(param_1 + 0xc) + 0x10))
                (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),0,
                 *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    }
    piVar6 = (int *)(param_1 + 0x24);
    (**(code **)(**(int **)(param_1 + 8) + 0x78))
              (*(int **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c),piVar6);
    *piVar6 = *piVar6 + -1;
  }
  return uVar11;
}


