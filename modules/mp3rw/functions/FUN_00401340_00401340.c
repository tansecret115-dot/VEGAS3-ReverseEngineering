/* Module: mp3rw.dll
   Function: FUN_00401340
   Address: 00401340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00401340(undefined4 *param_1)

{
  undefined4 *pMem;
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_004907dc;
  InterlockedDecrement((LONG *)&DAT_004a8120);
  pMem = (undefined4 *)param_1[2];
  if (pMem != (undefined4 *)0x0) {
    FUN_004101a0(pMem);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    param_1[2] = 0;
    DAT_004a8128 = 0;
  }
  if (param_1[0x51] != 0) {
    FUN_00402150((int)param_1);
  }
  if (DAT_004a84e0 != 0) {
    free((void *)DAT_004a84e0);
    DAT_004a84e0 = 0;
  }
  return;
}


