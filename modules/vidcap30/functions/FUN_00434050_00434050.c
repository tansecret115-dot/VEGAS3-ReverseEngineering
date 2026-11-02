/* Module: vidcap30.exe
   Function: FUN_00434050
   Address: 00434050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00434050(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  CHAR *pMem;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  CHAR *pCVar7;
  CHAR *pCVar8;
  LPCSTR lpString;
  int iVar9;
  
  pvVar2 = GlobalAlloc(0x42,0x800);
  pMem = GlobalLock(pvVar2);
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  if (pMem == (CHAR *)0x0) {
    return 0x8007000e;
  }
  iVar1 = *param_1;
  iVar6 = 0;
  iVar9 = 0;
  pCVar7 = pMem;
  pCVar8 = pMem;
  if (0 < iVar1) {
    do {
      lpString = *(LPCSTR *)(param_1[2] + iVar6 * 4);
      iVar3 = lstrlenA(lpString);
      uVar4 = iVar3 + 1;
      iVar9 = iVar9 + uVar4;
      pCVar8 = pCVar7;
      if (0x800 < iVar9) break;
      pCVar8 = pCVar7 + uVar4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pCVar7 = *(undefined4 *)lpString;
        lpString = lpString + 4;
        pCVar7 = pCVar7 + 4;
      }
      iVar6 = iVar6 + 1;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pCVar7 = *lpString;
        lpString = lpString + 1;
        pCVar7 = pCVar7 + 1;
      }
      pCVar7 = pCVar8;
    } while (iVar6 < iVar1);
  }
  _SfSetMetricBinary_16(DAT_005ba29c,0x450,pMem,(int)pCVar8 - (int)pMem);
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return 0;
}


