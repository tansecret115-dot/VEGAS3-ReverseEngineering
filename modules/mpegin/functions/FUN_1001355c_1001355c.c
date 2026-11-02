/* Module: mpegin.dll
   Function: FUN_1001355c
   Address: 1001355c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1001355c(int param_1)

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
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10010ee5(0x19);
  CodePage = FUN_10013709(param_1);
  if (CodePage != DAT_1001c6f8) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1001bba0;
LAB_10013599:
      if (*pUVar5 != CodePage) goto code_r0x1001359d;
      local_8 = 0;
      puVar15 = &DAT_1001c820;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1001bbb0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1001bb98)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1001c820 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      _DAT_1001c70c = 1;
      DAT_1001c6f8 = CodePage;
      DAT_1001c924 = FUN_10013753(CodePage);
      DAT_1001c700 = *(undefined4 *)(iVar12 + 0x1001bba4);
      DAT_1001c704 = *(undefined4 *)(iVar12 + 0x1001bba8);
      DAT_1001c708 = *(undefined4 *)(iVar12 + 0x1001bbac);
      goto LAB_100136ed;
    }
    goto LAB_100136e8;
  }
  goto LAB_10013583;
code_r0x1001359d:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1001bc8f < (int)pUVar5) goto code_r0x100135a8;
  goto LAB_10013599;
code_r0x100135a8:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1001c924 = 0;
    puVar15 = &DAT_1001c820;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1001c70c = 0;
      DAT_1001c6f8 = CodePage;
    }
    else {
      DAT_1001c6f8 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1001c820 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1001c820 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1001c924 = FUN_10013753(CodePage);
      _DAT_1001c70c = 1;
    }
    DAT_1001c700 = 0;
    DAT_1001c704 = 0;
    DAT_1001c708 = 0;
  }
  else {
    if (DAT_1001c55c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100136fa;
    }
LAB_100136e8:
    FUN_10013786();
  }
LAB_100136ed:
  FUN_100137af();
LAB_10013583:
  uVar14 = 0;
LAB_100136fa:
  FUN_10010f46(0x19);
  return uVar14;
}


