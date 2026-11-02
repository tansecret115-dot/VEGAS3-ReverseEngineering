/* Module: sfcdi.dll
   Function: FUN_5bf49240
   Address: 5bf49240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf49240(LPCVOID param_1)

{
  HGLOBAL pvVar1;
  
  if (param_1 != (LPCVOID)0x0) {
    if (*(int **)((int)param_1 + 0x18) != (int *)0x0) {
      FUN_5bf2b040(*(int **)((int)param_1 + 0x18));
    }
    if (*(undefined4 **)((int)param_1 + 0x3c) != (undefined4 *)0x0) {
      FUN_5bf466a0(*(undefined4 **)((int)param_1 + 0x3c));
      *(undefined4 *)((int)param_1 + 0x3c) = 0xffffffff;
    }
    if (*(int **)((int)param_1 + 0x1c) != (int *)0x0) {
      FUN_5bf2b040(*(int **)((int)param_1 + 0x1c));
    }
    if (*(LPCVOID *)((int)param_1 + 0x30) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x30));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x30));
      GlobalFree(pvVar1);
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return 0;
  }
  return 0;
}


