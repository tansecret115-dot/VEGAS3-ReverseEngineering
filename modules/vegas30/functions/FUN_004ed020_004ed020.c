/* Module: vegas30.exe
   Function: FUN_004ed020
   Address: 004ed020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ed020(HWND param_1,int *param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  HMENU pHVar5;
  int iVar6;
  uint uVar7;
  CHAR local_110 [272];
  
  uVar7 = 0;
  if ((LPCVOID)param_2[1] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_2[1]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_2[1]);
    GlobalFree(pvVar1);
    param_2[1] = 0;
  }
  if (DAT_00647afc != 0) {
    pvVar1 = GlobalAlloc(0x42,DAT_00647b04 * 0x108);
    pvVar2 = GlobalLock(pvVar1);
    param_2[1] = (int)pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      DAT_00647afc = 0;
      SfMsgBox(DAT_00647624,0x10,"Out of memory.");
    }
    else {
      param_2[2] = DAT_00647b04;
      iVar3 = FUN_004ec9b0();
      *param_2 = 0;
      if (DAT_00647b04 != 0) {
        while( true ) {
          iVar6 = uVar7 * 0x108;
          _SfGetMetricStringEx_24(DAT_00647200,uVar7 * 2 + 1000,iVar6 + 4 + param_2[1],0x104,0,1);
          _SfGetMetricBinary_16(DAT_00647200,uVar7 * 2 + 0x3e9,iVar6 + param_2[1],4);
          if (*(int *)(iVar6 + param_2[1]) != 400) break;
          iVar4 = lstrlenA((LPCSTR)(iVar6 + param_2[1] + 4));
          if (iVar4 != 0) {
            FUN_004ec910(uVar7 + 1,iVar6 + 4 + param_2[1],local_110,0x10e);
            iVar6 = iVar3;
            pHVar5 = GetMenu(param_1);
            pHVar5 = GetSubMenu(pHVar5,iVar6);
            if (uVar7 == 0) {
              AppendMenuA(pHVar5,0x800,0,(LPCSTR)0x0);
            }
            AppendMenuA(pHVar5,0,uVar7 + 0x9cb6,local_110);
            *param_2 = *param_2 + 1;
          }
          uVar7 = uVar7 + 1;
          if (DAT_00647b04 <= uVar7) {
            return;
          }
        }
      }
    }
  }
  return;
}


