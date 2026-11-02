/* Module: pncrt.dll
   Function: _Getdays
   Address: 78014a40
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _Getdays(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int local_8;
  
                    /* 0x14a40  80  _Getdays */
  puVar7 = (undefined4 *)PTR_PTR_7804051c;
  iVar9 = 0;
  iVar8 = 7;
  puVar5 = (undefined4 *)PTR_PTR_7804051c;
  do {
    uVar3 = 0xffffffff;
    pcVar2 = (char *)puVar5[7];
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar2 = (char *)*puVar5;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar8 = iVar8 + -1;
    iVar9 = ~uVar4 + iVar9 + ~uVar3;
    puVar5 = puVar5 + 1;
  } while (iVar8 != 0);
  pcVar2 = malloc(iVar9 + 1);
  if (pcVar2 != (char *)0x0) {
    local_8 = 7;
    pcVar6 = pcVar2;
    do {
      *pcVar6 = ':';
      uVar3 = 0xffffffff;
      pcVar6 = pcVar6 + 1;
      pcVar10 = (char *)*puVar7;
      do {
        pcVar11 = pcVar10;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar10 = pcVar11 + -uVar3;
      pcVar11 = pcVar6;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar10 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar4 = 0xffffffff;
      pcVar6[~uVar3 - 1] = ':';
      pcVar6 = pcVar6 + (~uVar3 - 1) + 1;
      pcVar10 = (char *)puVar7[7];
      do {
        pcVar11 = pcVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar10 = pcVar11 + -uVar4;
      pcVar11 = pcVar6;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar10 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + (~uVar3 - 1);
      local_8 = local_8 + -1;
      puVar7 = puVar7 + 1;
    } while (local_8 != 0);
    *pcVar6 = '\0';
  }
  return pcVar2;
}


