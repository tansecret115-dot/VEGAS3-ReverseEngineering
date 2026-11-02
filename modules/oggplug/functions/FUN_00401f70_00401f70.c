/* Module: oggplug.dll
   Function: FUN_00401f70
   Address: 00401f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401f70(int param_1)

{
  undefined4 *pMem;
  HGLOBAL pvVar1;
  
  if (*(int *)(param_1 + 0x428) != 0) {
    FUN_00402a50(*(int *)(param_1 + 0x428));
    pMem = *(undefined4 **)(param_1 + 0x428);
    if (pMem != (undefined4 *)0x0) {
      FUN_004029b0(pMem);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  if (*(int *)(param_1 + 0x2fc) != 0) {
    FUN_004425f0((int *)(param_1 + 8));
    fclose(*(FILE **)(param_1 + 0x2fc));
    *(undefined4 *)(param_1 + 0x2fc) = 0;
  }
  return 0;
}


