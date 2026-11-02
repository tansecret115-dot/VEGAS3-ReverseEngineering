/* Module: extmondrv.dll
   Function: FUN_004058a0
   Address: 004058a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004058a0(undefined4 *param_1)

{
  undefined4 *pMem;
  HGLOBAL pvVar1;
  
  pMem = (undefined4 *)param_1[8];
  *param_1 = &PTR_LAB_0044d9e8;
  if (pMem != (undefined4 *)0x0) {
    FUN_00405450(pMem);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    param_1[8] = 0;
  }
  return;
}


