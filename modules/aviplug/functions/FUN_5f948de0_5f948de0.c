/* Module: aviplug.dll
   Function: FUN_5f948de0
   Address: 5f948de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f948de0(int param_1)

{
  LPCVOID pMem;
  LPCVOID pMem_00;
  HGLOBAL pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  pMem = *(LPCVOID *)(param_1 + 0x268);
  pMem_00 = *(LPCVOID *)(param_1 + 600);
  if (*(int *)(param_1 + 0x248) != 0) {
    if ((*(uint *)(param_1 + 0x250) & 0x20000) != 0) {
      *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x264);
      *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x274);
      acmStreamUnprepareHeader(*(int *)(param_1 + 0x248),param_1 + 0x24c,0);
    }
    acmStreamClose(*(undefined4 *)(param_1 + 0x248),0);
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
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
  puVar3 = (undefined4 *)(param_1 + 0x24c);
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*(LPCVOID *)(param_1 + 0x1c8) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c8));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c8));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  if (*(int **)(param_1 + 0x244) != (int *)0x0) {
    FUN_5f9796e0(*(int **)(param_1 + 0x244));
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  return;
}


