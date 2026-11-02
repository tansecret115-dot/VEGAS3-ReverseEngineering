/* Module: vidpcore.dll
   Function: FUN_5de093b0
   Address: 5de093b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_5de093b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  LPUNKNOWN punkOuter;
  HRESULT HVar3;
  undefined4 *puVar4;
  LPUNKNOWN *ppunkMarshal;
  
  pvVar2 = GlobalAlloc(0x40,0x238);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  FUN_5de3b780(param_1);
  *pMem = &PTR_FUN_5df189c4;
  InterlockedIncrement(&DAT_5df42794);
  InterlockedIncrement(lpAddend);
  ppunkMarshal = (LPUNKNOWN *)(pMem + 0x8c);
  punkOuter = (LPUNKNOWN)(**(code **)(pMem[4] + 0x44))();
  HVar3 = CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  InterlockedDecrement(lpAddend);
  if ((HVar3 == 0) && (HVar3 = (**(code **)*pMem)(pMem,param_2,param_3), HVar3 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_5df189c4;
  *lpAddend = 1;
  piVar1 = (int *)pMem[0x8c];
  if (piVar1 != (int *)0x0) {
    pMem[0x8c] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  InterlockedDecrement(&DAT_5df42794);
  piVar1 = (int *)pMem[0x8c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (pMem + 4 == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = pMem + 0x40;
  }
  *puVar4 = &PTR_LAB_5df18998;
  puVar4[1] = &PTR_LAB_5df18984;
  puVar4[2] = &PTR_LAB_5df1895c;
  puVar4[3] = &PTR_LAB_5df18944;
  puVar4[4] = &PTR_LAB_5df18920;
  DeleteCriticalSection((LPCRITICAL_SECTION)(puVar4 + 0x31));
  piVar1 = (int *)puVar4[0x15];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  puVar4[0x15] = 0;
  FUN_5de9f150();
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return HVar3;
}


