/* Module: pncrt.dll
   Function: FUN_78015b90
   Address: 78015b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78015b90(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  DWORD DVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  
  _lock(0xc);
  DAT_78042518 = 0;
  DAT_78040530 = 0xffffffff;
  DAT_78040520 = 0xffffffff;
  pbVar3 = (byte *)FUN_78016750("TZ");
  if (pbVar3 == (byte *)0x0) {
    _unlock(0xc);
    DVar4 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_78042520);
    if (DVar4 == 0xffffffff) {
      return;
    }
    DAT_78042518 = 1;
    _timezone = DAT_78042520 * 0x3c;
    if (DAT_78042566 != 0) {
      _timezone = _timezone + DAT_78042574 * 0x3c;
    }
    if ((DAT_780425ba == 0) || (DAT_780425c8 == 0)) {
      _daylight = 0;
      _dstbias = 0;
    }
    else {
      _daylight = 1;
      _dstbias = (DAT_780425c8 - DAT_78042574) * 0x3c;
    }
    wcstombs(_tzname,(wchar_t *)&DAT_78042524,0x40);
    wcstombs(PTR_DAT_7803fb24,(wchar_t *)&DAT_78042578,0x40);
    PTR_DAT_7803fb24[0x3f] = 0;
    _tzname[0x3f] = 0;
    return;
  }
  if (*pbVar3 != 0) {
    pbVar9 = pbVar3;
    pbVar10 = DAT_780425cc;
    if (DAT_780425cc != (byte *)0x0) {
      do {
        bVar1 = *pbVar9;
        bVar11 = bVar1 < *pbVar10;
        if (bVar1 != *pbVar10) {
LAB_78015ce7:
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_78015cec;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar11 = bVar1 < pbVar10[1];
        if (bVar1 != pbVar10[1]) goto LAB_78015ce7;
        pbVar9 = pbVar9 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_78015cec:
      if (iVar5 == 0) goto LAB_78015e59;
    }
    free(DAT_780425cc);
    uVar7 = 0xffffffff;
    pbVar9 = pbVar3;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
    DAT_780425cc = malloc(~uVar7);
    if (DAT_780425cc != (byte *)0x0) {
      uVar7 = 0xffffffff;
      pbVar9 = pbVar3;
      do {
        pbVar10 = pbVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        pbVar9 = pbVar10;
      } while (bVar1 != 0);
      uVar7 = ~uVar7;
      pbVar9 = pbVar10 + -uVar7;
      pbVar10 = DAT_780425cc;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        pbVar10 = pbVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar10 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar10 = pbVar10 + 1;
      }
      _unlock(0xc);
      strncpy(_tzname,(char *)pbVar3,3);
      pbVar9 = pbVar3 + 3;
      _tzname[3] = 0;
      bVar1 = *pbVar9;
      if (bVar1 == 0x2d) {
        pbVar9 = pbVar3 + 4;
      }
      lVar6 = atol((char *)pbVar9);
      _timezone = lVar6 * 0xe10;
      for (; (bVar2 = *pbVar9, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
          pbVar9 = pbVar9 + 1) {
      }
      if (*pbVar9 == 0x3a) {
        pbVar9 = pbVar9 + 1;
        lVar6 = atol((char *)pbVar9);
        _timezone = _timezone + lVar6 * 0x3c;
        bVar2 = *pbVar9;
        while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
          pbVar3 = pbVar9 + 1;
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar3;
        }
        if (*pbVar9 == 0x3a) {
          pbVar9 = pbVar9 + 1;
          lVar6 = atol((char *)pbVar9);
          _timezone = _timezone + lVar6;
          bVar2 = *pbVar9;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            pbVar3 = pbVar9 + 1;
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar3;
          }
        }
      }
      if (bVar1 == 0x2d) {
        _timezone = -_timezone;
      }
      _daylight = (int)(char)*pbVar9;
      if (_daylight == 0) {
        *PTR_DAT_7803fb24 = 0;
        return;
      }
      strncpy(PTR_DAT_7803fb24,(char *)pbVar9,3);
      PTR_DAT_7803fb24[3] = 0;
      return;
    }
  }
LAB_78015e59:
  _unlock(0xc);
  return;
}


