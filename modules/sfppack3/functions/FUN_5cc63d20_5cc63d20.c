/* Module: sfppack3.dll
   Function: FUN_5cc63d20
   Address: 5cc63d20
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * FUN_5cc63d20(void)

{
  wchar_t wVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  HGLOBAL hMem;
  byte *pbVar5;
  size_t sVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  byte *pbVar10;
  wchar_t *pwVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined2 uStack00000004;
  uint uStack00000008;
  char *pcStack0000000c;
  LPCSTR pCStack00000010;
  uint uStack00000014;
  int iStack00000018;
  int iStack0000001c;
  undefined4 *in_stack_00001024;
  undefined4 *in_stack_00001028;
  int in_stack_0000102c;
  
  FUN_5cc845a0();
  pCStack00000010 = (LPCSTR)in_stack_00001028[6];
  if ((int)pCStack00000010 < 0x10000) {
    pCStack00000010 = FUN_5cc4e750(in_stack_00001024,(uint)pCStack00000010);
  }
  iVar2 = lstrlenA(pCStack00000010);
  pcStack0000000c = (char *)in_stack_00001028[8];
  iStack00000018 = iVar2;
  if (pcStack0000000c == (LPCSTR)0x0) {
    pcStack0000000c = "MS Sans Serif";
  }
  else if ((int)pcStack0000000c < 0x10000) {
    pcStack0000000c = FUN_5cc4e750(in_stack_00001024,(uint)pcStack0000000c);
  }
  iStack0000001c = lstrlenA(pcStack0000000c);
  if (in_stack_00001028[8] == 0) {
    wVar1 = L'\b';
  }
  else {
    wVar1 = *(wchar_t *)(in_stack_00001028 + 7);
  }
  _uStack00000004 = (uint)*(ushort *)(in_stack_00001028 + 2);
  iVar2 = (iStack0000001c + _uStack00000004 * 9 + iVar2) * 2;
  if (*(short *)((int)in_stack_00001028 + 0x12) == 0) {
    iVar2 = iVar2 + 0x1c;
  }
  else {
    iVar2 = iVar2 + 0x1e;
  }
  if (*(short *)(in_stack_00001028 + 5) == 0) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 4;
  }
  if (0xff < _uStack00000004) {
    _uStack00000004 = 0x100;
  }
  iVar12 = 0;
  if (_uStack00000004 != 0) {
    puVar7 = (undefined4 *)&stack0x00000024;
    puVar9 = (uint *)(in_stack_0000102c + 0x18);
    uStack00000014 = _uStack00000004;
    do {
      pCVar3 = (LPCSTR)*puVar9;
      if (pCVar3 == (LPCSTR)0x0) {
        pCVar3 = "";
      }
      else if ((int)pCVar3 < 0x10000) {
        pCVar3 = FUN_5cc4e750(in_stack_00001024,(uint)pCVar3);
      }
      puVar7[-1] = pCVar3;
      iVar4 = lstrlenA(pCVar3);
      puVar7[1] = iVar4;
      pCVar3 = (LPCSTR)puVar9[-1];
      *puVar7 = pCVar3;
      if ((int)pCVar3 < 0x10000) {
        iVar4 = 0;
      }
      else {
        iVar4 = lstrlenA(pCVar3);
      }
      puVar7[2] = iVar4;
      piVar8 = puVar7 + 1;
      puVar9 = puVar9 + 7;
      puVar7 = puVar7 + 4;
      uStack00000014 = uStack00000014 - 1;
      iVar12 = iVar12 + 5 + *piVar8 + iVar4;
    } while (uStack00000014 != 0);
  }
  hMem = GlobalAlloc(0x40,iVar2 + 3 + iVar12 * 2 & 0xfffffffc);
  pbVar5 = GlobalLock(hMem);
  iVar2 = iStack00000018;
  if (pbVar5 != (byte *)0x0) {
    *(undefined4 *)pbVar5 = *in_stack_00001028;
    *(undefined4 *)(pbVar5 + 4) = in_stack_00001028[1];
    *(undefined2 *)(pbVar5 + 8) = uStack00000004;
    pbVar10 = pbVar5 + 0x12;
    *(undefined2 *)(pbVar5 + 10) = *(undefined2 *)((int)in_stack_00001028 + 10);
    *(undefined2 *)(pbVar5 + 0xc) = *(undefined2 *)(in_stack_00001028 + 3);
    *(undefined2 *)(pbVar5 + 0xe) = *(undefined2 *)((int)in_stack_00001028 + 0xe);
    *(undefined2 *)(pbVar5 + 0x10) = *(undefined2 *)(in_stack_00001028 + 4);
    if (*(short *)((int)in_stack_00001028 + 0x12) == 0) {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10 = pbVar5 + 0x14;
    }
    else {
      pbVar10[0] = 0xff;
      pbVar10[1] = 0xff;
      *(undefined2 *)(pbVar5 + 0x14) = *(undefined2 *)((int)in_stack_00001028 + 0x12);
      pbVar10 = pbVar5 + 0x16;
    }
    if (*(short *)(in_stack_00001028 + 5) == 0) {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pwVar11 = (wchar_t *)(pbVar10 + 2);
    }
    else {
      pbVar10[0] = 0xff;
      pbVar10[1] = 0xff;
      *(undefined2 *)(pbVar10 + 2) = *(undefined2 *)(in_stack_00001028 + 5);
      pwVar11 = (wchar_t *)(pbVar10 + 4);
    }
    MultiByteToWideChar(0,1,pCStack00000010,-1,pwVar11,iStack00000018 + 1);
    pwVar11[iVar2] = L'\0';
    sVar6 = wcslen(pwVar11);
    pwVar11 = pwVar11 + sVar6 + 1;
    if ((*pbVar5 & 0x40) != 0) {
      iVar2 = iStack0000001c + 1;
      *pwVar11 = wVar1;
      MultiByteToWideChar(0,1,pcStack0000000c,-1,pwVar11 + 1,iVar2);
      pwVar11[iVar2] = L'\0';
      sVar6 = wcslen(pwVar11 + 1);
      pwVar11 = pwVar11 + sVar6 + 2;
    }
    if (0 < (int)_uStack00000004) {
      piVar8 = (int *)&stack0x0000002c;
      uStack00000008 = _uStack00000004;
      puVar13 = (undefined2 *)(in_stack_0000102c + 8);
      do {
        pwVar11[0] = L'\0';
        pwVar11[1] = L'\0';
        puVar7 = (undefined4 *)((int)pwVar11 + 3U & 0xfffffffc);
        *puVar7 = *(undefined4 *)(puVar13 + -4);
        puVar7[1] = *(undefined4 *)(puVar13 + -2);
        *(undefined2 *)(puVar7 + 2) = *puVar13;
        *(undefined2 *)((int)puVar7 + 10) = puVar13[1];
        *(undefined2 *)(puVar7 + 3) = puVar13[2];
        *(undefined2 *)((int)puVar7 + 0xe) = puVar13[3];
        *(undefined2 *)(puVar7 + 4) = puVar13[4];
        pwVar11 = (wchar_t *)((int)puVar7 + 0x12);
        if (*piVar8 == 0) {
          *pwVar11 = L'\xffff';
          *(undefined2 *)(puVar7 + 5) = puVar13[6];
          pwVar11 = (wchar_t *)((int)puVar7 + 0x16);
        }
        else {
          iVar2 = *piVar8 + 1;
          MultiByteToWideChar(0,1,(LPCSTR)piVar8[-2],-1,pwVar11,iVar2);
          *(undefined2 *)((int)puVar7 + iVar2 * 2 + 0x10) = 0;
          sVar6 = wcslen(pwVar11);
          pwVar11 = (wchar_t *)((int)puVar7 + sVar6 * 2 + 0x14);
        }
        iVar2 = piVar8[-1];
        *pwVar11 = L'\0';
        if (iVar2 != 0) {
          MultiByteToWideChar(0,1,(LPCSTR)piVar8[-3],-1,pwVar11,iVar2 + 1);
          pwVar11[iVar2] = L'\0';
        }
        sVar6 = wcslen(pwVar11);
        puVar13 = puVar13 + 0xe;
        piVar8 = piVar8 + 4;
        pwVar11[sVar6 + 1] = L'\0';
        pwVar11 = pwVar11 + sVar6 + 1 + 1;
        uStack00000008 = uStack00000008 - 1;
      } while (uStack00000008 != 0);
    }
    return pbVar5;
  }
  return (byte *)0x0;
}


