/* Module: mpgmux.dll
   Function: FUN_10013169
   Address: 10013169
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10013169(int param_1)

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
  
  FUN_1000e78d(0x19);
  CodePage = FUN_10013316(param_1);
  if (CodePage != DAT_1001b2f8) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1001a4a0;
LAB_100131a6:
      if (*pUVar5 != CodePage) goto code_r0x100131aa;
      local_8 = 0;
      puVar15 = &DAT_1001b420;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1001a4b0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1001a498)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1001b420 + uVar8 + 1);
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
      _DAT_1001b30c = 1;
      DAT_1001b2f8 = CodePage;
      DAT_1001b524 = FUN_10013360(CodePage);
      DAT_1001b300 = *(undefined4 *)(iVar12 + 0x1001a4a4);
      DAT_1001b304 = *(undefined4 *)(iVar12 + 0x1001a4a8);
      DAT_1001b308 = *(undefined4 *)(iVar12 + 0x1001a4ac);
      goto LAB_100132fa;
    }
    goto LAB_100132f5;
  }
  goto LAB_10013190;
code_r0x100131aa:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x1001a58f < (int)pUVar5) goto code_r0x100131b5;
  goto LAB_100131a6;
code_r0x100131b5:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1001b524 = 0;
    puVar15 = &DAT_1001b420;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1001b30c = 0;
      DAT_1001b2f8 = CodePage;
    }
    else {
      DAT_1001b2f8 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1001b420 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1001b420 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1001b524 = FUN_10013360(CodePage);
      _DAT_1001b30c = 1;
    }
    DAT_1001b300 = 0;
    DAT_1001b304 = 0;
    DAT_1001b308 = 0;
  }
  else {
    if (DAT_1001b15c == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10013307;
    }
LAB_100132f5:
    FUN_10013393();
  }
LAB_100132fa:
  FUN_100133bc();
LAB_10013190:
  uVar14 = 0;
LAB_10013307:
  FUN_1000e7ee(0x19);
  return uVar14;
}


