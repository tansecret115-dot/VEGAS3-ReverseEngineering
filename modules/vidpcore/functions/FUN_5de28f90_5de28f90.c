/* Module: vidpcore.dll
   Function: FUN_5de28f90
   Address: 5de28f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de28f90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  HGLOBAL pvVar1;
  undefined4 *pMem;
  int iVar2;
  undefined4 *puVar3;
  
  pvVar1 = GlobalAlloc(0x40,0x3e0);
  pMem = GlobalLock(pvVar1);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  FUN_5de291d0();
  pMem[10] = param_1;
  pMem[4] = &PTR_FUN_5df1ac20;
  pMem[5] = &PTR_LAB_5df1abc4;
  pMem[7] = &PTR_LAB_5df1ab88;
  pMem[8] = &PTR_LAB_5df1ab78;
  pMem[9] = &PTR_LAB_5df1ab64;
  pMem[0x34] = &PTR_LAB_5df1ab20;
  pMem[0x35] = &PTR_LAB_5df1ab10;
  pMem[0x44] = &PTR_LAB_5df1ab00;
  pMem[0x45] = &PTR_LAB_5df1aaf0;
  pMem[0x46] = &PTR_LAB_5df1aadc;
  pMem[0x52] = &PTR_LAB_5df1aab4;
  pMem[0x53] = &PTR_LAB_5df1aa90;
  pMem[0x54] = &PTR_LAB_5df1aa78;
  *pMem = &PTR_FUN_5df1aa6c;
  InterlockedIncrement(&DAT_5df42794);
  InterlockedIncrement(lpAddend);
  iVar2 = FUN_5de05620();
  InterlockedDecrement(lpAddend);
  if ((iVar2 != 0) || (iVar2 = (**(code **)*pMem)(pMem,param_2,param_3), iVar2 != 0)) {
    *pMem = &PTR_FUN_5df1aa6c;
    *lpAddend = 1;
    FUN_5de8cdf0();
    InterlockedDecrement(&DAT_5df42794);
    if ((LPCVOID)pMem[0xef] != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)pMem[0xef]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)pMem[0xef]);
      GlobalFree(pvVar1);
      pMem[0xee] = 0;
      pMem[0xef] = 0;
    }
    FUN_5de29180();
    FUN_5de29180();
    FUN_5de29180();
    DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x65));
    if (pMem + 4 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = pMem + 0x46;
    }
    *puVar3 = &PTR_LAB_5df186b8;
    FUN_5de29160();
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return iVar2;
}


