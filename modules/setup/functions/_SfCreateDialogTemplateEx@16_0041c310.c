/* Module: Setup.exe
   Function: _SfCreateDialogTemplateEx@16
   Address: 0041c310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined2 * _SfCreateDialogTemplateEx_16(void)

{
  wchar_t wVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  LPCSTR pCVar5;
  int iVar6;
  HGLOBAL hMem;
  undefined2 *puVar7;
  size_t sVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int *piVar15;
  uint *puVar16;
  int iStack00000004;
  int *piStack00000008;
  uint uStack0000000c;
  char *pcStack00000010;
  int iStack00000014;
  LPCSTR pCStack00000018;
  undefined2 uStack0000001c;
  int iStack00000020;
  uint uStack00000024;
  undefined4 *in_stack_0000182c;
  undefined4 *in_stack_00001830;
  int in_stack_00001834;
  short *in_stack_00001838;
  
                    /* 0x1c310  91  _SfCreateDialogTemplateEx@16 */
  FUN_004321a0();
  pCStack00000018 = (LPCSTR)in_stack_00001830[8];
  if ((int)pCStack00000018 < 0x10000) {
    pCStack00000018 = _SfGetString2_8(in_stack_0000182c,(uint)pCStack00000018);
  }
  iVar4 = lstrlenA(pCStack00000018);
  pCVar5 = (LPCSTR)in_stack_00001830[0xb];
  iVar12 = 0;
  iStack00000020 = iVar4;
  if (pCVar5 == (LPCSTR)0x0) {
    pcStack00000010 = "MS Sans Serif";
    iStack00000014 = lstrlenA("MS Sans Serif");
    piStack00000008 = (int *)0x0;
  }
  else {
    if ((int)pCVar5 < 0x10000) {
      pCVar5 = _SfGetString2_8(in_stack_0000182c,(uint)pCVar5);
    }
    pcStack00000010 = pCVar5;
    iStack00000014 = lstrlenA(pCVar5);
    piStack00000008 = (int *)0x1;
  }
  iVar6 = (iStack00000014 + (uint)*(ushort *)(in_stack_00001830 + 3) * 0xb + iVar4) * 2;
  iVar4 = iVar6 + 0x2a;
  pCVar5 = (LPCSTR)in_stack_00001830[6];
  iStack00000004 = iVar4;
  if (pCVar5 != (LPCSTR)0x0) {
    if ((int)pCVar5 < 0x10000) {
      iStack00000004 = iVar6 + 0x2c;
    }
    else {
      iVar6 = lstrlenA(pCVar5);
      iStack00000004 = iVar4 + iVar6 * 2;
    }
  }
  pCVar5 = (LPCSTR)in_stack_00001830[7];
  iVar4 = 0;
  if (pCVar5 != (LPCSTR)0x0) {
    if ((int)pCVar5 < 0x10000) {
      iVar4 = iStack00000004 + 2;
      iStack00000004 = iVar4;
    }
    else {
      iVar4 = lstrlenA(pCVar5);
      iVar4 = iStack00000004 + iVar4 * 2;
      iStack00000004 = iVar4;
    }
  }
  _uStack0000001c = CONCAT22((short)((uint)iVar4 >> 0x10),*(ushort *)(in_stack_00001830 + 3));
  if (0xff < *(ushort *)(in_stack_00001830 + 3)) {
    _uStack0000001c = 0x100;
  }
  iVar4 = 0;
  uStack0000000c = _uStack0000001c & 0xffff;
  uStack00000024 = uStack0000000c;
  if (uStack0000000c != 0) {
    puVar11 = (undefined4 *)&stack0x00000030;
    puVar16 = (uint *)(in_stack_00001834 + 0x1c);
    do {
      pCVar5 = (LPCSTR)puVar16[-1];
      puVar11[-2] = pCVar5;
      if ((int)pCVar5 < 0x10000) {
        iVar6 = 0;
      }
      else {
        iVar6 = lstrlenA(pCVar5);
      }
      puVar11[-1] = iVar6;
      pCVar5 = (LPCSTR)*puVar16;
      if (pCVar5 == (LPCSTR)0x0) {
        pCVar5 = "";
      }
      else if ((int)pCVar5 < 0x10000) {
        pCVar5 = _SfGetString2_8(in_stack_0000182c,(uint)pCVar5);
      }
      *puVar11 = pCVar5;
      iVar6 = lstrlenA(pCVar5);
      puVar11[1] = iVar6;
      iVar4 = iVar4 + 5 + puVar11[-1] + iVar6;
      uVar3 = (ushort)puVar16[1];
      if (uVar3 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = puVar16[2];
      }
      puVar11[2] = uVar10;
      if (puVar16[2] == 0) {
        uVar3 = 0;
      }
      *(ushort *)(puVar11 + 3) = uVar3;
      puVar16 = puVar16 + 10;
      puVar11 = puVar11 + 6;
      iVar12 = uVar3 + 2 + iVar12;
      uStack0000000c = uStack0000000c - 1;
    } while (uStack0000000c != 0);
  }
  hMem = GlobalAlloc(0x40,iVar12 + iVar4 * 2 + 3 + iStack00000004 & 0xfffffffc);
  puVar7 = GlobalLock(hMem);
  if (puVar7 != (undefined2 *)0x0) {
    *puVar7 = 1;
    puVar7[1] = 0xffff;
    pwVar14 = puVar7 + 0xd;
    *(undefined4 *)(puVar7 + 2) = *in_stack_00001830;
    *(undefined4 *)(puVar7 + 4) = in_stack_00001830[1];
    uVar2 = in_stack_00001830[2];
    puVar7[8] = uStack0000001c;
    *(undefined4 *)(puVar7 + 6) = uVar2;
    puVar7[9] = *(undefined2 *)((int)in_stack_00001830 + 0xe);
    puVar7[10] = *(undefined2 *)(in_stack_00001830 + 4);
    puVar7[0xb] = *(undefined2 *)((int)in_stack_00001830 + 0x12);
    puVar7[0xc] = *(undefined2 *)(in_stack_00001830 + 5);
    pCVar5 = (LPCSTR)in_stack_00001830[6];
    if (pCVar5 == (LPCSTR)0x0) {
      pwVar14 = puVar7 + 0xe;
    }
    else if ((int)pCVar5 < 0x10000) {
      *pwVar14 = L'\xffff';
      puVar7[0xe] = *(undefined2 *)(in_stack_00001830 + 6);
      pwVar14 = puVar7 + 0xf;
    }
    else {
      iVar12 = lstrlenA(pCVar5);
      MultiByteToWideChar(0,1,(LPCSTR)in_stack_00001830[6],-1,pwVar14,iVar12 + 1);
      puVar7[iVar12 + 0xd] = 0;
      sVar8 = wcslen(pwVar14);
      pwVar14 = puVar7 + sVar8 + 0xe;
    }
    pCVar5 = (LPCSTR)in_stack_00001830[7];
    if (pCVar5 == (LPCSTR)0x0) {
      pwVar14 = pwVar14 + 1;
    }
    else if ((int)pCVar5 < 0x10000) {
      *pwVar14 = L'\xffff';
      pwVar14[1] = *(wchar_t *)(in_stack_00001830 + 7);
      pwVar14 = pwVar14 + 2;
    }
    else {
      iVar12 = lstrlenA(pCVar5);
      MultiByteToWideChar(0,1,(LPCSTR)in_stack_00001830[7],-1,pwVar14,iVar12 + 1);
      pwVar14[iVar12] = L'\0';
      sVar8 = wcslen(pwVar14);
      pwVar14 = pwVar14 + sVar8 + 1;
    }
    iVar12 = iStack00000020;
    MultiByteToWideChar(0,1,pCStack00000018,-1,pwVar14,iStack00000020 + 1);
    pwVar14[iVar12] = L'\0';
    sVar8 = wcslen(pwVar14);
    iVar12 = iStack00000014;
    pwVar14 = pwVar14 + sVar8 + 1;
    if ((*(byte *)(puVar7 + 6) & 0x40) != 0) {
      if (piStack00000008 == (int *)0x0) {
        *pwVar14 = L'\b';
        pwVar14[1] = L'Ɛ';
        *(undefined1 *)(pwVar14 + 2) = 0;
        *(undefined1 *)((int)pwVar14 + 5) = 1;
      }
      else {
        *pwVar14 = *(wchar_t *)(in_stack_00001830 + 9);
        pwVar14[1] = *(wchar_t *)((int)in_stack_00001830 + 0x26);
        *(undefined1 *)(pwVar14 + 2) = *(undefined1 *)(in_stack_00001830 + 10);
        *(undefined1 *)((int)pwVar14 + 5) = *(undefined1 *)((int)in_stack_00001830 + 0x29);
      }
      MultiByteToWideChar(0,1,pcStack00000010,-1,pwVar14 + 3,iStack00000014 + 1);
      pwVar14[iVar12 + 3] = L'\0';
      sVar8 = wcslen(pwVar14 + 3);
      pwVar14 = pwVar14 + sVar8 + 4;
    }
    if (0 < (int)uStack00000024) {
      piVar15 = (int *)&stack0x0000002c;
      uStack0000000c = uStack00000024;
      puVar11 = (undefined4 *)(in_stack_00001834 + 8);
      do {
        pwVar14[0] = L'\0';
        pwVar14[1] = L'\0';
        puVar9 = (undefined4 *)((int)pwVar14 + 3U & 0xfffffffc);
        *puVar9 = puVar11[-2];
        puVar9[1] = puVar11[-1];
        puVar9[2] = *puVar11;
        *(undefined2 *)(puVar9 + 3) = *(undefined2 *)(puVar11 + 1);
        *(undefined2 *)((int)puVar9 + 0xe) = *(undefined2 *)((int)puVar11 + 6);
        *(undefined2 *)(puVar9 + 4) = *(undefined2 *)(puVar11 + 2);
        *(undefined2 *)((int)puVar9 + 0x12) = *(undefined2 *)((int)puVar11 + 10);
        *(undefined2 *)(puVar9 + 5) = *(undefined2 *)(puVar11 + 3);
        pwVar14 = (wchar_t *)(puVar9 + 6);
        piStack00000008 = piVar15;
        if (*piVar15 == 0) {
          *pwVar14 = L'\xffff';
          *(undefined2 *)((int)puVar9 + 0x1a) = *(undefined2 *)(puVar11 + 4);
          pwVar13 = (wchar_t *)(puVar9 + 7);
        }
        else {
          iVar12 = *piVar15 + 1;
          MultiByteToWideChar(0,1,(LPCSTR)piVar15[-1],-1,pwVar14,iVar12);
          *(undefined2 *)((int)puVar9 + iVar12 * 2 + 0x16) = 0;
          sVar8 = wcslen(pwVar14);
          pwVar13 = (wchar_t *)((int)puVar9 + sVar8 * 2 + 0x1a);
        }
        iVar12 = piVar15[2];
        if (iVar12 == 0) {
          *pwVar13 = L'\0';
          pwVar13 = pwVar13 + 1;
        }
        else {
          MultiByteToWideChar(0,1,(LPCSTR)piVar15[1],-1,pwVar13,iVar12 + 1);
          pwVar13[iVar12] = L'\0';
          sVar8 = wcslen(pwVar13);
          pwVar13 = pwVar13 + sVar8 + 1;
        }
        wVar1 = *(wchar_t *)(piVar15 + 4);
        if (wVar1 == L'\0') {
          *pwVar13 = L'\0';
          pwVar14 = pwVar13 + 1;
          piStack00000008 = piVar15;
        }
        else {
          puVar9 = (undefined4 *)piVar15[3];
          *pwVar13 = wVar1;
          pwVar14 = (wchar_t *)((ushort)wVar1 + 2 + (int)pwVar13);
          pwVar13 = pwVar13 + 1;
          for (uVar10 = (uint)((ushort)wVar1 >> 2); uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pwVar13 = *puVar9;
            puVar9 = puVar9 + 1;
            pwVar13 = pwVar13 + 2;
          }
          for (uVar10 = (ushort)wVar1 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)pwVar13 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            pwVar13 = (wchar_t *)((int)pwVar13 + 1);
          }
        }
        puVar11 = puVar11 + 10;
        piVar15 = piStack00000008 + 6;
        uStack0000000c = uStack0000000c - 1;
      } while (uStack0000000c != 0);
    }
    if (in_stack_00001838 != (short *)0x0) {
      *in_stack_00001838 = (short)pwVar14 - (short)puVar7;
    }
    return puVar7;
  }
  return (undefined2 *)0x0;
}


