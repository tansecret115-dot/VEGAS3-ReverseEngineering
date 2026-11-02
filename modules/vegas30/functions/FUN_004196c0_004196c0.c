/* Module: vegas30.exe
   Function: FUN_004196c0
   Address: 004196c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004196c0(int param_1)

{
  LPCVOID pMem;
  int *piVar1;
  HGLOBAL pvVar2;
  
  *(undefined4 *)(param_1 + 0x248) = 1;
  FUN_00506170(2);
  FUN_00417e10(param_1);
  FUN_0043c0e0(*(undefined4 *)(param_1 + 0x204));
  *(undefined4 *)(param_1 + 0x204) = 0;
  if (*(HWND *)(param_1 + 0x210) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x210));
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(HWND *)(param_1 + 0x238) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x238));
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(HWND *)(param_1 + 0x328) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x328));
  }
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (*(HWND *)(param_1 + 0x250) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x250));
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  if (*(HWND *)(param_1 + 0x2b0) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x2b0));
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (*(HWND *)(param_1 + 0x2b4) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x2b4));
  }
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  if (*(void **)(param_1 + 0x220) != (void *)0x0) {
    free(*(void **)(param_1 + 0x220));
  }
  pMem = *(LPCVOID *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (pMem != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
  piVar1 = *(int **)(param_1 + 0x354);
  *(undefined4 *)(param_1 + 0x234) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x354) = 0;
  }
  FUN_00411fd0(param_1,2000);
  *(undefined4 *)(DAT_0064762c + 0x94) = 0;
  return;
}


