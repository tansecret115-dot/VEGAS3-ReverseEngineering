/* Module: encn3260.dll
   Function: FUN_664a7fa0
   Address: 664a7fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a7fa0(HWND param_1)

{
  HWND hWnd;
  int iVar1;
  BOOL BVar2;
  
  hWnd = param_1;
  iVar1 = FUN_664c3eb0(&DAT_664f0778,(uint)param_1,(int *)&param_1);
  if (iVar1 == 0) {
    BVar2 = IsWindowVisible(hWnd);
    if (BVar2 != 0) {
      FUN_664c3e40(&DAT_664f0758,(uint)hWnd,(int)hWnd);
      ShowWindow(hWnd,0);
    }
  }
  return 1;
}


