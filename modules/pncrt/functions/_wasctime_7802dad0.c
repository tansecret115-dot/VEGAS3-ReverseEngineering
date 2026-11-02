/* Module: pncrt.dll
   Function: _wasctime
   Address: 7802dad0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wasctime(tm *_Tm)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  DWORD *pDVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  short *psVar8;
  int iVar9;
  
                    /* 0x2dad0  494  _wasctime */
  pDVar4 = FUN_78009cc0();
  if (pDVar4[0xf] == 0) {
    pvVar5 = malloc(0x34);
    pDVar4[0xf] = (DWORD)pvVar5;
    pwVar6 = &DAT_78042670;
    if (pvVar5 == (void *)0x0) goto LAB_7802dafb;
  }
  pwVar6 = (wchar_t *)pDVar4[0xf];
LAB_7802dafb:
  iVar1 = _Tm->tm_wday;
  iVar2 = _Tm->tm_mon;
  iVar9 = 0;
  pwVar3 = pwVar6;
  do {
    pwVar7 = pwVar3;
    *pwVar7 = (short)"SunMonTueWedThuFriSat"[iVar1 * 3 + iVar9];
    pwVar7[4] = (short)"JanFebMarAprMayJunJulAugSepOctNovDec"[iVar2 * 3 + iVar9];
    iVar9 = iVar9 + 1;
    pwVar3 = pwVar7 + 1;
  } while (iVar9 < 3);
  pwVar7[1] = L' ';
  pwVar7[5] = L' ';
  psVar8 = FUN_7802dbe0(pwVar7 + 6,_Tm->tm_mday);
  *psVar8 = 0x20;
  psVar8 = FUN_7802dbe0(psVar8 + 1,_Tm->tm_hour);
  *psVar8 = 0x3a;
  psVar8 = FUN_7802dbe0(psVar8 + 1,_Tm->tm_min);
  *psVar8 = 0x3a;
  psVar8 = FUN_7802dbe0(psVar8 + 1,_Tm->tm_sec);
  *psVar8 = 0x20;
  psVar8 = FUN_7802dbe0(psVar8 + 1,_Tm->tm_year / 100 + 0x13);
  psVar8 = FUN_7802dbe0(psVar8,_Tm->tm_year % 100);
  *psVar8 = 10;
  psVar8[1] = 0;
  return pwVar6;
}


