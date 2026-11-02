/* Module: sfppack3.dll
   Function: FUN_5cc34eb0
   Address: 5cc34eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cc34eb0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x404) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x404));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x404));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x404) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x1f0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1f0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1f0));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  if (*(LPCVOID *)(param_1 + 500) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 500));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 500));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 500) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xb0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xb0));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return 0;
}


