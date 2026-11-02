/* Module: vegas30k.dll
   Function: FUN_011c5040
   Address: 011c5040
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c5040(int param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *pMem;
  int iVar3;
  
  *param_2 = 0;
  pvVar1 = GlobalAlloc(0x40,0x20);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (undefined4 *)FUN_011d3670(param_1,*(undefined4 *)(param_1 + 0x118));
    if (pMem != (undefined4 *)0x0) {
      iVar3 = (**(code **)*pMem)(pMem,&DAT_011d9ad0,param_2);
      if (iVar3 < 0) {
        FUN_011d3710();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
      }
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


