/* Module: vidpcore.dll
   Function: FUN_5de22730
   Address: 5de22730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de22730(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  HGLOBAL pvVar1;
  undefined4 *pMem;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pvVar1 = GlobalAlloc(0x40,0x1d8);
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
  FUN_5de228c0();
  pMem[10] = param_1;
  *puVar4 = &PTR_FUN_5df1a5dc;
  pMem[5] = &PTR_LAB_5df1a580;
  pMem[7] = &PTR_LAB_5df1a544;
  pMem[8] = &PTR_LAB_5df1a534;
  pMem[9] = &PTR_LAB_5df1a520;
  pMem[0x34] = &PTR_LAB_5df1a4dc;
  pMem[0x35] = &PTR_LAB_5df1a4cc;
  pMem[0x44] = &PTR_LAB_5df1a4bc;
  pMem[0x45] = &PTR_LAB_5df1a4ac;
  pMem[0x46] = &PTR_LAB_5df1a498;
  pMem[0x52] = &PTR_LAB_5df1a470;
  pMem[0x53] = &PTR_LAB_5df1a44c;
  pMem[0x54] = &PTR_LAB_5df1a434;
  *pMem = &PTR_FUN_5df1a428;
  InterlockedIncrement(&DAT_5df42794);
  InterlockedIncrement(lpAddend);
  iVar2 = FUN_5de05620();
  InterlockedDecrement(lpAddend);
  if ((iVar2 == 0) && (iVar2 = (**(code **)*pMem)(pMem,param_2,param_3), iVar2 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_5df1a428;
  *lpAddend = 1;
  FUN_5de828c0();
  InterlockedDecrement(&DAT_5df42794);
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x56));
  if (puVar4 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = pMem + 0x46;
  }
  *puVar3 = &PTR_LAB_5df186b8;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = pMem + 5;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(puVar4 + 0x39));
  FUN_5de9f150();
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  return iVar2;
}


