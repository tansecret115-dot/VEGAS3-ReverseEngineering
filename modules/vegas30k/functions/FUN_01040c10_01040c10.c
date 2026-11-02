/* Module: vegas30k.dll
   Function: FUN_01040c10
   Address: 01040c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01040c10(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *pMem;
  int iVar3;
  int iVar4;
  
  iVar4 = -0x7ff8fff2;
  pvVar1 = GlobalAlloc(0x40,0x18);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (undefined4 *)FUN_01040580(0);
    if (pMem != (undefined4 *)0x0) {
      iVar3 = (**(code **)*pMem)(pMem,param_2,param_3);
      iVar4 = 0;
      if (iVar3 != 0) {
        FUN_010405b0();
        pvVar1 = GlobalHandle(pMem);
        GlobalUnlock(pvVar1);
        pvVar1 = GlobalHandle(pMem);
        GlobalFree(pvVar1);
        *param_3 = 0;
        return iVar3;
      }
    }
  }
  return iVar4;
}


