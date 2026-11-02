/* Module: pncrt.dll
   Function: FUN_78009830
   Address: 78009830
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78009830(void)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 *local_4;
  
  iVar9 = 0;
  cVar2 = *DAT_78041e2c;
  pcVar8 = DAT_78041e2c;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar9 = iVar9 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar10 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pcVar10 = pcVar8 + ~uVar5;
    pcVar8 = pcVar8 + ~uVar5;
    cVar2 = *pcVar10;
  }
  puVar3 = malloc(iVar9 * 4 + 4);
  _environ = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    _amsg_exit(9);
  }
  cVar2 = *DAT_78041e2c;
  local_4 = puVar3;
  pcVar8 = DAT_78041e2c;
  do {
    if (cVar2 == '\0') {
      free(DAT_78041e2c);
      DAT_78041e2c = (char *)0x0;
      *puVar3 = 0;
      return;
    }
    uVar5 = 0xffffffff;
    pcVar10 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    if (cVar2 != '=') {
      pvVar4 = malloc(uVar5);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _amsg_exit(9);
      }
      uVar6 = 0xffffffff;
      pcVar10 = pcVar8;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar11 + -uVar6;
      pcVar11 = (char *)*local_4;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      puVar3 = local_4 + 1;
      for (uVar6 = uVar6 & 3; local_4 = puVar3, uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    cVar2 = pcVar8[uVar5];
    pcVar8 = pcVar8 + uVar5;
  } while( true );
}


