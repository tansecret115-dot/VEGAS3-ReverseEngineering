/* Module: sftrans1.dll
   Function: FUN_0045fe30
   Address: 0045fe30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045fe30(undefined4 *param_1)

{
  HWND hWnd;
  int *piVar1;
  
  *param_1 = &PTR_FUN_0055f3e8;
  if (param_1[1] != 0) {
    hWnd = *(HWND *)(param_1[1] + 4);
    if (hWnd != (HWND)0x0) {
      DestroyWindow(hWnd);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
    param_1[1] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


