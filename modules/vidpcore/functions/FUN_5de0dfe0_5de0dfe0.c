/* Module: vidpcore.dll
   Function: FUN_5de0dfe0
   Address: 5de0dfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de0dfe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar2 = GlobalAlloc(0x40,0x1d0);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  FUN_5de5c890();
  pMem[9] = param_1;
  pMem[4] = &PTR_FUN_5df18f84;
  pMem[6] = &PTR_LAB_5df18f48;
  pMem[7] = &PTR_LAB_5df18f38;
  pMem[8] = &PTR_LAB_5df18f24;
  pMem[0x33] = &PTR_LAB_5df18ee4;
  pMem[0x34] = &PTR_LAB_5df18ed0;
  pMem[0x3d] = &PTR_LAB_5df18ea8;
  pMem[0x3e] = &PTR_LAB_5df18e98;
  pMem[0x3f] = &PTR_LAB_5df18e7c;
  pMem[0x40] = &PTR_LAB_5df18e68;
  pMem[0x4c] = &PTR_LAB_5df18e40;
  pMem[0x4d] = &PTR_LAB_5df18e1c;
  pMem[0x4e] = &PTR_LAB_5df18e04;
  *pMem = &PTR_FUN_5df18df8;
  InterlockedIncrement(&DAT_5df42794);
  InterlockedIncrement(lpAddend);
  iVar3 = FUN_5de6d8e0();
  InterlockedDecrement(lpAddend);
  if ((iVar3 == 0) && (iVar3 = (**(code **)*pMem)(pMem,param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_5df18df8;
  *lpAddend = 1;
  FUN_5de6d9e0();
  InterlockedDecrement(&DAT_5df42794);
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x53));
  piVar1 = (int *)pMem[0x4f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (pMem + 4 == (undefined4 *)0x0) {
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


