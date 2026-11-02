/* Module: sftrans1.dll
   Function: FUN_0041c960
   Address: 0041c960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041c960(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  undefined4 *puVar3;
  
  pvVar2 = GlobalAlloc(0x40,0x928);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  FUN_0043e350(param_1);
  *pMem = &PTR_FUN_00557204;
  InterlockedIncrement(&DAT_00577264);
  InterlockedIncrement(lpAddend);
  param_1 = (undefined4 *)FUN_0047c330();
  InterlockedDecrement(lpAddend);
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)(**(code **)*pMem)(pMem,param_2,param_3), param_1 == (undefined4 *)0x0
     )) {
    return 0;
  }
  *pMem = &PTR_FUN_00557204;
  *lpAddend = 1;
  FUN_0047c350();
  InterlockedDecrement(&DAT_00577264);
  piVar1 = (int *)pMem[0x246];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (pMem == (undefined4 *)0xfffffff0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = pMem + 0x52;
  }
  *puVar3 = &PTR_LAB_005571d8;
  puVar3[1] = &PTR_LAB_005571c4;
  puVar3[2] = &PTR_LAB_0055719c;
  puVar3[3] = &PTR_LAB_00557184;
  puVar3[4] = &PTR_LAB_00557160;
  DeleteCriticalSection((LPCRITICAL_SECTION)(puVar3 + 0x105));
  FUN_0041d080(puVar3 + 2,0);
  FUN_004783b0();
  FUN_004783b0();
  FUN_004783b0();
  FUN_004783b0();
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x3d));
  FUN_0045bef0();
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return (int)param_1;
}


