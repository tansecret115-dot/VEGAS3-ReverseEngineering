/* Module: vegas30.exe
   Function: FUN_004f01a0
   Address: 004f01a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f01a0(int *param_1)

{
  HGLOBAL pvVar1;
  CHAR *pMem;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  CHAR *pCVar6;
  CHAR *pCVar7;
  LPCSTR lpString;
  int iVar8;
  int local_c;
  
  iVar8 = 0;
  if (param_1 == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *param_1;
  }
  pvVar1 = GlobalAlloc(0x42,0x800);
  pMem = GlobalLock(pvVar1);
  if ((local_c == 0) || (pMem != (CHAR *)0x0)) {
    iVar5 = 0;
    pCVar6 = pMem;
    pCVar7 = pMem;
    if (0 < local_c) {
      do {
        lpString = *(LPCSTR *)(param_1[2] + iVar5 * 4);
        iVar2 = lstrlenA(lpString);
        uVar3 = iVar2 + 1;
        iVar8 = iVar8 + uVar3;
        pCVar7 = pCVar6;
        if (0x800 < iVar8) break;
        pCVar7 = pCVar6 + uVar3;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pCVar6 = *(undefined4 *)lpString;
          lpString = lpString + 4;
          pCVar6 = pCVar6 + 4;
        }
        iVar5 = iVar5 + 1;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pCVar6 = *lpString;
          lpString = lpString + 1;
          pCVar6 = pCVar6 + 1;
        }
        pCVar6 = pCVar7;
      } while (iVar5 < local_c);
    }
    _SfSetMetricBinary_16(DAT_00647200,0x450,pMem,(int)pCVar7 - (int)pMem);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return;
}


