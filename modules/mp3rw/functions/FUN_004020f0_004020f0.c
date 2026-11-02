/* Module: mp3rw.dll
   Function: FUN_004020f0
   Address: 004020f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004020f0(int param_1)

{
  undefined4 *pMem;
  HGLOBAL pvVar1;
  
  pMem = *(undefined4 **)(param_1 + 8);
  if (pMem != (undefined4 *)0x0) {
    FUN_004101a0(pMem);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 8) = 0;
    DAT_004a8128 = 0;
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_00402150(param_1);
  }
  return;
}


