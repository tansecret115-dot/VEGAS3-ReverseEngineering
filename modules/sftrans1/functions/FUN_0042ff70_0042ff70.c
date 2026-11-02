/* Module: sftrans1.dll
   Function: FUN_0042ff70
   Address: 0042ff70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042ff70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *piVar1;
  HGLOBAL pvVar2;
  undefined4 *pMem;
  int iVar3;
  undefined4 *puVar4;
  
  pvVar2 = GlobalAlloc(0x40,0x210);
  pMem = GlobalLock(pvVar2);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  lpAddend = pMem + 1;
  *lpAddend = 0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = pMem;
  }
  FUN_004aecc0();
  pMem[9] = param_1;
  pMem[4] = &PTR_LAB_005586c4;
  pMem[6] = &PTR_LAB_00558688;
  pMem[7] = &PTR_LAB_00558678;
  pMem[8] = &PTR_LAB_00558664;
  pMem[0x33] = &PTR_LAB_00558624;
  pMem[0x34] = &PTR_LAB_00558610;
  pMem[0x3d] = &PTR_LAB_005585e8;
  pMem[0x3e] = &PTR_LAB_005585d8;
  pMem[0x3f] = &PTR_LAB_005585bc;
  pMem[0x40] = &PTR_LAB_005585a8;
  pMem[0x4c] = &PTR_LAB_00558580;
  pMem[0x4d] = &PTR_LAB_0055855c;
  pMem[0x4e] = &PTR_LAB_00558544;
  *pMem = &PTR_FUN_00558538;
  InterlockedIncrement(&DAT_00577264);
  InterlockedIncrement(lpAddend);
  iVar3 = FUN_004aedd0();
  InterlockedDecrement(lpAddend);
  if ((iVar3 == 0) && (iVar3 = (**(code **)*pMem)(pMem,param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_00558538;
  *lpAddend = 1;
  FUN_004aeea0();
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


