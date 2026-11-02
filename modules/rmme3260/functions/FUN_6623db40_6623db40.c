/* Module: rmme3260.dll
   Function: FUN_6623db40
   Address: 6623db40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623db40(HWND param_1)

{
  HWND hWnd;
  int iVar1;
  BOOL BVar2;
  
  hWnd = param_1;
  iVar1 = FUN_66251030(&DAT_6627cf80,(uint)param_1,(int *)&param_1);
  if (iVar1 == 0) {
    BVar2 = IsWindowVisible(hWnd);
    if (BVar2 != 0) {
      FUN_66250fc0(&DAT_6627cf60,(uint)hWnd,(int)hWnd);
      ShowWindow(hWnd,0);
    }
  }
  return 1;
}


