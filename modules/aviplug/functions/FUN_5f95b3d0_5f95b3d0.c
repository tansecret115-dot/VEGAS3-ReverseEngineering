/* Module: aviplug.dll
   Function: FUN_5f95b3d0
   Address: 5f95b3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f95b3d0(void *this,BOOL param_1,int *param_2)

{
  int *piVar1;
  int nIDDlgItem;
  HWND hWnd;
  BOOL bEnable;
  
  nIDDlgItem = *param_2;
  while (nIDDlgItem != 0) {
    bEnable = param_1;
    hWnd = GetDlgItem(*(HWND *)((int)this + 0x14),nIDDlgItem);
    EnableWindow(hWnd,bEnable);
    piVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    nIDDlgItem = *piVar1;
  }
  return;
}


