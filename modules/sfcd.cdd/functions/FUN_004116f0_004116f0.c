/* Module: sfcd.cdd
   Function: FUN_004116f0
   Address: 004116f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004116f0(undefined4 param_1,HSFCD__ *param_2)

{
  HGLOBAL pvVar1;
  LPVOID pMem;
  int iVar2;
  
  pvVar1 = GlobalAlloc(0x42,0x1d8);
  pMem = GlobalLock(pvVar1);
  if (pMem == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  *(code **)((int)pMem + 0x1bc) = FUN_00411850;
  *(code **)((int)pMem + 0x1c0) = FUN_004117f0;
  *(LPVOID *)(param_2 + 0x160) = pMem;
  iVar2 = FUN_00411600(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  pvVar1 = GlobalHandle(pMem);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(pMem);
  GlobalFree(pvVar1);
  *(undefined4 *)(param_2 + 0x160) = 0;
  return iVar2;
}


