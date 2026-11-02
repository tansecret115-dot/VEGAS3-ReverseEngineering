/* Module: pncrt.dll
   Function: FUN_78011fd0
   Address: 78011fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_78011fd0(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined **ppuVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  
  bVar3 = true;
  if (DAT_7803fb54 == (char *)0x0) {
    DAT_7803fb54 = malloc(0x351);
  }
  *DAT_7803fb54 = '\0';
  FUN_780122f0(DAT_7803fb54,3);
  ppuVar9 = &PTR_DAT_7803fb60;
  do {
    uVar6 = 0xffffffff;
    pcVar5 = ";";
    do {
      pcVar12 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar5 = DAT_7803fb54;
    do {
      pcVar11 = pcVar5;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar11 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar1 != '\0');
    pcVar5 = pcVar12 + -uVar6;
    pcVar12 = pcVar11 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
    pbVar10 = ppuVar9[3];
    pbVar4 = *ppuVar9;
    do {
      bVar2 = *pbVar4;
      bVar13 = bVar2 < *pbVar10;
      if (bVar2 != *pbVar10) {
LAB_78012080:
        iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_78012085;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar13 = bVar2 < pbVar10[1];
      if (bVar2 != pbVar10[1]) goto LAB_78012080;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_78012085:
    if (iVar7 != 0) {
      bVar3 = false;
    }
    ppuVar9 = ppuVar9 + 3;
    FUN_780122f0(DAT_7803fb54,3);
    if (0x7803fb8f < (int)ppuVar9) {
      pcVar5 = DAT_7803fb54;
      if (bVar3) {
        free(DAT_7803fb54);
        DAT_7803fb54 = (char *)0x0;
        pcVar5 = PTR_DAT_7803fb6c;
      }
      return pcVar5;
    }
  } while( true );
}


