/* Module: sfnetmedia.dll
   Function: FUN_00409710
   Address: 00409710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409710(int param_1)

{
  int *piVar1;
  HDC hDC;
  
  hDC = GetDC(*(HWND *)(param_1 + -0x20));
  if (hDC == (HDC)0x0) {
    return 0x80004005;
  }
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,1,0xffffffff,0,0,0,hDC,param_1 + 0x80,param_1 + 0x80,0,0);
  }
  ReleaseDC(*(HWND *)(param_1 + -0x20),hDC);
  return 0;
}


