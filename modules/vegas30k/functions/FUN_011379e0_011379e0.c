/* Module: vegas30k.dll
   Function: FUN_011379e0
   Address: 011379e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011379e0(int param_1,undefined4 *param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *pMem;
  int iVar3;
  
  *param_2 = 0;
  pvVar1 = GlobalAlloc(0x40,0x14);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    pMem = (undefined4 *)0x0;
  }
  else {
    pMem = (undefined4 *)FUN_0113dd40(param_1,*(int *)(param_1 + 0x24) != 0);
  }
  iVar3 = (**(code **)*pMem)(pMem,&DAT_011ed340,param_2);
  if ((iVar3 != 0) && (*param_2 = 0, pMem != (undefined4 *)0x0)) {
    FUN_0113ddb0();
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return iVar3;
  }
  return iVar3;
}


