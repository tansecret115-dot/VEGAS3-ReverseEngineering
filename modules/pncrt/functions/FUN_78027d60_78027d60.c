/* Module: pncrt.dll
   Function: FUN_78027d60
   Address: 78027d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_78027d60(uchar *param_1)

{
  char cVar1;
  uchar *puVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  char *pcVar8;
  
  puVar2 = _mbsrchr(param_1,0x2e);
  uVar3 = strtoul((char *)(puVar2 + 1),(char **)0x0,0x20);
  if (0x7ffe < uVar3 + 1) {
    return 0xffffffff;
  }
  pcVar4 = _ultoa(uVar3 + 1,(char *)&param_1,0x20);
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  puVar7 = (uchar *)(pcVar8 + -uVar5);
  puVar2 = puVar2 + 1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)puVar2 = *(undefined4 *)puVar7;
    puVar7 = puVar7 + 4;
    puVar2 = puVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  return 0;
}


