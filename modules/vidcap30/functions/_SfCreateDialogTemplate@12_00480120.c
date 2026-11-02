/* Module: vidcap30.exe
   Function: _SfCreateDialogTemplate@12
   Address: 00480120
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * _SfCreateDialogTemplate_12(void)

{
  int *piVar1;
  wchar_t wVar2;
  LPCSTR lpString;
  int iVar3;
  int iVar4;
  int iVar5;
  LPCSTR pCVar6;
  int iVar7;
  HGLOBAL hMem;
  byte *pbVar8;
  size_t sVar9;
  undefined4 *puVar10;
  int *piVar11;
  byte *pbVar12;
  wchar_t *pwVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 uStack00000004;
  uint uStack00000008;
  char *pcStack0000000c;
  uint uStack00000014;
  undefined4 in_stack_00001024;
  undefined4 *in_stack_00001028;
  int in_stack_0000102c;
  
                    /* 0x80120  274  _SfCreateDialogTemplate@12 */
  FUN_00579db0();
  lpString = (LPCSTR)in_stack_00001028[6];
  if ((int)lpString < 0x10000) {
    lpString = (LPCSTR)_SfGetString2_8(in_stack_00001024,lpString);
  }
  iVar3 = lstrlenA(lpString);
  pcStack0000000c = (char *)in_stack_00001028[8];
  if (pcStack0000000c == (LPCSTR)0x0) {
    pcStack0000000c = "MS Sans Serif";
  }
  else if ((int)pcStack0000000c < 0x10000) {
    pcStack0000000c = (char *)_SfGetString2_8(in_stack_00001024,pcStack0000000c);
  }
  iVar4 = lstrlenA(pcStack0000000c);
  if (in_stack_00001028[8] == 0) {
    wVar2 = L'\b';
  }
  else {
    wVar2 = *(wchar_t *)(in_stack_00001028 + 7);
  }
  _uStack00000004 = (uint)*(ushort *)(in_stack_00001028 + 2);
  iVar5 = (iVar4 + _uStack00000004 * 9 + iVar3) * 2;
  if (*(short *)((int)in_stack_00001028 + 0x12) == 0) {
    iVar5 = iVar5 + 0x1c;
  }
  else {
    iVar5 = iVar5 + 0x1e;
  }
  if (*(short *)(in_stack_00001028 + 5) == 0) {
    iVar5 = iVar5 + 2;
  }
  else {
    iVar5 = iVar5 + 4;
  }
  if (0xff < _uStack00000004) {
    _uStack00000004 = 0x100;
  }
  iVar14 = 0;
  if (_uStack00000004 != 0) {
    puVar10 = (undefined4 *)&stack0x00000024;
    piVar11 = (int *)(in_stack_0000102c + 0x18);
    uStack00000014 = _uStack00000004;
    do {
      pCVar6 = (LPCSTR)*piVar11;
      if (pCVar6 == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      else if ((int)pCVar6 < 0x10000) {
        pCVar6 = (LPCSTR)_SfGetString2_8(in_stack_00001024,pCVar6);
      }
      puVar10[-1] = pCVar6;
      iVar7 = lstrlenA(pCVar6);
      puVar10[1] = iVar7;
      pCVar6 = (LPCSTR)piVar11[-1];
      *puVar10 = pCVar6;
      if ((int)pCVar6 < 0x10000) {
        iVar7 = 0;
      }
      else {
        iVar7 = lstrlenA(pCVar6);
      }
      puVar10[2] = iVar7;
      piVar1 = puVar10 + 1;
      piVar11 = piVar11 + 7;
      puVar10 = puVar10 + 4;
      uStack00000014 = uStack00000014 - 1;
      iVar14 = iVar14 + 5 + *piVar1 + iVar7;
    } while (uStack00000014 != 0);
  }
  hMem = GlobalAlloc(0x40,iVar5 + 3 + iVar14 * 2 & 0xfffffffc);
  pbVar8 = GlobalLock(hMem);
  if (pbVar8 != (byte *)0x0) {
    *(undefined4 *)pbVar8 = *in_stack_00001028;
    *(undefined4 *)(pbVar8 + 4) = in_stack_00001028[1];
    *(undefined2 *)(pbVar8 + 8) = uStack00000004;
    pbVar12 = pbVar8 + 0x12;
    *(undefined2 *)(pbVar8 + 10) = *(undefined2 *)((int)in_stack_00001028 + 10);
    *(undefined2 *)(pbVar8 + 0xc) = *(undefined2 *)(in_stack_00001028 + 3);
    *(undefined2 *)(pbVar8 + 0xe) = *(undefined2 *)((int)in_stack_00001028 + 0xe);
    *(undefined2 *)(pbVar8 + 0x10) = *(undefined2 *)(in_stack_00001028 + 4);
    if (*(short *)((int)in_stack_00001028 + 0x12) == 0) {
      pbVar12[0] = 0;
      pbVar12[1] = 0;
      pbVar12 = pbVar8 + 0x14;
    }
    else {
      pbVar12[0] = 0xff;
      pbVar12[1] = 0xff;
      *(undefined2 *)(pbVar8 + 0x14) = *(undefined2 *)((int)in_stack_00001028 + 0x12);
      pbVar12 = pbVar8 + 0x16;
    }
    if (*(short *)(in_stack_00001028 + 5) == 0) {
      pbVar12[0] = 0;
      pbVar12[1] = 0;
      pwVar13 = (wchar_t *)(pbVar12 + 2);
    }
    else {
      pbVar12[0] = 0xff;
      pbVar12[1] = 0xff;
      *(undefined2 *)(pbVar12 + 2) = *(undefined2 *)(in_stack_00001028 + 5);
      pwVar13 = (wchar_t *)(pbVar12 + 4);
    }
    MultiByteToWideChar(0,1,lpString,-1,pwVar13,iVar3 + 1);
    pwVar13[iVar3] = L'\0';
    sVar9 = wcslen(pwVar13);
    pwVar13 = pwVar13 + sVar9 + 1;
    if ((*pbVar8 & 0x40) != 0) {
      *pwVar13 = wVar2;
      MultiByteToWideChar(0,1,pcStack0000000c,-1,pwVar13 + 1,iVar4 + 1);
      pwVar13[iVar4 + 1] = L'\0';
      sVar9 = wcslen(pwVar13 + 1);
      pwVar13 = pwVar13 + sVar9 + 2;
    }
    if (_uStack00000004 != 0) {
      piVar11 = (int *)&stack0x0000002c;
      uStack00000008 = _uStack00000004;
      puVar15 = (undefined2 *)(in_stack_0000102c + 8);
      do {
        pwVar13[0] = L'\0';
        pwVar13[1] = L'\0';
        puVar10 = (undefined4 *)((int)pwVar13 + 3U & 0xfffffffc);
        *puVar10 = *(undefined4 *)(puVar15 + -4);
        puVar10[1] = *(undefined4 *)(puVar15 + -2);
        *(undefined2 *)(puVar10 + 2) = *puVar15;
        *(undefined2 *)((int)puVar10 + 10) = puVar15[1];
        *(undefined2 *)(puVar10 + 3) = puVar15[2];
        *(undefined2 *)((int)puVar10 + 0xe) = puVar15[3];
        *(undefined2 *)(puVar10 + 4) = puVar15[4];
        pwVar13 = (wchar_t *)((int)puVar10 + 0x12);
        if (*piVar11 == 0) {
          *pwVar13 = L'\xffff';
          *(undefined2 *)(puVar10 + 5) = puVar15[6];
          pwVar13 = (wchar_t *)((int)puVar10 + 0x16);
        }
        else {
          iVar3 = *piVar11 + 1;
          MultiByteToWideChar(0,1,(LPCSTR)piVar11[-2],-1,pwVar13,iVar3);
          *(undefined2 *)((int)puVar10 + iVar3 * 2 + 0x10) = 0;
          sVar9 = wcslen(pwVar13);
          pwVar13 = (wchar_t *)((int)puVar10 + sVar9 * 2 + 0x14);
        }
        iVar3 = piVar11[-1];
        *pwVar13 = L'\0';
        if (iVar3 != 0) {
          MultiByteToWideChar(0,1,(LPCSTR)piVar11[-3],-1,pwVar13,iVar3 + 1);
          pwVar13[iVar3] = L'\0';
        }
        sVar9 = wcslen(pwVar13);
        puVar15 = puVar15 + 0xe;
        piVar11 = piVar11 + 4;
        pwVar13[sVar9 + 1] = L'\0';
        pwVar13 = pwVar13 + sVar9 + 1 + 1;
        uStack00000008 = uStack00000008 - 1;
      } while (uStack00000008 != 0);
    }
    return pbVar8;
  }
  return (byte *)0x0;
}


