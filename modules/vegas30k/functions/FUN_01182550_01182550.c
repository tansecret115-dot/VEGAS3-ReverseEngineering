/* Module: vegas30k.dll
   Function: FUN_01182550
   Address: 01182550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01182550(void)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  uchar *pMem;
  SIZE_T dwBytes;
  uchar *_Dest;
  undefined4 unaff_EDI;
  int *piVar4;
  undefined1 **ppuStack_69c;
  int *piStack_698;
  int *piStack_694;
  int *piStack_690;
  int *piStack_68c;
  undefined1 *puStack_670;
  int *piStack_66c;
  int *piStack_668;
  undefined4 *puStack_664;
  int *piStack_65c;
  undefined4 local_654 [2];
  undefined4 local_64c [2];
  uchar auStack_644 [280];
  undefined1 *apuStack_52c [4];
  int aiStack_51c [56];
  int aiStack_43c [5];
  undefined1 auStack_428 [1064];
  
  piStack_66c = local_64c;
  puStack_664 = (undefined4 *)&DAT_01208b08;
  piStack_668 = DAT_012b09c0;
  puStack_670 = (undefined1 *)0x118256b;
  iVar1 = _SfMetric_OpenSubKey_12();
  if (iVar1 < 0) {
    return 0;
  }
  puStack_664 = (undefined4 *)0x1;
  piStack_668 = (int *)0x3ee;
  piStack_66c = (int *)local_64c[0];
  puStack_670 = (undefined1 *)0x118258b;
  _SfSetMetric_12();
  puStack_664 = local_654;
  piStack_668 = DAT_012b09c4;
  piStack_66c = (int *)0x118259b;
  (**(code **)(*DAT_012b09c4 + 0x54))();
  if (piStack_65c != (int *)0x0) {
    piStack_66c = (int *)0x0;
    puStack_670 = (undefined1 *)&piStack_668;
    iVar1 = (**(code **)(*piStack_65c + 0xc))();
    while (iVar1 == 0) {
      piStack_690 = aiStack_51c;
      piStack_68c = (int *)&DAT_00000104;
      piStack_694 = piStack_65c;
      ppuStack_69c = (undefined1 **)0x11825df;
      piStack_698 = DAT_012b09c4;
      (**(code **)(*DAT_012b09c4 + 0x58))();
      ppuStack_69c = apuStack_52c;
      SfPrintF(&puStack_670,"%s\\%s",&DAT_01208b08);
      ppuStack_69c = &puStack_670;
      _SfMetric_OpenSubKey_12(&stack0xfffff97c,DAT_012b09c0);
      ppuStack_69c = (undefined1 **)&stack0xfffff980;
      iVar1 = (**(code **)(*DAT_012b09c4 + 0x5c))(DAT_012b09c4,unaff_EDI,0,auStack_428);
      if (iVar1 == 0) {
        iVar1 = 0;
        dwBytes = 1;
        if (0 < (int)piStack_694) {
          piVar4 = aiStack_43c;
          do {
            if (*piVar4 != 0) {
              (**(code **)(*DAT_012b09c4 + 100))
                        (DAT_012b09c4,ppuStack_69c,iVar1,0,auStack_644,0x103);
              iVar2 = lstrlenA((LPCSTR)auStack_644);
              dwBytes = dwBytes + 1 + iVar2;
            }
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar1 < (int)piStack_694);
        }
        pvVar3 = GlobalAlloc(0x42,dwBytes);
        pMem = GlobalLock(pvVar3);
        if (pMem != (uchar *)0x0) {
          iVar1 = 0;
          _Dest = pMem;
          if (0 < (int)piStack_694) {
            piStack_68c = aiStack_43c;
            do {
              if (*piStack_68c != 0) {
                (**(code **)(*DAT_012b09c4 + 100))
                          (DAT_012b09c4,ppuStack_69c,iVar1,0,auStack_644,0x103);
                _mbscpy(_Dest,auStack_644);
                iVar2 = lstrlenA((LPCSTR)auStack_644);
                _Dest[iVar2] = '\0';
                _Dest = _Dest + iVar2 + 1;
              }
              iVar1 = iVar1 + 1;
              piStack_68c = piStack_68c + 1;
            } while (iVar1 < (int)piStack_694);
          }
          *_Dest = '\0';
          _SfSetMetricMultiString_16(piStack_698,0x3f2,pMem,dwBytes);
          _SfSetMetric_12(piStack_698,0x3f1,dwBytes);
          pvVar3 = GlobalHandle(pMem);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(pMem);
          GlobalFree(pvVar3);
        }
      }
      _SfMetric_Close_4(piStack_698);
      iVar1 = (**(code **)(*piStack_690 + 0xc))(piStack_690,1,&ppuStack_69c,0);
    }
    (**(code **)(*piStack_66c + 8))();
  }
  piStack_66c = (int *)local_654[0];
  puStack_670 = (undefined1 *)0x1182799;
  _SfMetric_Close_4();
  return 1;
}


