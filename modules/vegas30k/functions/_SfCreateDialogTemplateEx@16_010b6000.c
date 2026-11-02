/* Module: vegas30k.dll
   Function: _SfCreateDialogTemplateEx@16
   Address: 010b6000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 * _SfCreateDialogTemplateEx_16(void)

{
  ushort uVar1;
  wchar_t wVar2;
  undefined4 uVar3;
  bool bVar4;
  ushort uVar5;
  LPCSTR lpString;
  int iVar6;
  uint uVar7;
  int iVar8;
  LPCSTR pCVar9;
  HGLOBAL hMem;
  undefined2 *puVar10;
  size_t sVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  int *piVar17;
  int iVar18;
  int iStack00000004;
  uint uStack0000000c;
  char *pcStack00000010;
  int iStack00000014;
  undefined4 in_stack_0000182c;
  undefined4 *in_stack_00001830;
  int in_stack_00001834;
  short *in_stack_00001838;
  
                    /* 0xb6000  797  _SfCreateDialogTemplateEx@16 */
  FUN_01002100();
  lpString = (LPCSTR)in_stack_00001830[8];
  if ((int)lpString < 0x10000) {
    lpString = (LPCSTR)_SfGetString2_8(in_stack_0000182c,lpString);
  }
  iVar6 = lstrlenA(lpString);
  pcStack00000010 = (char *)in_stack_00001830[0xb];
  iVar14 = 0;
  if (pcStack00000010 == (LPCSTR)0x0) {
    pcStack00000010 = "MS Sans Serif";
    iStack00000014 = lstrlenA("MS Sans Serif");
    bVar4 = false;
  }
  else {
    if ((int)pcStack00000010 < 0x10000) {
      pcStack00000010 = (char *)_SfGetString2_8(in_stack_0000182c,pcStack00000010);
    }
    iStack00000014 = lstrlenA(pcStack00000010);
    bVar4 = true;
  }
  iVar18 = (iStack00000014 + (uint)*(ushort *)(in_stack_00001830 + 3) * 0xb + iVar6) * 2;
  iStack00000004 = iVar18 + 0x2a;
  pCVar9 = (LPCSTR)in_stack_00001830[6];
  if (pCVar9 != (LPCSTR)0x0) {
    if ((int)pCVar9 < 0x10000) {
      iStack00000004 = iVar18 + 0x2c;
    }
    else {
      iVar18 = lstrlenA(pCVar9);
      iStack00000004 = iStack00000004 + iVar18 * 2;
    }
  }
  pCVar9 = (LPCSTR)in_stack_00001830[7];
  if (pCVar9 != (LPCSTR)0x0) {
    if ((int)pCVar9 < 0x10000) {
      iStack00000004 = iStack00000004 + 2;
    }
    else {
      iVar18 = lstrlenA(pCVar9);
      iStack00000004 = iStack00000004 + iVar18 * 2;
    }
  }
  uVar1 = *(ushort *)(in_stack_00001830 + 3);
  if (0xff < uVar1) {
    uVar1 = 0x100;
  }
  iVar18 = 0;
  uVar7 = (uint)uVar1;
  if (uVar7 != 0) {
    puVar13 = (undefined4 *)&stack0x00000030;
    piVar17 = (int *)(in_stack_00001834 + 0x1c);
    uStack0000000c = uVar7;
    do {
      pCVar9 = (LPCSTR)piVar17[-1];
      puVar13[-2] = pCVar9;
      if ((int)pCVar9 < 0x10000) {
        iVar8 = 0;
      }
      else {
        iVar8 = lstrlenA(pCVar9);
      }
      puVar13[-1] = iVar8;
      pCVar9 = (LPCSTR)*piVar17;
      if (pCVar9 == (LPCSTR)0x0) {
        pCVar9 = "";
      }
      else if ((int)pCVar9 < 0x10000) {
        pCVar9 = (LPCSTR)_SfGetString2_8(in_stack_0000182c,pCVar9);
      }
      *puVar13 = pCVar9;
      iVar8 = lstrlenA(pCVar9);
      puVar13[1] = iVar8;
      iVar18 = iVar18 + 5 + puVar13[-1] + iVar8;
      uVar5 = *(ushort *)(piVar17 + 1);
      if (uVar5 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = piVar17[2];
      }
      puVar13[2] = iVar8;
      if (piVar17[2] == 0) {
        uVar5 = 0;
      }
      *(ushort *)(puVar13 + 3) = uVar5;
      piVar17 = piVar17 + 10;
      puVar13 = puVar13 + 6;
      iVar14 = uVar5 + 2 + iVar14;
      uStack0000000c = uStack0000000c - 1;
    } while (uStack0000000c != 0);
  }
  hMem = GlobalAlloc(0x40,iVar14 + iVar18 * 2 + 3 + iStack00000004 & 0xfffffffc);
  puVar10 = GlobalLock(hMem);
  if (puVar10 != (undefined2 *)0x0) {
    *puVar10 = 1;
    puVar10[1] = 0xffff;
    pwVar16 = puVar10 + 0xd;
    *(undefined4 *)(puVar10 + 2) = *in_stack_00001830;
    *(undefined4 *)(puVar10 + 4) = in_stack_00001830[1];
    uVar3 = in_stack_00001830[2];
    puVar10[8] = uVar1;
    *(undefined4 *)(puVar10 + 6) = uVar3;
    puVar10[9] = *(undefined2 *)((int)in_stack_00001830 + 0xe);
    puVar10[10] = *(undefined2 *)(in_stack_00001830 + 4);
    puVar10[0xb] = *(undefined2 *)((int)in_stack_00001830 + 0x12);
    puVar10[0xc] = *(undefined2 *)(in_stack_00001830 + 5);
    pCVar9 = (LPCSTR)in_stack_00001830[6];
    if (pCVar9 == (LPCSTR)0x0) {
      pwVar16 = puVar10 + 0xe;
    }
    else if ((int)pCVar9 < 0x10000) {
      *pwVar16 = L'\xffff';
      puVar10[0xe] = *(undefined2 *)(in_stack_00001830 + 6);
      pwVar16 = puVar10 + 0xf;
    }
    else {
      iVar14 = lstrlenA(pCVar9);
      MultiByteToWideChar(0,1,(LPCSTR)in_stack_00001830[6],-1,pwVar16,iVar14 + 1);
      puVar10[iVar14 + 0xd] = 0;
      sVar11 = wcslen(pwVar16);
      pwVar16 = puVar10 + sVar11 + 0xe;
    }
    pCVar9 = (LPCSTR)in_stack_00001830[7];
    if (pCVar9 == (LPCSTR)0x0) {
      pwVar16 = pwVar16 + 1;
    }
    else if ((int)pCVar9 < 0x10000) {
      *pwVar16 = L'\xffff';
      pwVar16[1] = *(wchar_t *)(in_stack_00001830 + 7);
      pwVar16 = pwVar16 + 2;
    }
    else {
      iVar14 = lstrlenA(pCVar9);
      MultiByteToWideChar(0,1,(LPCSTR)in_stack_00001830[7],-1,pwVar16,iVar14 + 1);
      pwVar16[iVar14] = L'\0';
      sVar11 = wcslen(pwVar16);
      pwVar16 = pwVar16 + sVar11 + 1;
    }
    MultiByteToWideChar(0,1,lpString,-1,pwVar16,iVar6 + 1);
    pwVar16[iVar6] = L'\0';
    sVar11 = wcslen(pwVar16);
    pwVar16 = pwVar16 + sVar11 + 1;
    if ((*(byte *)(puVar10 + 6) & 0x40) != 0) {
      if (bVar4) {
        *pwVar16 = *(wchar_t *)(in_stack_00001830 + 9);
        pwVar16[1] = *(wchar_t *)((int)in_stack_00001830 + 0x26);
        *(undefined1 *)(pwVar16 + 2) = *(undefined1 *)(in_stack_00001830 + 10);
        *(undefined1 *)((int)pwVar16 + 5) = *(undefined1 *)((int)in_stack_00001830 + 0x29);
      }
      else {
        *pwVar16 = L'\b';
        pwVar16[1] = L'Ɛ';
        *(undefined1 *)(pwVar16 + 2) = 0;
        *(undefined1 *)((int)pwVar16 + 5) = 1;
      }
      MultiByteToWideChar(0,1,pcStack00000010,-1,pwVar16 + 3,iStack00000014 + 1);
      pwVar16[iStack00000014 + 3] = L'\0';
      sVar11 = wcslen(pwVar16 + 3);
      pwVar16 = pwVar16 + sVar11 + 4;
    }
    if (uVar7 != 0) {
      piVar17 = (int *)&stack0x0000002c;
      puVar13 = (undefined4 *)(in_stack_00001834 + 8);
      uStack0000000c = uVar7;
      do {
        pwVar16[0] = L'\0';
        pwVar16[1] = L'\0';
        puVar12 = (undefined4 *)((int)pwVar16 + 3U & 0xfffffffc);
        *puVar12 = puVar13[-2];
        puVar12[1] = puVar13[-1];
        puVar12[2] = *puVar13;
        *(undefined2 *)(puVar12 + 3) = *(undefined2 *)(puVar13 + 1);
        *(undefined2 *)((int)puVar12 + 0xe) = *(undefined2 *)((int)puVar13 + 6);
        *(undefined2 *)(puVar12 + 4) = *(undefined2 *)(puVar13 + 2);
        *(undefined2 *)((int)puVar12 + 0x12) = *(undefined2 *)((int)puVar13 + 10);
        *(undefined2 *)(puVar12 + 5) = *(undefined2 *)(puVar13 + 3);
        pwVar16 = (wchar_t *)(puVar12 + 6);
        if (*piVar17 == 0) {
          *pwVar16 = L'\xffff';
          *(undefined2 *)((int)puVar12 + 0x1a) = *(undefined2 *)(puVar13 + 4);
          pwVar15 = (wchar_t *)(puVar12 + 7);
        }
        else {
          iVar14 = *piVar17 + 1;
          MultiByteToWideChar(0,1,(LPCSTR)piVar17[-1],-1,pwVar16,iVar14);
          *(undefined2 *)((int)puVar12 + iVar14 * 2 + 0x16) = 0;
          sVar11 = wcslen(pwVar16);
          pwVar15 = (wchar_t *)((int)puVar12 + sVar11 * 2 + 0x1a);
        }
        iVar14 = piVar17[2];
        if (iVar14 == 0) {
          *pwVar15 = L'\0';
          pwVar15 = pwVar15 + 1;
        }
        else {
          MultiByteToWideChar(0,1,(LPCSTR)piVar17[1],-1,pwVar15,iVar14 + 1);
          pwVar15[iVar14] = L'\0';
          sVar11 = wcslen(pwVar15);
          pwVar15 = pwVar15 + sVar11 + 1;
        }
        wVar2 = *(wchar_t *)(piVar17 + 4);
        if (wVar2 == L'\0') {
          *pwVar15 = L'\0';
          pwVar16 = pwVar15 + 1;
        }
        else {
          puVar12 = (undefined4 *)piVar17[3];
          *pwVar15 = wVar2;
          pwVar16 = (wchar_t *)((ushort)wVar2 + 2 + (int)pwVar15);
          pwVar15 = pwVar15 + 1;
          for (uVar7 = (uint)((ushort)wVar2 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pwVar15 = *puVar12;
            puVar12 = puVar12 + 1;
            pwVar15 = pwVar15 + 2;
          }
          for (uVar7 = (ushort)wVar2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)pwVar15 = *(undefined1 *)puVar12;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            pwVar15 = (wchar_t *)((int)pwVar15 + 1);
          }
        }
        puVar13 = puVar13 + 10;
        piVar17 = piVar17 + 6;
        uStack0000000c = uStack0000000c - 1;
      } while (uStack0000000c != 0);
    }
    if (in_stack_00001838 != (short *)0x0) {
      *in_stack_00001838 = (short)pwVar16 - (short)puVar10;
    }
    return puVar10;
  }
  return (undefined2 *)0x0;
}


