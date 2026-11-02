/* Module: vegas30k.dll
   Function: FUN_01182230
   Address: 01182230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01182230(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  uchar *pMem;
  undefined1 **ppuVar5;
  int *unaff_ESI;
  uchar *_Dest;
  SIZE_T dwBytes;
  char **ppcStack_6ac;
  int **ppiStack_6a8;
  int *piStack_6a4;
  char **ppcStack_6a0;
  int *piStack_69c;
  undefined1 *puStack_698;
  int *piStack_694;
  int *piStack_680;
  undefined4 uStack_67c;
  undefined1 *puStack_678;
  undefined4 *puStack_674;
  int *piStack_670;
  char *apcStack_66c [3];
  int *piStack_660;
  char local_658 [4];
  undefined4 uStack_654;
  undefined4 local_64c;
  uchar auStack_648 [20];
  char *apcStack_634 [60];
  undefined1 auStack_544 [28];
  undefined1 auStack_528 [12];
  undefined1 auStack_51c [220];
  undefined1 *apuStack_440 [267];
  int *piStack_14;
  
  puStack_674 = &local_64c;
  apcStack_66c[0] = s_Mixer_01208b00;
  piStack_670 = DAT_012b09c0;
  puStack_678 = (undefined1 *)0x118224b;
  iVar2 = _SfMetric_OpenSubKey_12();
  if (iVar2 < 0) {
    return 0;
  }
  apcStack_66c[0] = (char *)0x1;
  piStack_670 = (int *)0x3ed;
  puStack_674 = (undefined4 *)local_64c;
  puStack_678 = (undefined1 *)0x118226b;
  _SfSetMetric_12();
  apcStack_66c[0] = local_658;
  piStack_670 = DAT_012b09c4;
  puStack_674 = (undefined4 *)0x118227b;
  (**(code **)(*DAT_012b09c4 + 0x50))();
  if (piStack_660 != (int *)0x0) {
    puStack_674 = (undefined4 *)0x0;
    uStack_67c = 1;
    piStack_680 = piStack_660;
    puStack_678 = (undefined1 *)&piStack_670;
    iVar2 = (**(code **)(*piStack_660 + 0xc))();
    piVar1 = piStack_69c;
    piStack_69c = piStack_680;
    while (piStack_680 = piStack_69c, iVar2 == 0) {
      puStack_698 = auStack_51c;
      piStack_694 = (int *)&DAT_00000104;
      ppcStack_6a0 = (char **)0x11822c0;
      (**(code **)(*piStack_69c + 0x10))();
      ppcStack_6a0 = (char **)auStack_528;
      ppcStack_6ac = apcStack_66c;
      piStack_6a4 = (int *)s_Mixer_01208b00;
      ppiStack_6a8 = (int **)0x11db6c4;
      SfPrintF();
      ppcStack_6a0 = apcStack_66c;
      ppiStack_6a8 = &piStack_680;
      piStack_6a4 = DAT_012b09c0;
      ppcStack_6ac = (char **)0x11822f4;
      _SfMetric_OpenSubKey_12();
      ppcStack_6a0 = &puStack_678;
      ppiStack_6a8 = (int **)0x1182303;
      piStack_6a4 = unaff_ESI;
      (**(code **)(*unaff_ESI + 0x24))();
      ppcStack_6ac = apcStack_634;
      ppiStack_6a8 = (int **)0x103;
      (**(code **)(*piStack_694 + 0x2c))(piStack_694,piStack_680,0);
      _SfSetMetricString_12(piStack_69c,0x3e9,auStack_648);
      _SfSetMetric_12(piStack_69c,1000,piStack_694);
      SfPrintF(&stack0xfffff978,"%s\\%s\\MixerType %d",s_Mixer_01208b00,auStack_544,1);
      iVar2 = _SfMetric_OpenSubKey_12(&piStack_6a4,DAT_012b09c0,&stack0xfffff978);
      if (-1 < iVar2) {
        iVar2 = (**(code **)((int)*ppiStack_6a8 + 0x1c))(ppiStack_6a8,1,apuStack_440,*piStack_14);
        if (-1 < iVar2) {
          _SfSetMetricBinary_16(piStack_6a4,0x3ea,apuStack_440,*piStack_14 << 2);
          iVar2 = 0;
          dwBytes = 1;
          if (0 < *piStack_14) {
            ppuVar5 = apuStack_440;
            do {
              (**(code **)((int)*ppiStack_6a8 + 0x2c))(ppiStack_6a8,*ppuVar5,0,auStack_648,0x103);
              iVar3 = lstrlenA((LPCSTR)auStack_648);
              dwBytes = dwBytes + 1 + iVar3;
              iVar2 = iVar2 + 1;
              ppuVar5 = ppuVar5 + 1;
            } while (iVar2 < *piStack_14);
          }
          pvVar4 = GlobalAlloc(0x42,dwBytes);
          pMem = GlobalLock(pvVar4);
          if (pMem != (uchar *)0x0) {
            iVar2 = 0;
            _Dest = pMem;
            if (0 < *piStack_14) {
              ppcStack_6a0 = apuStack_440;
              do {
                (**(code **)((int)*ppiStack_6a8 + 0x2c))
                          (ppiStack_6a8,*ppcStack_6a0,0,auStack_648,0x103);
                _mbscpy(_Dest,auStack_648);
                iVar3 = lstrlenA((LPCSTR)auStack_648);
                _Dest[iVar3] = '\0';
                _Dest = _Dest + iVar3 + 1;
                iVar2 = iVar2 + 1;
                ppcStack_6a0 = ppcStack_6a0 + 1;
              } while (iVar2 < *piStack_14);
            }
            *_Dest = '\0';
            _SfSetMetricMultiString_16(piStack_6a4,0x3ec,pMem,dwBytes);
            _SfSetMetric_12(piStack_6a4,0x3eb,dwBytes);
            pvVar4 = GlobalHandle(pMem);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(pMem);
            GlobalFree(pvVar4);
          }
        }
        _SfMetric_Close_4(piStack_6a4);
      }
      _SfMetric_Close_4(piStack_69c);
      (**(code **)((int)*ppiStack_6a8 + 8))(ppiStack_6a8);
      iVar2 = (**(code **)(*piStack_69c + 0xc))(piStack_69c,1,&ppcStack_6ac,0);
      piVar1 = piStack_69c;
      piStack_69c = piStack_680;
    }
    piStack_69c = piVar1;
    (**(code **)(*piStack_670 + 8))();
  }
  puStack_674 = (undefined4 *)uStack_654;
  puStack_678 = (undefined1 *)0x1182529;
  _SfMetric_Close_4();
  return 1;
}


