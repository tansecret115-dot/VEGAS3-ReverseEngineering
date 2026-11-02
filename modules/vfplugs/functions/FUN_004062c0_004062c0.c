/* Module: vfplugs.dll
   Function: FUN_004062c0
   Address: 004062c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004062c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LONG *lpAddend;
  int *this;
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
  this = pMem + 4;
  FUN_00407560(this,param_1);
  *pMem = &PTR_FUN_004870dc;
  InterlockedIncrement(&DAT_0049453c);
  InterlockedIncrement(lpAddend);
  iVar3 = FUN_0040ad70(this);
  InterlockedDecrement(lpAddend);
  if ((iVar3 == 0) && (iVar3 = (**(code **)*pMem)(pMem,param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  *pMem = &PTR_FUN_004870dc;
  *lpAddend = 1;
  FUN_0040aec0((int)this);
  InterlockedDecrement(&DAT_0049453c);
  DeleteCriticalSection((LPCRITICAL_SECTION)(pMem + 0x54));
  piVar1 = (int *)pMem[0x50];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (this == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = pMem + 0x40;
  }
  *puVar4 = &PTR_LAB_00486e08;
  FUN_00414110((int)this);
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  return iVar3;
}


