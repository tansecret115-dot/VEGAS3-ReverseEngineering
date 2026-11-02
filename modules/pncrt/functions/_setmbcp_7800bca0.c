/* Module: pncrt.dll
   Function: _setmbcp
   Address: 7800bca0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _setmbcp(int _CodePage)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  _cpinfo local_14;
  
                    /* 0xbca0  436  _setmbcp */
  _lock(0x19);
  CodePage = FUN_7800bed0(_CodePage);
  if (CodePage == DAT_78042400) {
    _unlock(0x19);
    return 0;
  }
  if (CodePage == 0) {
    FUN_7800bf80();
    FUN_7800bfc0();
    _unlock(0x19);
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_7803f420;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &_mbctype;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x7803f430);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_7803f418)[uVar7];
            do {
              pbVar2 = (byte *)((int)&_mbctype + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      DAT_78042844 = 1;
      DAT_78042400 = CodePage;
      DAT_78042404 = FUN_7800bf20(CodePage);
      _DAT_78042408 = *(undefined4 *)(iVar10 + 0x7803f424);
      _DAT_7804240c = *(undefined4 *)(iVar10 + 0x7803f428);
      _DAT_78042410 = *(undefined4 *)(iVar10 + 0x7803f42c);
      goto LAB_7800bdf2;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < s_Assertion_failed___s__file__s__l_7803f510);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 == 1) {
    puVar14 = &_mbctype;
    for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    DAT_78042404 = 0;
    if (local_14.MaxCharSize < 2) {
      DAT_78042844 = 0;
      DAT_78042400 = CodePage;
    }
    else {
      DAT_78042400 = CodePage;
      if (local_14.LeadByte[0] != '\0') {
        pBVar11 = local_14.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            *(byte *)((int)&_mbctype + uVar7 + 1) = *(byte *)((int)&_mbctype + uVar7 + 1) | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      uVar7 = 1;
      do {
        *(byte *)((int)&_mbctype + uVar7 + 1) = *(byte *)((int)&_mbctype + uVar7 + 1) | 8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0xff);
      DAT_78042404 = FUN_7800bf20(CodePage);
      DAT_78042844 = 1;
    }
    _DAT_78042408 = 0;
    _DAT_7804240c = 0;
    _DAT_78042410 = 0;
  }
  else {
    if (DAT_78042414 == 0) {
      _unlock(0x19);
      return -1;
    }
    FUN_7800bf80();
  }
LAB_7800bdf2:
  FUN_7800bfc0();
  _unlock(0x19);
  return 0;
}


