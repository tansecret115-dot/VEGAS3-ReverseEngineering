/* Module: vidpcore.dll
   Function: FUN_5de1c860
   Address: 5de1c860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de1c860(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar2 = GlobalAlloc(0x40,0x208);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  FUN_5de5cbb0();
  pMem[9] = param_1;
  pMem[4] = &PTR_FUN_5df19f5c;
  pMem[6] = &PTR_LAB_5df19f20;
  pMem[7] = &PTR_LAB_5df19f10;
  pMem[8] = &PTR_LAB_5df19efc;
  pMem[0x33] = &PTR_LAB_5df19ebc;
  pMem[0x34] = &PTR_LAB_5df19ea8;
  pMem[0x3d] = &PTR_LAB_5df19e80;
  pMem[0x3e] = &PTR_LAB_5df19e70;
  pMem[0x3f] = &PTR_LAB_5df19e54;
  pMem[0x40] = &PTR_LAB_5df19e40;
  pMem[0x4c] = &PTR_LAB_5df19e18;
  pMem[0x4d] = &PTR_LAB_5df19df4;
  pMem[0x4e] = &PTR_LAB_5df19ddc;
  *pMem = &PTR_FUN_5df19dd0;
  InterlockedIncrement(&DAT_5df42794);
  InterlockedIncrement(lpAddend);
  iVar3 = FUN_5de7cfc0();
  InterlockedDecrement(lpAddend);
  if ((iVar3 == 0) && (iVar3 = (**(code **)*pMem)(pMem,param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_5df19dd0;
  *lpAddend = 1;
  FUN_5de7d120();
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


