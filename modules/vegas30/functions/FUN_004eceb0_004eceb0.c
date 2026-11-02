/* Module: vegas30.exe
   Function: FUN_004eceb0
   Address: 004eceb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004eceb0(uint *param_1)

{
  HMENU pHVar1;
  BOOL BVar2;
  HGLOBAL pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  UINT *pUVar7;
  UINT local_2c [11];
  
  uVar4 = 0;
  if (DAT_00647b04 != 0) {
    iVar5 = 1000;
    do {
      _SfSetMetricString_12(DAT_00647200,iVar5,&DAT_0060f98c);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 2;
    } while (uVar4 < DAT_00647b04);
  }
  if (DAT_00647afc != 0) {
    uVar4 = 0;
    if (*param_1 != 0) {
      iVar6 = 0;
      iVar5 = 0x3e9;
      do {
        _SfSetMetricString_12(DAT_00647200,iVar5 + -1,param_1[1] + 4 + iVar6);
        _SfSetMetricBinary_16(DAT_00647200,iVar5,param_1[1] + iVar6,4);
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0x108;
        iVar5 = iVar5 + 2;
      } while (uVar4 < *param_1);
    }
    if (DAT_00647624 != (HWND)0x0) {
      iVar5 = FUN_004ec9b0();
      pHVar1 = GetMenu(DAT_00647624);
      pHVar1 = GetSubMenu(pHVar1,iVar5);
      if (pHVar1 != (HMENU)0x0) {
        uVar4 = 0;
        if (*param_1 != 0) {
          do {
            DeleteMenu(pHVar1,uVar4 + 0x9cb6,0);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *param_1);
        }
        pUVar7 = local_2c;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pUVar7 = 0;
          pUVar7 = pUVar7 + 1;
        }
        local_2c[0] = 0x2c;
        local_2c[1] = 0x10;
        iVar5 = GetMenuItemCount(pHVar1);
        BVar2 = GetMenuItemInfoA(pHVar1,iVar5 - 1U,1,(LPMENUITEMINFOA)local_2c);
        if ((BVar2 != 0) && (local_2c[2] == 0x800)) {
          DeleteMenu(pHVar1,iVar5 - 1U,0x400);
        }
      }
    }
  }
  if ((LPCVOID)param_1[1] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[1]);
    GlobalFree(pvVar3);
    param_1[1] = 0;
  }
  return;
}


