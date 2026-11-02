/* Module: rmbe3260.dll
   Function: FUN_660018e0
   Address: 660018e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_660018e0(int param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  bool bVar13;
  
  uVar7 = 0xffffffff;
  pcVar10 = PTR_s_sipr2_sipr0_sipr1_sipr3_cook7_co_6606c097_1_6606c050;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pbVar3 = operator_new(~uVar7);
  uVar7 = 0xffffffff;
  pcVar10 = PTR_s_sipr2_sipr0_sipr1_sipr3_cook7_co_6606c097_1_6606c050;
  do {
    pcVar11 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pbVar5 = (byte *)(pcVar11 + -uVar7);
  pbVar12 = pbVar3;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar12 = pbVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar12 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar12 = pbVar12 + 1;
  }
  pbVar5 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    while (*pbVar5 != 0) {
      iVar4 = isspace((int)(char)*pbVar5);
      pbVar12 = pbVar5;
      while (iVar4 != 0) {
        pbVar5 = pbVar12 + 1;
        pbVar12 = pbVar12 + 1;
        iVar4 = isspace((int)(char)*pbVar5);
      }
      pbVar5 = (byte *)strchr((char *)pbVar12,0x3b);
      if (pbVar5 != (byte *)0x0) {
        *pbVar5 = 0;
        pbVar5 = pbVar5 + 1;
      }
      pbVar9 = &DAT_6606c19c;
      pbVar6 = pbVar12;
      do {
        bVar2 = *pbVar6;
        bVar13 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_660019aa:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_660019af;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar13 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_660019aa;
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_660019af:
      if (iVar4 == 0) {
LAB_660019e7:
        bVar13 = true;
      }
      else {
        pbVar9 = &DAT_6606c194;
        pbVar6 = pbVar12;
        do {
          bVar2 = *pbVar6;
          bVar13 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_660019de:
            iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_660019e3;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar13 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_660019de;
          pbVar6 = pbVar6 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_660019e3:
        if (iVar4 == 0) goto LAB_660019e7;
        bVar13 = false;
      }
      if (!bVar13) {
        FUN_660143a0((undefined4 *)(param_1 + 0x182 + *(int *)(param_1 + 0x402) * 8),
                     (undefined4 *)pbVar12);
        *(int *)(param_1 + 0x402) = *(int *)(param_1 + 0x402) + 1;
      }
      if ((0x4f < *(uint *)(param_1 + 0x402)) || (pbVar5 == (byte *)0x0)) break;
    }
  }
  operator_delete(pbVar3);
  return 0;
}


