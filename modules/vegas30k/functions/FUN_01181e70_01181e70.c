/* Module: vegas30k.dll
   Function: FUN_01181e70
   Address: 01181e70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01181e70(void)

{
  int iVar1;
  uint uVar2;
  SIZE_T dwBytes;
  HGLOBAL pvVar3;
  LPCSTR pMem;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *unaff_EBP;
  int *unaff_ESI;
  LPCSTR lpString;
  undefined4 unaff_EDI;
  int *piVar8;
  undefined1 *puStack_694;
  int *piStack_690;
  int *piStack_67c;
  char **ppcStack_678;
  undefined4 **ppuStack_674;
  undefined4 **ppuStack_670;
  char *pcStack_66c;
  int *piStack_658;
  undefined4 **local_654;
  char local_650 [4];
  undefined4 local_64c;
  undefined1 auStack_634 [8];
  undefined1 auStack_62c [12];
  undefined1 auStack_620 [248];
  undefined1 auStack_528 [252];
  undefined4 auStack_42c [257];
  int *piStack_28;
  
  pcStack_66c = s_Mixer_01208b00;
  ppuStack_674 = &local_654;
  ppuStack_670 = (undefined4 **)DAT_012b09c0;
  local_64c = 0;
  ppcStack_678 = (char **)0x1181e92;
  iVar1 = _SfMetric_OpenSubKey_12();
  if (iVar1 < 0) {
    return 0;
  }
  pcStack_66c = (char *)0x4;
  ppuStack_670 = (undefined4 **)0x3ed;
  ppuStack_674 = local_654;
  ppcStack_678 = (char **)0x1181eb3;
  iVar1 = _SfDoesMetricExist_12();
  if (iVar1 == 0) {
    pcStack_66c = (char *)0x3ed;
    ppuStack_670 = local_654;
    ppuStack_674 = (undefined4 **)0x1181ec6;
    local_64c = _SfGetMetric_8();
  }
  pcStack_66c = local_650;
  ppuStack_670 = (undefined4 **)DAT_012b09c4;
  ppuStack_674 = (undefined4 **)0x1181eda;
  (**(code **)(*DAT_012b09c4 + 0x50))();
  if (piStack_658 != (int *)0x0) {
    ppcStack_678 = &pcStack_66c;
    ppuStack_674 = (undefined4 **)0x0;
    piStack_67c = (int *)0x1;
    iVar1 = (**(code **)(*piStack_658 + 0xc))();
    while (iVar1 == 0) {
      puStack_694 = auStack_620;
      piStack_690 = (int *)&DAT_00000104;
      (**(code **)(*piStack_67c + 0x10))(piStack_67c);
      SfPrintF(&pcStack_66c,"%s\\%s",s_Mixer_01208b00,auStack_62c);
      iVar1 = _SfMetric_OpenSubKey_12(&stack0xfffff97c,DAT_012b09c0,&pcStack_66c);
      piVar8 = unaff_ESI;
      if ((ppuStack_670 == (undefined4 **)0x1) && (iVar1 == 0)) {
        iVar1 = _SfDoesMetricExist_12(0,1000,4);
        if (iVar1 == 0) {
          uVar2 = _SfGetMetric_8(0,1000);
          iVar1 = _SfDoesMetricExist_12(0,0x3e9,1);
          if (iVar1 == 0) {
            _SfGetMetricStringEx_24(0,0x3e9,auStack_528,0x104,0,1);
            piStack_67c = (int *)0x0;
            iVar1 = (**(code **)(*unaff_ESI + 0x30))(unaff_ESI,&piStack_67c,0,auStack_528);
            uVar2 = ~-(uint)(iVar1 != 0) & (uint)piStack_67c;
          }
        }
        else {
          uVar2 = 0;
        }
        (**(code **)(*unaff_ESI + 0x28))(unaff_ESI,uVar2);
        SfPrintF(&ppuStack_674,"%s\\%s\\MixerType %d",s_Mixer_01208b00,auStack_634,1);
        iVar1 = _SfMetric_OpenSubKey_12(&stack0xfffff978,unaff_EDI,&ppuStack_674);
        piVar7 = piStack_28;
        if (-1 < iVar1) {
          iVar4 = *piStack_28;
          iVar1 = iVar4 * 4;
          if (0 < iVar4) {
            puVar6 = auStack_42c;
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
          }
          iVar4 = _SfDoesMetricExist_12(unaff_ESI,0x3ea,3);
          if (iVar4 == 0) {
            _SfGetMetricBinary_16(unaff_ESI,0x3ea,auStack_42c,iVar1);
            iVar1 = _SfDoesMetricExist_12(unaff_ESI,0x3eb,4);
            if ((iVar1 == 0) && (dwBytes = _SfGetMetric_8(unaff_ESI,0x3eb), dwBytes != 0)) {
              pvVar3 = GlobalAlloc(0x42,dwBytes);
              pMem = GlobalLock(pvVar3);
              if (pMem != (LPCSTR)0x0) {
                iVar1 = _SfDoesMetricExist_12(unaff_ESI,0x3ec,7);
                if (iVar1 == 0) {
                  _SfGetMetricMultiStringEx_24(unaff_ESI,0x3ec,pMem,dwBytes,0,1);
                  iVar1 = 0;
                  if (0 < *piVar7) {
                    puVar6 = auStack_42c;
                    lpString = pMem;
                    do {
                      (**(code **)(*piStack_690 + 0x30))(piStack_690,&stack0xfffff97c,0,lpString);
                      *puVar6 = 0;
                      iVar4 = lstrlenA(lpString);
                      lpString = lpString + iVar4 + 1;
                      iVar1 = iVar1 + 1;
                      puVar6 = puVar6 + 1;
                      piVar7 = piStack_28;
                    } while (iVar1 < *piStack_28);
                  }
                }
                pvVar3 = GlobalHandle(pMem);
                GlobalUnlock(pvVar3);
                pvVar3 = GlobalHandle(pMem);
                GlobalFree(pvVar3);
              }
            }
          }
          (**(code **)(*piStack_690 + 0x20))(piStack_690,1,auStack_42c,*piVar7);
          _SfMetric_Close_4(unaff_ESI);
        }
        piVar7 = piStack_690;
        (**(code **)(*piStack_690 + 8))(piStack_690);
        _SfMetric_Close_4(piStack_690);
      }
      else {
        iVar1 = 0;
        (**(code **)(*unaff_ESI + 0x28))();
        piVar7 = (int *)*piStack_28;
        if (0 < (int)piVar7) {
          puVar6 = auStack_42c;
          for (piVar5 = piVar7; piVar5 != (int *)0x0; piVar5 = (int *)((int)piVar5 + -1)) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        (**(code **)(*piStack_690 + 0x20))(piStack_690,1,auStack_42c,piVar7);
        if (iVar1 != 0) {
          _SfMetric_Close_4(iVar1);
        }
        uVar2 = 0;
        (**(code **)(*piVar8 + 8))(piVar8);
      }
      iVar1 = (**(code **)(*piStack_658 + 0xc))(piStack_658,1,&puStack_694,0,piVar7,piVar8,uVar2);
    }
    (**(code **)(*unaff_EBP + 8))();
  }
  ppcStack_678 = (char **)0x118221c;
  _SfMetric_Close_4();
  return 1;
}


