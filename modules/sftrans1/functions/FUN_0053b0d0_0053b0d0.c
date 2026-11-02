/* Module: sftrans1.dll
   Function: FUN_0053b0d0
   Address: 0053b0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0053b0d0(int param_1)

{
  undefined4 *pMem;
  HGLOBAL pvVar1;
  
  pMem = *(undefined4 **)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (pMem != (undefined4 *)0x0) {
    free((void *)*pMem);
    *pMem = 0;
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  return;
}


