/* Module: sftrans1.dll
   Function: FUN_0041da90
   Address: 0041da90
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_0041da90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  LPUNKNOWN punkOuter;
  undefined4 *puVar3;
  LPUNKNOWN *ppunkMarshal;
  
  pvVar2 = GlobalAlloc(0x40,0xd50);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  FUN_0043f880(param_1);
  *pMem = &PTR_FUN_00557330;
  InterlockedIncrement(&DAT_00577264);
  InterlockedIncrement(lpAddend);
  ppunkMarshal = (LPUNKNOWN *)(pMem + 0x350);
  punkOuter = (LPUNKNOWN)(**(code **)(pMem[4] + 0x44))();
  param_1 = (undefined4 *)CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  InterlockedDecrement(lpAddend);
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)(**(code **)*pMem)(pMem,param_2,param_3), param_1 == (undefined4 *)0x0
     )) {
    return 0;
  }
  *pMem = &PTR_FUN_00557330;
  *lpAddend = 1;
  FUN_0041dc60();
  InterlockedDecrement(&DAT_00577264);
  piVar1 = (int *)pMem[0x350];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (pMem + 4 == (int *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = pMem + 0x52;
  }
  *puVar3 = &PTR_LAB_00557304;
  puVar3[1] = &PTR_LAB_005572f0;
  puVar3[2] = &PTR_LAB_005572c8;
  puVar3[3] = &PTR_LAB_005572b0;
  puVar3[4] = &PTR_LAB_0055728c;
  DeleteCriticalSection((LPCRITICAL_SECTION)(puVar3 + 0x189));
  FUN_0041f090(puVar3 + 2,0);
  FUN_0041dc10();
  FUN_0041dc10();
  FUN_0041dc10();
  FUN_0041dc10();
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x3d));
  FUN_0045bef0();
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return (HRESULT)param_1;
}


