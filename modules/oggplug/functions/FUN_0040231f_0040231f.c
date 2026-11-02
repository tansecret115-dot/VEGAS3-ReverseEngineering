/* Module: oggplug.dll
   Function: FUN_0040231f
   Address: 0040231f
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040231f(undefined4 param_1,undefined4 param_2)

{
  HGLOBAL pvVar1;
  LPVOID this;
  undefined4 *pMem;
  int iVar2;
  
  pvVar1 = GlobalAlloc(0x40,0x1c);
  this = GlobalLock(pvVar1);
  if (this == (LPVOID)0x0) {
    pMem = (undefined4 *)0x0;
  }
  else {
    pMem = (undefined4 *)FUN_00402590(this,param_1);
  }
  iVar2 = (**(code **)*pMem)(pMem,&DAT_00446b10,param_2);
  if ((-1 < iVar2) && (iVar2 = FUN_004025e0(), -1 < iVar2)) {
    return iVar2;
  }
  if (pMem != (undefined4 *)0x0) {
    FUN_004025c0(pMem);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return iVar2;
}


