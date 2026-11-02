/* Module: pncrt.dll
   Function: _Getmonths
   Address: 78014b30
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _Getmonths(void)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int local_8;
  
                    /* 0x14b30  81  _Getmonths */
  puVar2 = PTR_PTR_7804051c;
  iVar9 = 0;
  iVar8 = 0xc;
  puVar6 = (undefined4 *)(PTR_PTR_7804051c + 0x38);
  do {
    uVar4 = 0xffffffff;
    pcVar3 = (char *)*puVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar3 = (char *)puVar6[0xc];
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar8 = iVar8 + -1;
    iVar9 = ~uVar5 + iVar9 + ~uVar4;
    puVar6 = puVar6 + 1;
  } while (iVar8 != 0);
  pcVar3 = malloc(iVar9 + 1);
  if (pcVar3 != (char *)0x0) {
    local_8 = 0xc;
    pcVar7 = pcVar3;
    puVar6 = (undefined4 *)(puVar2 + 0x68);
    do {
      *pcVar7 = ':';
      uVar4 = 0xffffffff;
      pcVar7 = pcVar7 + 1;
      pcVar10 = (char *)puVar6[-0xc];
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
      pcVar11 = pcVar7;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar10 = pcVar7;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar7[~uVar4 - 1] = ':';
      pcVar7 = pcVar7 + (~uVar4 - 1) + 1;
      pcVar10 = (char *)*puVar6;
      do {
        pcVar11 = pcVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar10 = pcVar11 + -uVar5;
      pcVar11 = pcVar7;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar10 = pcVar7;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + (~uVar4 - 1);
      local_8 = local_8 + -1;
      puVar6 = puVar6 + 1;
    } while (local_8 != 0);
    *pcVar7 = '\0';
  }
  return pcVar3;
}


