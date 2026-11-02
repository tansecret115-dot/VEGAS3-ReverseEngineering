/* Module: sftrans1.dll
   Function: FUN_00413db0
   Address: 00413db0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00413db0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *piVar1;
  int iVar2;
  int *piVar3;
  HGLOBAL pvVar4;
  undefined4 *pMem;
  LPUNKNOWN punkOuter;
  undefined4 *puVar5;
  LPUNKNOWN *ppunkMarshal;
  
  pvVar4 = GlobalAlloc(0x40,0x728);
  pMem = GlobalLock(pvVar4);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  piVar1 = pMem + 4;
  FUN_00439430(param_1);
  *pMem = &PTR_FUN_005567c8;
  InterlockedIncrement(&DAT_00577264);
  InterlockedIncrement(lpAddend);
  ppunkMarshal = (LPUNKNOWN *)(pMem + 0x1c8);
  punkOuter = (LPUNKNOWN)(**(code **)(*piVar1 + 0x44))();
  param_1 = (undefined4 *)CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  InterlockedDecrement(lpAddend);
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)(**(code **)*pMem)(pMem,param_2,param_3), param_1 == (undefined4 *)0x0
     )) {
    return 0;
  }
  *pMem = &PTR_FUN_005567c8;
  *lpAddend = 1;
  iVar2 = pMem[0x3b];
  while (iVar2 != 0) {
    iVar2 = *(int *)(pMem[0x3b] + 4);
    (**(code **)(*piVar1 + 0x50))(pMem[0x3b]);
    pMem[0x3b] = iVar2;
  }
  FUN_00413f40();
  FUN_00412b80();
  InterlockedDecrement(&DAT_00577264);
  piVar3 = (int *)pMem[0x1c8];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  if (piVar1 == (int *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = pMem + 0x52;
  }
  *puVar5 = &PTR_LAB_0055679c;
  puVar5[1] = &PTR_LAB_00556788;
  puVar5[3] = &PTR_LAB_00556770;
  puVar5[4] = &PTR_LAB_0055674c;
  puVar5[2] = &PTR_LAB_00556724;
  DeleteCriticalSection((LPCRITICAL_SECTION)(puVar5 + 0xc5));
  FUN_004144d0(puVar5 + 2,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x3d));
  FUN_0045bef0();
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem);
  GlobalFree(pvVar4);
  return (HRESULT)param_1;
}


