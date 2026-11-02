/* Module: sfcdi.dll
   Function: cdr_Open
   Address: 5bf022b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_Open(struct tPARAMETERS_DEVDES *,struct HSFCD__ * *) */

long cdr_Open(tPARAMETERS_DEVDES *param_1,HSFCD__ **param_2)

{
  uint uVar1;
  HGLOBAL pvVar2;
  HSFCD__ *pMem;
  tCDR_INTERFACE *ptVar3;
  int iVar4;
  HSFCD__ *pHVar5;
  
                    /* 0x22b0  193  ?cdr_Open@@YGJPAUtPARAMETERS_DEVDES@@PAPAUHSFCD__@@@Z */
  *param_2 = (HSFCD__ *)0x0;
  uVar1 = FUN_5bf01000((uint)param_1);
  if (-1 < (int)uVar1) {
    return -0x7ffbf69c;
  }
  pvVar2 = GlobalAlloc(0x42,0x2d6);
  pMem = GlobalLock(pvVar2);
  if (pMem == (HSFCD__ *)0x0) {
    return -0x7ff8fff2;
  }
  pHVar5 = pMem;
  for (iVar4 = 0xb5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pHVar5 = 0;
    pHVar5 = pHVar5 + 4;
  }
  *(undefined2 *)pHVar5 = 0;
  pHVar5 = pMem + 4;
  for (iVar4 = 0x53; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pHVar5 = *(int *)param_1;
    param_1 = param_1 + 4;
    pHVar5 = pHVar5 + 4;
  }
  ptVar3 = cdr_GetInterface(*(int *)(pMem + 4));
  *(tCDR_INTERFACE **)(pMem + 0x150) = ptVar3;
  if (ptVar3 == (tCDR_INTERFACE *)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = FUN_5bf01e80(pMem);
    if (uVar1 == 0) {
      uVar1 = (**(code **)(ptVar3 + 0x68))(*(undefined4 *)ptVar3,0xc,pMem,0);
      if (*(int *)pMem != 0) {
        uVar1 = FUN_5bf01bf0((int)pMem,uVar1);
        SfScsi_Close(*(HSFSCSIPORT__ **)pMem);
      }
      if (uVar1 == 0) {
        FUN_5bf011a0((int)pMem);
        FUN_5bf06eb0((int)pMem);
        *param_2 = pMem;
        return 0;
      }
    }
  }
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  *param_2 = (HSFCD__ *)0x0;
  return uVar1;
}


