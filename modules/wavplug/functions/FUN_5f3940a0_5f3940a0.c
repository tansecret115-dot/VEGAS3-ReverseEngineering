/* Module: wavplug.dll
   Function: FUN_5f3940a0
   Address: 5f3940a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3940a0(undefined4 param_1,int param_2)

{
  HGLOBAL pvVar1;
  LPCVOID pMem;
  LPCVOID pMem_00;
  
  pMem_00 = (LPCVOID)0x0;
  pMem = (LPCVOID)0x0;
  if ((*(uint *)(param_2 + 4) & 0x20000) != 0) {
    pMem_00 = *(LPCVOID *)(param_2 + 0xc);
    pMem = *(LPCVOID *)(param_2 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_2 + 0x28);
    acmStreamUnprepareHeader(param_1,param_2,0);
  }
  acmStreamClose(param_1,0);
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
  return;
}


