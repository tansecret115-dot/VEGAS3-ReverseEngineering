/* Module: sfpublish.dll
   Function: FUN_00410d50
   Address: 00410d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00410d50(undefined4 *param_1)

{
  LPCVOID pvVar1;
  int *piVar2;
  undefined4 *pMem;
  HGLOBAL pvVar3;
  int iVar4;
  int iVar5;
  
  pvVar1 = (LPCVOID)*param_1;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    *param_1 = 0;
  }
  pvVar1 = (LPCVOID)param_1[1];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[1] = 0;
  }
  pvVar1 = (LPCVOID)param_1[2];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[2] = 0;
  }
  pvVar1 = (LPCVOID)param_1[3];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[3] = 0;
  }
  pvVar1 = (LPCVOID)param_1[4];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[4] = 0;
  }
  pvVar1 = (LPCVOID)param_1[5];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[5] = 0;
  }
  pvVar1 = (LPCVOID)param_1[6];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[6] = 0;
  }
  pvVar1 = (LPCVOID)param_1[7];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[7] = 0;
  }
  pvVar1 = (LPCVOID)param_1[8];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[8] = 0;
  }
  pvVar1 = (LPCVOID)param_1[9];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[9] = 0;
  }
  pvVar1 = (LPCVOID)param_1[10];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pvVar1);
    GlobalFree(pvVar3);
    param_1[10] = 0;
  }
  param_1[0xc] = 0xffffffff;
  if (param_1[0xb] != 0) {
    iVar5 = 0;
    while( true ) {
      piVar2 = (int *)param_1[0xb];
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
      if (iVar4 <= iVar5) break;
      pMem = *(undefined4 **)(piVar2[2] + iVar5 * 4);
      if (pMem != (undefined4 *)0x0) {
        FUN_00410a80(pMem);
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      iVar5 = iVar5 + 1;
    }
    FUN_0041dd10((int *)param_1[0xb],0,-1,0);
    FUN_0041ef80((int *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  return;
}


