/* Module: vidpcore.dll
   Function: FUN_5de1af40
   Address: 5de1af40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de1af40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar2 = GlobalAlloc(0x40,0x230);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  FUN_5de446d0(param_1);
  *pMem = &PTR_FUN_5df19d18;
  InterlockedIncrement(&DAT_5df42794);
  InterlockedIncrement(lpAddend);
  iVar3 = FUN_5de7a730();
  InterlockedDecrement(lpAddend);
  if ((iVar3 == 0) && (iVar3 = (**(code **)*pMem)(pMem,param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_5df19d18;
  *lpAddend = 1;
  FUN_5de7a8a0();
  InterlockedDecrement(&DAT_5df42794);
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x54));
  piVar1 = (int *)pMem[0x50];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (pMem == (undefined4 *)0xfffffff0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = pMem + 0x40;
  }
  *puVar4 = &PTR_LAB_5df186b8;
  FUN_5de9f150();
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return iVar3;
}


