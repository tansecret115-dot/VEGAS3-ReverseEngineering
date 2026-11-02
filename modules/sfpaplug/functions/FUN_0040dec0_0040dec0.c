/* Module: sfpaplug.dll
   Function: FUN_0040dec0
   Address: 0040dec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040dec0(int param_1)

{
  HGLOBAL pvVar1;
  LPCVOID pMem;
  LPCVOID pMem_00;
  
  pMem_00 = (LPCVOID)0x0;
  pMem = (LPCVOID)0x0;
  if ((*(uint *)(param_1 + 0x84) & 0x20000) != 0) {
    pMem_00 = *(LPCVOID *)(param_1 + 0x8c);
    pMem = *(LPCVOID *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xa8);
    acmStreamUnprepareHeader(*(undefined4 *)(param_1 + 0x7c),param_1 + 0x80,0);
  }
  acmStreamClose(*(undefined4 *)(param_1 + 0x7c),0);
  *(undefined4 *)(param_1 + 0x7c) = 0;
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


