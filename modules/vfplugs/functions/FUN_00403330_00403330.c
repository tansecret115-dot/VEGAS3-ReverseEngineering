/* Module: vfplugs.dll
   Function: FUN_00403330
   Address: 00403330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403330(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  HGLOBAL pvVar1;
  undefined4 *pMem;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pvVar1 = GlobalAlloc(0x40,0xd48);
  pMem = GlobalLock(pvVar1);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  puVar4 = pMem + 4;
  FUN_00403550((int)puVar4);
  pMem[10] = param_1;
  *puVar4 = &PTR_LAB_00486fd0;
  pMem[5] = &PTR_LAB_00486f74;
  pMem[7] = &PTR_LAB_00486f38;
  pMem[8] = &PTR_LAB_00486f28;
  pMem[9] = &PTR_LAB_00486f14;
  pMem[0x34] = &PTR_LAB_00486ed0;
  pMem[0x35] = &PTR_LAB_00486ec0;
  pMem[0x44] = &PTR_LAB_00486eb0;
  pMem[0x45] = &PTR_LAB_00486ea0;
  pMem[0x46] = &PTR_LAB_00486e8c;
  pMem[0x52] = &PTR_LAB_00486e64;
  pMem[0x53] = &PTR_LAB_00486e40;
  pMem[0x54] = &PTR_LAB_00486e28;
  *pMem = &PTR_FUN_00486e1c;
  InterlockedIncrement(&DAT_0049453c);
  InterlockedIncrement(lpAddend);
  iVar2 = FUN_00401550((int)(pMem + 5));
  InterlockedDecrement(lpAddend);
  if ((iVar2 == 0) && (iVar2 = (**(code **)*pMem)(pMem,param_2,param_3), iVar2 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_00486e1c;
  *lpAddend = 1;
  FUN_00411130((int)puVar4);
  InterlockedDecrement(&DAT_0049453c);
  if ((LPCVOID)pMem[0x349] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)pMem[0x349]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)pMem[0x349]);
    GlobalFree(pvVar1);
    pMem[0x348] = 0;
    pMem[0x349] = 0;
  }
  FUN_00403500((int)(pMem + 0x1ea));
  FUN_00403500((int)(pMem + 0x139));
  FUN_00403500((int)(pMem + 0x89));
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x83));
  if (puVar4 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = pMem + 0x46;
  }
  *puVar3 = &PTR_LAB_00486e08;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = pMem + 5;
  }
  FUN_00404940((int)puVar4);
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  return iVar2;
}


