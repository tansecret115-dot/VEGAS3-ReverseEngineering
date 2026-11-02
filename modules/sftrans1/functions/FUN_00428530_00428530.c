/* Module: sftrans1.dll
   Function: FUN_00428530
   Address: 00428530
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00428530(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_0044ec00();
  pMem[9] = param_1;
  pMem[4] = &PTR_LAB_00557d20;
  pMem[6] = &PTR_LAB_00557ce4;
  pMem[7] = &PTR_LAB_00557cd4;
  pMem[8] = &PTR_LAB_00557cc0;
  pMem[0x33] = &PTR_LAB_00557c80;
  pMem[0x34] = &PTR_LAB_00557c6c;
  pMem[0x3d] = &PTR_LAB_00557c44;
  pMem[0x3e] = &PTR_LAB_00557c34;
  pMem[0x3f] = &PTR_LAB_00557c18;
  pMem[0x40] = &PTR_LAB_00557c04;
  pMem[0x4c] = &PTR_LAB_00557bdc;
  pMem[0x4d] = &PTR_LAB_00557bb8;
  pMem[0x4e] = &PTR_LAB_00557ba0;
  *pMem = &PTR_FUN_00557b94;
  InterlockedIncrement(&DAT_00577264);
  InterlockedIncrement(lpAddend);
  iVar3 = FUN_004a2c60();
  InterlockedDecrement(lpAddend);
  if ((iVar3 == 0) && (iVar3 = (**(code **)*pMem)(pMem,param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_00557b94;
  *lpAddend = 1;
  FUN_004a2d60();
  InterlockedDecrement(&DAT_00577264);
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
  *puVar4 = &PTR_LAB_0055571c;
  FUN_0045bef0();
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return iVar3;
}


