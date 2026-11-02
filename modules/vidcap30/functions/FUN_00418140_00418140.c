/* Module: vidcap30.exe
   Function: FUN_00418140
   Address: 00418140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418140(HWND param_1,int *param_2)

{
  uint uVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  HMENU pHVar6;
  int iVar7;
  uint uVar8;
  CHAR local_110 [272];
  
  if ((LPCVOID)param_2[1] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_2[1]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_2[1]);
    GlobalFree(pvVar2);
    param_2[1] = 0;
  }
  if (DAT_005ba990 != 0) {
    pvVar2 = GlobalAlloc(0x40,DAT_005ba998 * 0x108);
    pvVar3 = GlobalLock(pvVar2);
    param_2[1] = (int)pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      DAT_005ba990 = 0;
      return;
    }
    iVar4 = FUN_00417ab0(0);
    *param_2 = 0;
    uVar8 = 0;
    if (DAT_005ba998 != 0) {
      do {
        iVar7 = uVar8 * 0x108;
        _SfGetMetricStringEx_24(DAT_005ba29c,uVar8 * 2 + 1000,iVar7 + 4 + param_2[1],0x104,0,1);
        _SfGetMetricBinary_16(DAT_005ba29c,uVar8 * 2 + 0x3e9,iVar7 + param_2[1],4);
        if (*(int *)(param_2[1] + iVar7) != 400) {
          return;
        }
        iVar5 = lstrlenA((LPCSTR)((int *)(param_2[1] + iVar7) + 1));
        if (iVar5 == 0) {
          return;
        }
        uVar1 = uVar8 + 1;
        FUN_00417a10(uVar1,iVar7 + 4 + param_2[1],local_110,0x10e);
        if (uVar8 == 0) {
          iVar7 = iVar4;
          pHVar6 = GetMenu(param_1);
          pHVar6 = GetSubMenu(pHVar6,iVar7);
          AppendMenuA(pHVar6,0x800,0,(LPCSTR)0x0);
        }
        iVar7 = iVar4;
        pHVar6 = GetMenu(param_1);
        pHVar6 = GetSubMenu(pHVar6,iVar7);
        AppendMenuA(pHVar6,0,uVar8 + 0x41c,local_110);
        *param_2 = *param_2 + 1;
        uVar8 = uVar1;
      } while (uVar1 < DAT_005ba998);
    }
  }
  return;
}


