/* Module: pncrt.dll
   Function: asctime
   Address: 7802de10
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl asctime(tm *_Tm)

{
  int iVar1;
  int iVar2;
  DWORD *pDVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
                    /* 0x2de10  577  asctime */
  pDVar3 = FUN_78009cc0();
  if (pDVar3[0xe] == 0) {
    pvVar4 = malloc(0x1a);
    pDVar3[0xe] = (DWORD)pvVar4;
    pcVar5 = &DAT_780426a8;
    if (pvVar4 == (void *)0x0) goto LAB_7802de3b;
  }
  pcVar5 = (char *)pDVar3[0xe];
LAB_7802de3b:
  iVar1 = _Tm->tm_wday;
  iVar2 = _Tm->tm_mon;
  pcVar7 = pcVar5;
  iVar8 = 0;
  do {
    pcVar6 = pcVar7;
    iVar9 = iVar8 + 1;
    *pcVar6 = "SunMonTueWedThuFriSat"[iVar1 * 3 + iVar8];
    pcVar6[4] = "JanFebMarAprMayJunJulAugSepOctNovDec"[iVar2 * 3 + iVar8];
    pcVar7 = pcVar6 + 1;
    iVar8 = iVar9;
  } while (iVar9 < 3);
  pcVar6[1] = ' ';
  pcVar6[5] = ' ';
  pcVar7 = FUN_7802df00(pcVar6 + 6,_Tm->tm_mday);
  *pcVar7 = ' ';
  pcVar7 = FUN_7802df00(pcVar7 + 1,_Tm->tm_hour);
  *pcVar7 = ':';
  pcVar7 = FUN_7802df00(pcVar7 + 1,_Tm->tm_min);
  *pcVar7 = ':';
  pcVar7 = FUN_7802df00(pcVar7 + 1,_Tm->tm_sec);
  *pcVar7 = ' ';
  pcVar7 = FUN_7802df00(pcVar7 + 1,_Tm->tm_year / 100 + 0x13);
  pcVar7 = FUN_7802df00(pcVar7,_Tm->tm_year % 100);
  *pcVar7 = '\n';
  pcVar7[1] = '\0';
  return pcVar5;
}


