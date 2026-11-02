/* Module: wavplug.dll
   Function: FUN_5f395660
   Address: 5f395660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f395660(int param_1)

{
  HGLOBAL pvVar1;
  LPCVOID pMem;
  LPCVOID pMem_00;
  
  pMem_00 = (LPCVOID)0x0;
  pMem = (LPCVOID)0x0;
  if (*(int *)(param_1 + 0x30) != 0) {
    if ((*(uint *)(param_1 + 0x38) & 0x20000) != 0) {
      pMem_00 = *(LPCVOID *)(param_1 + 0x40);
      pMem = *(LPCVOID *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x5c);
      acmStreamUnprepareHeader(*(int *)(param_1 + 0x30),param_1 + 0x34,0);
    }
    acmStreamClose(*(undefined4 *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (pMem_00 != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem_00);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem_00);
      GlobalFree(pvVar1);
    }
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}


