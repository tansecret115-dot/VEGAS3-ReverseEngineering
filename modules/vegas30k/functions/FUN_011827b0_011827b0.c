/* Module: vegas30k.dll
   Function: FUN_011827b0
   Address: 011827b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011829c1) */

undefined4 FUN_011827b0(void)

{
  LPCSTR lpString;
  int iVar1;
  uint dwBytes;
  HGLOBAL pvVar2;
  LPCSTR pMem;
  int iVar3;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar4;
  undefined1 *puStack_570;
  int ***pppiStack_56c;
  int **ppiStack_568;
  undefined *puStack_564;
  int *piStack_55c;
  undefined1 local_554 [4];
  int **local_550;
  undefined4 local_54c;
  undefined1 auStack_52c [16];
  undefined1 auStack_51c [244];
  undefined4 auStack_428 [266];
  
  puStack_564 = &DAT_01208b08;
  pppiStack_56c = &local_550;
  ppiStack_568 = (int **)DAT_012b09c0;
  local_54c = 0;
  puStack_570 = (undefined1 *)0x11827d2;
  iVar1 = _SfMetric_OpenSubKey_12();
  if (-1 < iVar1) {
    puStack_564 = (undefined *)0x4;
    ppiStack_568 = (int **)0x3ee;
    pppiStack_56c = (int ***)local_550;
    puStack_570 = (undefined1 *)0x11827f3;
    iVar1 = _SfDoesMetricExist_12();
    if (iVar1 == 0) {
      puStack_564 = (undefined *)0x3ee;
      ppiStack_568 = local_550;
      pppiStack_56c = (int ***)0x1182806;
      local_54c = _SfGetMetric_8();
    }
    puStack_564 = local_554;
    ppiStack_568 = (int **)DAT_012b09c4;
    pppiStack_56c = (int ***)0x118281a;
    (**(code **)(*DAT_012b09c4 + 0x54))();
    if (piStack_55c != (int *)0x0) {
      puStack_570 = &stack0xfffffaa0;
      pppiStack_56c = (int ***)0x0;
      iVar1 = (**(code **)(*piStack_55c + 0xc))();
      while (iVar1 == 0) {
        (**(code **)(*DAT_012b09c4 + 0x58))(DAT_012b09c4,puStack_570,auStack_51c,0x104);
        SfPrintF(&pppiStack_56c,"%s\\%s",&DAT_01208b08,auStack_52c);
        iVar1 = _SfMetric_OpenSubKey_12(&stack0xfffffa7c,DAT_012b09c0,&pppiStack_56c);
        if (iVar1 == 0) {
          puVar4 = auStack_428;
          for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          iVar1 = _SfDoesMetricExist_12(0,0x3f1,4);
          if ((iVar1 == 0) && (dwBytes = _SfGetMetric_8(0,0x3f1), dwBytes != 0)) {
            pvVar2 = GlobalAlloc(0x42,dwBytes);
            pMem = GlobalLock(pvVar2);
            if (pMem != (LPCSTR)0x0) {
              iVar1 = _SfDoesMetricExist_12(0,0x3f2,7);
              if (iVar1 == 0) {
                _SfGetMetricMultiStringEx_24(0,0x3f2,pMem,dwBytes,0,1);
                lpString = pMem;
                for (; 1 < dwBytes; dwBytes = (dwBytes - iVar1) - 1) {
                  puStack_570 = (undefined1 *)0x0;
                  iVar1 = (**(code **)(*DAT_012b09c4 + 0x68))
                                    (DAT_012b09c4,unaff_ESI,&puStack_570,0,lpString);
                  if (iVar1 == 0) {
                    auStack_428[(int)puStack_570] = 1;
                  }
                  iVar1 = lstrlenA(lpString);
                  iVar3 = lstrlenA(lpString);
                  lpString = lpString + iVar3 + 1;
                }
              }
              pvVar2 = GlobalHandle(pMem);
              GlobalUnlock(pvVar2);
              pvVar2 = GlobalHandle(pMem);
              GlobalFree(pvVar2);
            }
          }
          (**(code **)(*DAT_012b09c4 + 0x60))(DAT_012b09c4,unaff_ESI,0,auStack_428,0x100);
          _SfMetric_Close_4(0);
        }
        iVar1 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,1,&stack0xfffffa80,0);
      }
      (*(code *)(*pppiStack_56c)[2])();
    }
    puStack_570 = (undefined1 *)0x11829fc;
    _SfMetric_Close_4();
    return 1;
  }
  return 0;
}


