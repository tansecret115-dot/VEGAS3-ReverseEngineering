/* Module: sfpagepeel.dll
   Function: FUN_00403550
   Address: 00403550
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00403550(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *this;
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  LPUNKNOWN punkOuter;
  HRESULT HVar3;
  undefined4 *puVar4;
  LPUNKNOWN *ppunkMarshal;
  
  pvVar2 = GlobalAlloc(0x40,0x278);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  this = pMem + 4;
  FUN_00406720(this,param_1);
  *pMem = &PTR_FUN_0046ff04;
  InterlockedIncrement(&DAT_0047d4b4);
  InterlockedIncrement(lpAddend);
  ppunkMarshal = (LPUNKNOWN *)(pMem + 0x9c);
  punkOuter = (LPUNKNOWN)(**(code **)(*this + 0x44))();
  HVar3 = CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  InterlockedDecrement(lpAddend);
  if ((HVar3 == 0) && (HVar3 = (**(code **)*pMem)(pMem,param_2,param_3), HVar3 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_0046ff04;
  *lpAddend = 1;
  piVar1 = (int *)pMem[0x9c];
  if (piVar1 != (int *)0x0) {
    pMem[0x9c] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  InterlockedDecrement(&DAT_0047d4b4);
  piVar1 = (int *)pMem[0x9c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (this == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = pMem + 0x40;
  }
  *puVar4 = &PTR_LAB_0046fed8;
  puVar4[1] = &PTR_LAB_0046fec4;
  puVar4[2] = &PTR_LAB_0046fe9c;
  puVar4[3] = &PTR_LAB_0046fe84;
  puVar4[4] = &PTR_LAB_0046fe60;
  DeleteCriticalSection((LPCRITICAL_SECTION)(puVar4 + 0x39));
  piVar1 = (int *)puVar4[0x15];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  puVar4[0x15] = 0;
  FUN_0040eeb0((int)this);
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return HVar3;
}


