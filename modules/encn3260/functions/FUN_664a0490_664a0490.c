/* Module: encn3260.dll
   Function: FUN_664a0490
   Address: 664a0490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a0490(int *param_1)

{
  void *pvVar1;
  HWND hWnd;
  void *pvVar2;
  
  pvVar1 = (void *)param_1[9];
  if (((pvVar1 != (void *)0x0) && (hWnd = *(HWND *)((int)param_1 + 0x109), hWnd != (HWND)0x0)) &&
     (*(int *)((int)param_1 + 0xf1) != 0)) {
    if (*(undefined4 **)((int)param_1 + 0x76) != (undefined4 *)0x0) {
      FUN_664b0720(*(undefined4 **)((int)param_1 + 0x76));
      pvVar2 = *(void **)((int)param_1 + 0x76);
      if (pvVar2 != (void *)0x0) {
        FUN_664b0200((int)pvVar2);
        operator_delete(pvVar2);
        *(undefined4 *)((int)param_1 + 0x76) = 0;
      }
    }
    if (*(undefined4 **)((int)param_1 + 0x7a) != (undefined4 *)0x0) {
      FUN_664b0720(*(undefined4 **)((int)param_1 + 0x7a));
      pvVar2 = *(void **)((int)param_1 + 0x7a);
      if (pvVar2 != (void *)0x0) {
        FUN_664b0200((int)pvVar2);
        operator_delete(pvVar2);
        *(undefined4 *)((int)param_1 + 0x7a) = 0;
      }
    }
    (**(code **)(*param_1 + 0x10))(param_1);
    DestroyWindow(hWnd);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    FUN_664a1d80();
    return 0;
  }
  return 0x80040009;
}


