/* Module: pncrt.dll
   Function: strerror
   Address: 78023370
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl strerror(int param_1)

{
  char cVar1;
  DWORD *pDVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
                    /* 0x23370  710  strerror */
  pDVar2 = FUN_78009cc0();
  if (pDVar2[9] == 0) {
    pvVar3 = malloc(0x86);
    pDVar2[9] = (DWORD)pvVar3;
    pcVar6 = &DAT_780425d8;
    if (pvVar3 == (void *)0x0) goto LAB_7802339c;
  }
  pcVar6 = (char *)pDVar2[9];
LAB_7802339c:
  if ((param_1 < 0) || (_sys_nerr <= param_1)) {
    param_1 = _sys_nerr;
  }
  uVar4 = 0xffffffff;
  pcVar7 = (&_sys_errlist)[param_1];
  do {
    pcVar8 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar8 + -uVar4;
  pcVar8 = pcVar6;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return pcVar6;
}


