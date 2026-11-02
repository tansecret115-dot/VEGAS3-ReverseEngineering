/* Module: dsetup.dll
   Function: FUN_004054eb
   Address: 004054eb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004054eb(int param_1)

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
  
  FUN_00404fde(0x19);
  CodePage = FUN_00405698(param_1);
  if (CodePage != DAT_0040adf0) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_0040a4b8;
LAB_00405528:
      if (*pUVar5 != CodePage) goto code_r0x0040552c;
      local_8 = 0;
      puVar15 = &DAT_0040af20;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x40a4c8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_0040a4b0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_0040af20 + uVar8 + 1);
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
      _DAT_0040ae0c = 1;
      DAT_0040adf0 = CodePage;
      DAT_0040b024 = FUN_004056e2(CodePage);
      DAT_0040ae00 = *(undefined4 *)(iVar12 + 0x40a4bc);
      DAT_0040ae04 = *(undefined4 *)(iVar12 + 0x40a4c0);
      DAT_0040ae08 = *(undefined4 *)(iVar12 + 0x40a4c4);
      goto LAB_0040567c;
    }
    goto LAB_00405677;
  }
  goto LAB_00405512;
code_r0x0040552c:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x40a5a7 < (int)pUVar5) goto code_r0x00405537;
  goto LAB_00405528;
code_r0x00405537:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_0040b024 = 0;
    puVar15 = &DAT_0040af20;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_0040ae0c = 0;
      DAT_0040adf0 = CodePage;
    }
    else {
      DAT_0040adf0 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_0040af20 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_0040af20 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_0040b024 = FUN_004056e2(CodePage);
      _DAT_0040ae0c = 1;
    }
    DAT_0040ae00 = 0;
    DAT_0040ae04 = 0;
    DAT_0040ae08 = 0;
  }
  else {
    if (DAT_0040ac68 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_00405689;
    }
LAB_00405677:
    FUN_00405715();
  }
LAB_0040567c:
  FUN_0040573e();
LAB_00405512:
  uVar14 = 0;
LAB_00405689:
  FUN_0040503f(0x19);
  return uVar14;
}


