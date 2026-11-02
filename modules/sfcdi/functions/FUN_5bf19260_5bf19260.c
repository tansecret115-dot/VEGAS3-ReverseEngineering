/* Module: sfcdi.dll
   Function: FUN_5bf19260
   Address: 5bf19260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5bf19260(int param_1)

{
  int *pMem;
  HGLOBAL pvVar1;
  
  FUN_5bf19660(param_1);
  pMem = *(int **)(param_1 + 0x1dd4);
  if (pMem != (int *)0x0) {
    FUN_5bf18640(pMem);
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1dd4) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x1dd8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1dd8));
    *(undefined4 *)(param_1 + 0x1dd8) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x1df4) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x1df4));
    *(undefined4 *)(param_1 + 0x1df4) = 0;
  }
  FUN_5bf18da0(param_1 + 0x1e54);
  return;
}


