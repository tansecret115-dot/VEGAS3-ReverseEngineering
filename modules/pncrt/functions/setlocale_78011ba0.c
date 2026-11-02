/* Module: pncrt.dll
   Function: setlocale
   Address: 78011ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl setlocale(int _Category,char *_Locale)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined **ppuVar10;
  byte *pbVar11;
  size_t sVar12;
  undefined4 *puVar13;
  bool bVar14;
  int local_90;
  int local_88;
  byte local_84 [132];
  
                    /* 0x11ba0  695  setlocale */
  iVar9 = 0;
  if ((_Category < 0) || (5 < _Category)) {
    return (char *)0x0;
  }
  _lock(0x13);
  __setlc_active = __setlc_active + 1;
  while (__unguarded_readlc_active != 0) {
    Sleep(1);
  }
  if (_Category != 0) {
    if (_Locale == (char *)0x0) {
      pcVar4 = (&DAT_7803fb54)[_Category * 3];
    }
    else {
      pcVar4 = (char *)FUN_78011e70(_Category,(byte *)_Locale);
    }
    goto LAB_78011e39;
  }
  bVar3 = true;
  local_90 = 0;
  if (_Locale != (char *)0x0) {
    if (((*_Locale == 'L') && (_Locale[1] == 'C')) && (_Locale[2] == '_')) {
      pcVar4 = strpbrk(_Locale,"=;");
      while (((pcVar4 != (char *)0x0 && (sVar12 = (int)pcVar4 - (int)_Locale, sVar12 != 0)) &&
             (*pcVar4 != ';'))) {
        local_88 = 1;
        ppuVar10 = &PTR_s_LC_COLLATE_7803fb5c;
        do {
          iVar9 = strncmp(*ppuVar10,_Locale,sVar12);
          if (iVar9 == 0) {
            uVar8 = 0xffffffff;
            pcVar5 = *ppuVar10;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            if (sVar12 == ~uVar8 - 1) break;
          }
          ppuVar10 = ppuVar10 + 3;
          local_88 = local_88 + 1;
        } while ((int)ppuVar10 < 0x7803fb8d);
        pcVar4 = pcVar4 + 1;
        sVar12 = strcspn(pcVar4,";");
        if ((sVar12 == 0) && (*pcVar4 != ';')) break;
        if (local_88 < 6) {
          strncpy((char *)local_84,pcVar4,sVar12);
          local_84[sVar12] = 0;
          iVar9 = FUN_78011e70(local_88,local_84);
          if (iVar9 != 0) {
            local_90 = local_90 + 1;
          }
        }
        if ((pcVar4[sVar12] == '\0') || (_Locale = pcVar4 + sVar12 + 1, pcVar4[sVar12 + 1] == '\0'))
        goto LAB_78011e26;
        pcVar4 = strpbrk(_Locale,"=;");
      }
      _unlock(0x13);
      __setlc_active = __setlc_active + -1;
      return (char *)0x0;
    }
    pcVar5 = FUN_780120f0((byte *)_Locale,(char *)local_84,(undefined4 *)0x0,(uint *)0x0);
    pcVar4 = (char *)0x0;
    if (pcVar5 == (char *)0x0) goto LAB_78011e39;
    puVar13 = &DAT_7803fb54;
    do {
      if ((void **)puVar13 != &DAT_7803fb54) {
        pbVar11 = (byte *)*puVar13;
        pbVar6 = local_84;
        do {
          bVar2 = *pbVar6;
          bVar14 = bVar2 < *pbVar11;
          if (bVar2 != *pbVar11) {
LAB_78011dcb:
            iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_78011dd0;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar14 = bVar2 < pbVar11[1];
          if (bVar2 != pbVar11[1]) goto LAB_78011dcb;
          pbVar6 = pbVar6 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_78011dd0:
        if ((iVar7 == 0) || (iVar7 = FUN_78011e70(iVar9,local_84), iVar7 != 0)) {
          local_90 = local_90 + 1;
        }
        else {
          bVar3 = false;
        }
      }
      puVar13 = puVar13 + 3;
      iVar9 = iVar9 + 1;
    } while ((int)puVar13 < 0x7803fb91);
    if (bVar3) {
      pcVar4 = FUN_78011fd0();
      free(DAT_7803fb54);
      DAT_7803fb54 = (void *)0x0;
      goto LAB_78011e39;
    }
LAB_78011e26:
    if (local_90 == 0) {
      pcVar4 = (char *)0x0;
      goto LAB_78011e39;
    }
  }
  pcVar4 = FUN_78011fd0();
LAB_78011e39:
  _unlock(0x13);
  __setlc_active = __setlc_active + -1;
  return pcVar4;
}


